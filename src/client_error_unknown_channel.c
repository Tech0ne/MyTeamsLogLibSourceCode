#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_error_unknown_channel(const char* channel_uuid)
{
    return fprintf(stderr, "Unknown channel %s\n", channel_uuid) >> 0x1f | 1;
}