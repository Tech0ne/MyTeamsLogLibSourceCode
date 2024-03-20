#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_event_channel_created(
    char const *channel_uuid,
    char const *channel_name,
    char const *channel_description)
{
    return fprintf(stderr, "New channel created event id %s: %s (%s)\n", channel_uuid, channel_name, channel_description) >> 0x1f | 1;
}