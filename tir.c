#include "tir.h"

void tir_init(Tir* tir) {
    tir->x = 0;
    tir->y = 0;
    tir->speed = 8.0f;
    tir->actif = false;
}

void tir_lancer(Tir* tir, float start_x, float start_y) {
    if (!tir->actif) {
        tir->x = start_x;
        tir->y = start_y;
        tir->actif = true;
    }
}

void tir_update(Tir* tir) {
    if (!tir->actif) return;

    tir->y -= tir->speed;

    if (tir->y < 0) {
        tir->actif = false;
    }
}

void tir_draw(const Tir* tir, BITMAP* buffer) {
    if (!tir->actif) return;

    line(buffer,
         (int)tir->x, (int)tir->y,
         (int)tir->x, (int)(tir->y - 15),
         makecol(255, 255, 0));
}