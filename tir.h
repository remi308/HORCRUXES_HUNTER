#ifndef TIR_H
#define TIR_H

#include <stdbool.h>
#include <allegro.h>

typedef struct {
    float x;
    float y;
    float vitesse;
    bool actif;
} Tir;

void tir_init(Tir* tir);
void tir_lancer(Tir* tir, float x, float y);
void tir_update(Tir* tir);
void tir_draw(const Tir* tir, BITMAP* buffer);

#endif