#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_error_already_exist(void)
{
    return fprintf(stderr, "Already exist: action prohibited\n") >> 0x1f | 1;
}
