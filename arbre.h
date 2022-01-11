#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Auteur : BONNEFOY Pierre*/
#ifndef ARBRE_H
#define ARBRE_H

/* Définition des macros pour une meilleur lecture du code */
#define STR_BIS 1
#define TAB_BIS 2
#define VAR_BIS 3
#define PARAM_BIS 4
#define PROC_BIS 5
#define FUN_BIS 6
#define AFFECT_BIS 7
#define PLUS_BIS 8
#define MOINS_BIS 9
#define MULT_BIS 10
#define DIV_BIS 11
#define OP_BIN_BIS 12
#define LISTE_INST_BIS 13
#define SUP_BIS 14
#define INF_BIS 15
#define EGALE_BIS 16
#define SUP_EGALE_BIS 17
#define INF_EGALE_BIS 18
#define IDF_BIS 19
#define CSTE_INT_BIS 20
#define CSTE_FLOAT_BIS 21
#define AND_BIS 22
#define OR_BIS 23
#define FALSE_BIS 24
#define TRUE_BIS 25
#define DIFF_BIS 26
#define CONDITION_BIS 27
#define TQ_BIS 28
#define VIDE_BIS 29
#define RETURN_BIS 30
#define APPEL_BIS 31
#define POINT_BIS 32


typedef struct noeud
{
    int racine_type; /* type du noeud */
    int num_declaration; /* numéro de déclaration de l'idf */
    int num_lexi; /* numéro lexico de l'idf */
    struct noeud * fils; /* pointeur vers l'arbre fils */
    struct noeud * frere; /* pointeur vers l'arbre frère */
}noeud;

typedef noeud * arbre;
/*--- Affichage d'un arbre donnée en parametre ---*/
void afficher_arbre(arbre a);
/*--- Alloue la memoire pour un arbre et initialise avec les valeurs de données en parametre ---*/
arbre creer_arbre(int type,int declaration,int lexico);
/*--- rajoute le fils donnée en 2eme parametre a l'arbre en premier parametre ---*/
arbre inserer_fils(arbre pere,arbre fils);
/*--- rajoute le frere donnée en 2eme parametre a l'arbre en premier parametre ---*/
arbre inserer_frere(arbre pere, arbre frere);

#endif