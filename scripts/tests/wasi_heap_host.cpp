#include "wasi_heap_mock.h"

#include <assert.h>
#include <errno.h>
#include <stdint.h>
#include <string.h>
#include <vector>

extern "C" void* cppgm_test_sbrk(intptr_t);
namespace {
const uintptr_t page = 65536;
size_t capacity = 128, maximum = 65535;
std::vector<size_t> requests;
}

extern "C" size_t cppgm_test_memory_size(unsigned memory)
{
	assert(memory == 0);
	return capacity;
}

extern "C" size_t cppgm_test_memory_grow(unsigned memory, size_t delta)
{
	assert(memory == 0);
	requests.push_back(delta);
	if (delta > maximum - capacity)
		return SIZE_MAX;
	const size_t before = capacity;
	capacity += delta;
	return before;
}

int main(int argc, char** argv)
{
	assert(argc == 2);
	if (!strcmp(argv[1], "overflow"))
	{
		capacity = UINTPTR_MAX / page;
		const void* before = cppgm_test_sbrk(0);
		errno = 0;
		assert(cppgm_test_sbrk(page) == reinterpret_cast<void*>(-1));
		assert(errno == ENOMEM && cppgm_test_sbrk(0) == before && requests.empty());
		return 0;
	}
	if (!strcmp(argv[1], "negative"))
		cppgm_test_sbrk(-static_cast<intptr_t>(page));
	if (!strcmp(argv[1], "unaligned"))
		cppgm_test_sbrk(1);
	assert(!strcmp(argv[1], "growth"));
	uintptr_t next = capacity * page;
	assert(reinterpret_cast<uintptr_t>(cppgm_test_sbrk(0)) == next && requests.empty());
	for (unsigned i = 0; i < 2048; ++i)
	{
		assert(reinterpret_cast<uintptr_t>(cppgm_test_sbrk(page)) == next);
		next += page;
		assert(reinterpret_cast<uintptr_t>(cppgm_test_sbrk(0)) == next);
		assert(capacity * page >= next && capacity * page - next < 16 * 1024 * 1024);
	}
	assert(requests.size() < 32); // Each request must not copy the preceding heap.
	maximum = capacity + 1;
	const size_t count = requests.size();
	const uintptr_t amount = capacity * page - next + page;
	assert(reinterpret_cast<uintptr_t>(cppgm_test_sbrk(amount)) == next);
	assert(requests.size() == count + 2 && requests[count] > 1 && requests.back() == 1);
	const void* before = cppgm_test_sbrk(0);
	errno = 0;
	assert(cppgm_test_sbrk(page) == reinterpret_cast<void*>(-1));
	assert(errno == ENOMEM && cppgm_test_sbrk(0) == before);
}
