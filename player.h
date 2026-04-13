#ifndef PLAYER_H
#define PLAYER_H

typedef struct
{
    float x;
    float y;
    float largeur;
    float hauteur;
    float vitesse;
    int vivant;
    int direction;
} Player;

void initPlayer(Player *p, float zoneX, float zoneY, float zoneW, float zoneH);
void updatePlayer(Player *p, int moveLeft, int moveRight, float dt,
                  float zoneX, float zoneW);
void killPlayer(Player *p);
int playerIsAlive(const Player *p);
float playerCenterX(const Player *p);
float playerTopY(const Player *p);

#endif//
// Created by yacin on 10/04/2026.
//

#ifndef HORCRUXES_HUNTER_PLAYER_H
#define HORCRUXES_HUNTER_PLAYER_H

#endif //HORCRUXES_HUNTER_PLAYER_H