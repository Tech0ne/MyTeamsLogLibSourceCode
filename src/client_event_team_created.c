#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int client_event_team_created(
    char const *team_uuid,
    char const *team_name,
    char const *team_description)
{
    return fprintf(stderr, "New team created event id %s: %s (%s)\n", team_uuid, team_name, team_description) >> 0x1f | 1;
}