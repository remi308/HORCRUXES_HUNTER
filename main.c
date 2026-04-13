//
// Created by remi on 30/03/2026.
//

#include <stdio.h>

#include "player.h"

void initPlayer(Player *p, float zoneX, float zoneY, float zoneW, float zoneH)
{
    p->largeur = zoneW * 0.06f;
    p->hauteur = zoneH * 0.10f;
    p->x = zoneX + (zoneW - p->largeur) / 2.0f;
    p->y = zoneY + zoneH - p->hauteur - 10.0f;
    p->vitesse = zoneW * 0.6f;
    p->vivant = 1;
    p->direction = 0;
}

void updatePlayer(Player *p, int moveLeft, int moveRight, float dt,
                  float zoneX, float zoneW)
{
    if (!p->vivant)
        return;

    if (moveLeft && !moveRight)
    {
        p->x -= p->vitesse * dt;
        p->direction = -1;
    }
    else if (moveRight && !moveLeft)
    {
        p->x += p->vitesse * dt;
        p->direction = 1;
    }
    else
    {
        p->direction = 0;
    }

    if (p->x < zoneX)
        p->x = zoneX;

    if (p->x + p->largeur > zoneX + zoneW)
        p->x = zoneX + zoneW - p->largeur;
}

void killPlayer(Player *p)
{
    p->vivant = 0;
}

int playerIsAlive(const Player *p)
{
    return p->vivant;
}

float playerCenterX(const Player *p)
{
    return p->x + p->largeur / 2.0f;
}

float playerTopY(const Player *p)
{
    return p->y;
}
int main() {
    printf("Pret a chasser des horcruxes !\n");
    return 0;
}