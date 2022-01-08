#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ARBRE_H
#define ARBRE_H

/* Définition des macros pour une meilleur lecture du code */
#define STR 1
#define TAB 2
#define VAR 3
#define PARAM 4
#define PROC 5
#define FUN 6
#define AFFECT 7
#define PLUS 8
#define MOINS 9
#define MULT 10
#define DIV 11
#define OP_BIN 12

typedef struct noeud
{
    int racine_type; /* type du noeud */
    int num_declaration; /* numéro de déclaration de l'idf */
    int num_lexi; /* numéro lexico de l'idf */
    struct noeud * fils; /* pointeur vers l'arbre fils */
    struct noeud * frere; /* pointeur vers l'arbre frère */
}noeud;

typedef noeud * arbre;

void afficher_arbre(arbre a);
arbre creer_arbre(int type,int declaration,int lexico);
void inserer_fils(arbre pere,arbre fils);
void inserer_frere(arbre pere, arbre frere);

#endif