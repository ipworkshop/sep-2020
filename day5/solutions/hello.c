#include "hello.h"
#include <tock.h>

bool hello_is_available(void)
{
    return command(HELLO_DRIVER_NUMBER, 0, 0, 0) == TOCK_SUCCESS;
}

int call_hello_1(void)
{
    return command(HELLO_DRIVER_NUMBER, 1, 0, 0);
}

int increment_counter(void)
{
    return command(HELLO_DRIVER_NUMBER, 2, 0, 0);
}