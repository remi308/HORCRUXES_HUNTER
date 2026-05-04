//
// Created by remi on 02/04/2026.
//

#include "save.h"
#include <stdio.h>

bool save_partie(const Player* player, const Tir* tir) {
    FILE* f = fopen(SAVE_FILENAME, "wb");
    if (!f) {
        return false;
    }

    if (fwrite(player, sizeof(Player), 1, f) != 1) {
        fclose(f);
        return false;
    }

    if (fwrite(tir, sizeof(Tir), 1, f) != 1) {
        fclose(f);
        return false;
    }

    fclose(f);
    return true;
}

bool charger_partie(Player* player, Tir* tir) {
    FILE* f = fopen(SAVE_FILENAME, "rb");
    if (!f) {
        return false;
    }

    if (fread(player, sizeof(Player), 1, f) != 1) {
        fclose(f);
        return false;
    }

    if (fread(tir, sizeof(Tir), 1, f) != 1) {
        fclose(f);
        return false;
    }

    fclose(f);
    return true;
}

bool save_existe(void) {
    FILE* f = fopen(SAVE_FILENAME, "rb");
    if (!f) {
        return false;
    }
    fclose(f);
    return true;
}
