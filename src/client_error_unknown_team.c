#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_error_unknown_team(char const *team_uuid)
{
    return fprintf(stderr, "Unknown team %s\n", team_uuid) >> 0x1f | 1;
}