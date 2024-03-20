#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_event_logged_in(char const *user_uuid, const char *user_name)
{
    return fprintf(stderr, "Client %s logged in with login %s\n", user_uuid, user_name) >> 0x1f | 1;
}