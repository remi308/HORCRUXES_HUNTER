//
// Created by remi on 12/04/2026.
//

#ifndef HORCRUXES_HUNTER_ENTITES_H
#define HORCRUXES_HUNTER_ENTITES_H

#endif //HORCRUXES_HUNTER_ENTITES_H

typedef struct arme{
    float x, y ;
    float duree_restante ;
    int active;
    struct arme * suivant ;
}t_arme;

typedef struct joueur{
    char pseudo[32] ;
    int score ;
    int niveau_actuel ;
    float x, y ;
    float vitesse ;
    struct arme* arme_actuelle ;
}t_joueur;

typedef struct horcruxe{
    float x, y ;
    float vx,vy ;
    int taille;
    int lance_eclair;
    struct arme * eclair;
    struct horcruxe * suivant ;
}t_hor;

typedef struct aclair{
    float x,y ;
    float vitesse ;
    struct eclair * suivant ;
}t_eclair;

