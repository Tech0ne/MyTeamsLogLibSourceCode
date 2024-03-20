#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void client_channel_print_threads(
    const char* thread_uuid,
    const char* user_uuid,
    time_t thread_timestamp,
    const char* thread_title,
    const char* thread_body)
{
    fprintf(stderr, "[Thread %s] Created by %s (%24.24s): %s [%s]\n",
        thread_uuid,
        user_uuid,
        ctime(&thread_timestamp),
        thread_title,
        thread_body);
}
