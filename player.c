#include "player.h"
#include <allegro.h>

#define PLAYER_SPEED 5
#define PLAYER_WIDTH 40

void player_init(Player* player) {
    player->x = SCREEN_W / 2.0f;
    player->y = SCREEN_H - 50.0f;
    player->alive = true;
    player->can_shoot = true;
}

void player_update(Player* player, const InputState* inputs) {
    if (!player->alive) return;

    if (inputs->left) {
        player->x -= PLAYER_SPEED;
    }

    if (inputs->right) {
        player->x += PLAYER_SPEED;
    }

    if (player->x < PLAYER_WIDTH / 2.0f) {
        player->x = PLAYER_WIDTH / 2.0f;
    }

    if (player->x > SCREEN_W - PLAYER_WIDTH / 2.0f) {
        player->x = SCREEN_W - PLAYER_WIDTH / 2.0f;
    }
}