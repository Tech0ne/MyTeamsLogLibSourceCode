#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_error_unknown_user(char const *user_uuid)
{
    return fprintf(stderr, "Unknown user %s\n", user_uuid) >> 0x1f | 1;
}
