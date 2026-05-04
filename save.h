//
// Created by remi on 02/04/2026.
//

#ifndef HORCRUXES_HUNTER_SAVE_H
#define HORCRUXES_HUNTER_SAVE_H

#include <stdbool.h>
#include "player.h"
#include "tir.h"

#define SAVE_FILENAME "partie.sav"

bool save_partie(const Player* player, const Tir* tir);
bool charger_partie(Player* player, Tir* tir);
bool save_existe(void);

#endif //HORCRUXES_HUNTER_SAVE_H
