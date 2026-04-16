#ifndef PLAYER_H
#define PLAYER_H

#include <stdbool.h>
#include "input.h"

typedef struct {
    float x;
    float y;
    bool alive;
    bool can_shoot;
} Player;

void player_init(Player* player);
void player_update(Player* player, const InputState* inputs);

#endif