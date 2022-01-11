#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre.h"

#ifndef TABLEREGION_H
#define TABLEREGION_H

#define MAX_REGION 50

typedef struct region
{
    int taille; /* taille de la region */
    int nis; /* niveau d'inbrication static */
    arbre repre; /* arbre de representation de la region */
}region;
void init_tab_region();
arbre recupArbre(int region);
void inserer_region(int taille,int nis,arbre repre,int i);
void afficher_region();

#endif