#include "tir.h"

void tir_init(Tir* tir) {
    tir->x = 0;
    tir->y = 0;
    tir->vitesse = 8.0f;
    tir->actif = false;
}

void tir_lancer(Tir* tir, float x, float y) {
    tir->x = x;
    tir->y = y;
    tir->actif = true;
}

void tir_update(Tir* tir) {
    if (!tir->actif) {
        return;
    }

    tir->y -= tir->vitesse;

    if (tir->y < 0) {
        tir->actif = false;
    }
}

void tir_draw(const Tir* tir, BITMAP* buffer) {
    if (!tir->actif) {
        return;
    }

    line(buffer,
         (int)tir->x,
         (int)tir->y,
         (int)tir->x,
         (int)(tir->y - 12),
         makecol(255, 0, 0));
}