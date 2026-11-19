struct Pointer
{
	int* value;
};
union Float
{
	float value;
	float alternate;
};
struct Floats
{
	union Float first;
	float second;
};

int host_adjust(int* values)
{
	return values[0] + values[1] * 2;
}

struct Pointer host_pointer(struct Pointer p)
{
	++p.value;
	return p;
}

struct Floats host_floats(struct Floats p)
{
	p.first.value += 0.5f;
	p.second -= 0.25f;
	return p;
}

int host_variadic(int tag, ...)
{
	__builtin_va_list args;
	__builtin_va_start(args, tag);
	struct Pointer p = __builtin_va_arg(args, struct Pointer);
	__builtin_va_end(args);
	return tag + *p.value;
}

extern int typed_read(int*);
extern struct Pointer typed_pointer(struct Pointer);
extern int typed_variadic(struct Pointer);
extern struct Floats typed_floats(struct Floats);

int verify(void)
{
	int data[] = { 23, 11 };
	if (typed_read(data) != 52)
		return 1;
	if (typed_pointer((struct Pointer){ data }).value != &data[1])
		return 2;
	if (typed_variadic((struct Pointer){ data }) != 33)
		return 3;
	struct Floats result = typed_floats((struct Floats){ { 3.5f }, 2.25f });
	return result.first.value != 4.0f || result.second != 2.0f ? 4 : 0;
}

#if defined(CPPGM_WASI_START)
void _start(void)
{
	if (verify() != 0)
		__builtin_trap();
}
#elif !defined(__wasm__)
int main(void)
{
	return verify();
}
#endif
