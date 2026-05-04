#include "player.h"
#include <allegro.h>

#define PLAYER_SPEED 5
#define PLAYER_WIDTH 40
#define PLAYER_HEIGHT 30

void player_init(Player* player) {
    player->x = SCREEN_W / 2.0f;
    player->y = SCREEN_H - 40.0f;
    player->alive = true;
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

void player_get_tir_position(const Player* player, float* x, float* y) {
    *x = player->x;
    *y = player->y - PLAYER_HEIGHT / 2.0f;
}