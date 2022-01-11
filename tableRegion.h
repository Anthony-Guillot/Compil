#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre.h"
/*Auteur BONNEFOY Pierre*/
#ifndef TABLEREGION_H
#define TABLEREGION_H

#define MAX_REGION 50

typedef struct region
{
    int taille; /* taille de la region */
    int nis; /* niveau d'inbrication static */
    arbre repre; /* arbre de representation de la region */
}region;
/*---Initialise la table des regions---*/
void init_tab_region();
/*---Recupere l'arbre d'une region donnée en parametre---*/
arbre recupArbre(int region);
/*---Insere une region dont les donnée sont mise en parametre---*/
void inserer_region(int taille,int nis,arbre repre,int i);
/*---Affiche la table des regions---*/
void afficher_region();

#endif