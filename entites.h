#ifndef HORCRUXES_HUNTER_ENTITES_H
#define HORCRUXES_HUNTER_ENTITES_H

typedef struct arme {
    float x, y;
    float duree_restante;
    int active;
    struct arme* suivant;
} t_arme;

typedef struct eclair {
    float x, y;
    float vitesse;
    struct eclair* suivant;
} t_eclair;

typedef struct joueur {
    char pseudo[32];
    int score;
    int niveau_actuel;
    float x, y;
    float vitesse;
    t_arme* arme_actuelle;
} t_joueur;

typedef struct horcruxe {
    float x, y;
    float vx, vy;
    int taille;
    int lance_eclair;
    t_eclair* eclairs;
    struct horcruxe* suivant;
} t_hor;

#endif