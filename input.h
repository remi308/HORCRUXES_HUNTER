#ifndef INPUT_H
#define INPUT_H

#include <stdbool.h>

typedef struct {
    bool left;
    bool right;
    bool shoot;
    bool pause;
    bool quit;
} InputState;

void input_init(void);
void input_update(InputState* state);
void input_cleanup(void);

#endif