#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_PILE 50
/*Auteur : CONDOM Matthieu*/
typedef struct pile{
 int taille;
 int valeurs[TAILLE_PILE];
 int tailleBis[TAILLE_PILE];
}pile;

/*--- renvoie la region a l'indice 1---*/ 
int deuxiemeValeur();
/*--- Incremente la valeur de la taille de la region en sommet de pile avec la valeur donnée en parametre ---*/
void setTailleBis(int taille);
/*--- recupere la valeur de la taille de la region en sommet de pile ---*/
int getTailleBis();
/*--- Renvoie la position dans la pile d'une region donnée en parametre ---*/
int positionDansPile(int region);
/*--- Incremente le nombre de region déjà créée ---*/
void incr_num_region();
/*--- renvoie la taille de la pile ---*/
int nispile();
/*--- empile une region dans la pile ---*/
void empiler_region();
/*--- depile une region dans la pile ---*/
void depiler_region();
/*--- renvoie le numero de la region en sommet de pile ---*/
int sommet_pile();
/*--- verifie si une region est dans la pile ---*/
int estdanspile(int region);
/*--- Initialise la pile ---*/
void initpileR();
/*--- renvoie le nombre de region déjà créée ---*/
int num_region();
/*--- Affiche la pile ---*/
void afficherPile();
