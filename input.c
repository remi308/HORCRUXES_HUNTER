#include "input.h"
#include <allegro.h>

void input_init(void) {
}

void input_update(InputState* state) {
    state->left  = key[KEY_LEFT];
    state->right = key[KEY_RIGHT];
    state->shoot = key[KEY_ENTER];
    state->pause = key[KEY_P];
    state->quit  = key[KEY_ESC];
    state->save  = key[KEY_S];
    state->load  = key[KEY_L];
}

void input_cleanup(void) {
}