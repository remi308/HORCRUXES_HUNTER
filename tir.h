#ifndef TIR_H
#define TIR_H

#include <stdbool.h>
#include <allegro.h>

typedef struct {
    float x;
    float y;
    float speed;
    bool actif;
} Tir;

void tir_init(Tir* tir);
void tir_lancer(Tir* tir, float start_x, float start_y);
void tir_update(Tir* tir);
void tir_draw(const Tir* tir, BITMAP* buffer);

#endif