#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_event_thread_reply_received(
    char const *team_uuid,
    char const *thread_uuid,
    char const *user_uuid,
    char const *reply_body)
{
    return fprintf(stderr, "New reply from %s in thread %s of team %s: [%s]\n", user_uuid, thread_uuid, team_uuid, reply_body) >> 0x1f | 1;
}
