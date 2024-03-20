#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_event_thread_created(
    char const *thread_uuid,
    char const *user_uuid,
    time_t thread_timestamp,
    char const *thread_title,
    char const *thread_body)
{
    return fprintf(stderr, "New thread created event id %s by (%s) at %24.24s: %s (%s)\n", thread_uuid, user_uuid,
        ctime(&thread_timestamp), thread_title, thread_body) >> 0x1f | 1;
}