#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_print_channel(
    char const *channel_uuid,
    char const *channel_name,
    char const *channel_description)
{
    return fprintf(stderr, "Channel \"%s\" (%s): %s\n", channel_name, channel_uuid, channel_description) >> 0x1f | 1;
}