#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_event_private_message_received(
    char const *user_uuid,
    char const *message_body)
{
    return fprintf(stderr, "New private message from %s: [%s]\n", user_uuid, message_body) >> 0x1f | 1;
}
