#include "600-source-lto-inline-variable.t.h"

static int separate_value = 3;
extern "C" int* shared_address();
extern "C" int* separate_address();

extern "C" int check()
{
    if (&shared_value != shared_address() || &separate_value == separate_address())
        return -1;
    *shared_address() += 5;
    return shared_value + separate_value + *separate_address();
}
