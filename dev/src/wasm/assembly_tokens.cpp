#include "wasm/assembly_parser.h"

#include <cstring>
#include <limits>

namespace wasm {
namespace assembly {

const PPToken& Line::token() const
{
	if (empty())
		throw WasmError("unexpected end of Wasm assembly statement");
	return tokens[at_];
}

bool Line::at(const char* spelling) const
{
	return !empty() && token().length == std::strlen(spelling) &&
		std::memcmp(token().spelling, spelling, token().length) == 0;
}

bool Line::accept(const char* spelling)
{
	if (!at(spelling))
		return false;
	++at_;
	return true;
}

void Line::expect(const char* spelling)
{
	if (!accept(spelling))
		throw WasmError(std::string("expected '") + spelling + "' in Wasm assembly");
}

std::string Line::word()
{
	if (empty() || (token().kind != PPTokenKind::Identifier && !at(".")))
		throw WasmError("expected a Wasm assembly name");
	std::string result;
	do
	{
		result.append(token().spelling, token().length);
		++at_;
	} while (!empty() && (token().flags & kLeadingSpace) == 0 &&
		(token().kind == PPTokenKind::Identifier || at(".") ||
			(token().kind == PPTokenKind::PPNumber && token().spelling[0] == '.')));
	return result;
}

uint64_t Line::integer()
{
	const bool negative = accept("-");
	if (!negative)
		accept("+");
	const PPToken& number = token();
	if (number.kind != PPTokenKind::PPNumber)
		throw WasmError("expected an integer in Wasm assembly");
	uint64_t value = 0;
	unsigned base = 10;
	uint32_t begin = 0;
	if (number.length > 2 && number.spelling[0] == '0' && (number.spelling[1] == 'x' || number.spelling[1] == 'X'))
	{
		base = 16;
		begin = 2;
	}
	for (uint32_t i = begin; i < number.length; ++i)
	{
		const char c = number.spelling[i];
		const unsigned digit = c >= '0' && c <= '9' ? c - '0'
			: c >= 'a' && c <= 'f'                  ? c - 'a' + 10
			: c >= 'A' && c <= 'F'                  ? c - 'A' + 10
													: base;
		if (digit >= base || value > (std::numeric_limits<uint64_t>::max() - digit) / base)
			throw WasmError("invalid or overflowing integer in Wasm assembly");
		value = value * base + digit;
	}
	++at_;
	return negative ? uint64_t(0) - value : value;
}

std::string Line::string()
{
	const PPToken& literal = token();
	if (literal.kind != PPTokenKind::StringLiteral || literal.length < 2 || literal.spelling[0] != '"')
		throw WasmError("expected an ordinary string in Wasm assembly");
	std::string result;
	for (uint32_t i = 1; i + 1 < literal.length; ++i)
	{
		char c = literal.spelling[i];
		if (c == '\\')
		{
			c = literal.spelling[++i];
			if (c == 'n')
				c = '\n';
			else if (c == 'r')
				c = '\r';
			else if (c == 't')
				c = '\t';
			else if (c >= '0' && c <= '7')
			{
				unsigned byte = c - '0';
				for (unsigned count = 1; count < 3 && i + 2 < literal.length && literal.spelling[i + 1] >= '0' &&
					literal.spelling[i + 1] <= '7';
					++count)
					byte = byte * 8 + literal.spelling[++i] - '0';
				if (byte > 255)
					throw WasmError("overflowing assembly string escape");
				c = static_cast<char>(byte);
			}
			else if (c != '\\' && c != '"')
				throw WasmError("unsupported Wasm assembly string escape");
		}
		result.push_back(c);
	}
	++at_;
	return result;
}

void Line::done() const
{
	if (!empty())
		throw WasmError("unexpected operand in Wasm assembly statement");
}

bool Parser::next_line(Line& line)
{
	line = Line();
	if (!started_)
	{
		next_ = input_.next();
		started_ = true;
	}
	while (next_.kind != PPTokenKind::EndOfFile)
	{
		if (!line.tokens.empty() && (next_.flags & kStartOfLine) != 0)
			break;
		if (next_.punctuator == kHashPunctuator)
		{
			do
			{
				next_ = input_.next();
			} while (next_.kind != PPTokenKind::EndOfFile && (next_.flags & kStartOfLine) == 0);
			if (!line.tokens.empty())
				break;
			continue;
		}
		if (next_.kind != PPTokenKind::WhitespaceSequence && next_.kind != PPTokenKind::NewLine)
			line.tokens.push_back(next_);
		next_ = input_.next();
	}
	if (line.tokens.empty())
		return false;
	location_ = line.tokens.front().begin;
	return true;
}

} // namespace assembly
} // namespace wasm
