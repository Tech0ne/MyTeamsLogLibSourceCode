#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_error_unknown_thread(char const *thread_uuid)
{
    return fprintf(stderr, "Unknown thread %s\n", thread_uuid) >> 0x1f | 1;
}