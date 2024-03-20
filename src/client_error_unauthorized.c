#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_error_unauthorized(void)
{
    return fprintf(stderr, "Unauthorized: action prohibited\n") >> 0x1f | 1;
}
