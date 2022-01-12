#ifndef TABLE_REPRE_H
#define TABLE_REPRE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Auteur : CONDOM Matthieu*/
/*---Il incremente la valeur de l'indice de parcours--*/
void iplus();
/*--- Initialise la table des representations ---*/
void initrepre();
/*---Renvoie la valeur du premier indice lors d'un rajout--*/
int getibase();
/*---Rajout un champ d'une structure sdans la table des representations---*/
void ajoutTRchamp(int type, int nlex, int move);
/*---Rajout une structure dans la table des representations---*/
void ajoutTRstruct(int taille);
/*---Rajout un tableau dans la table des representations---*/
void ajoutTRtab(int type, int nb);
/*---Rajout une dimension d'un tableau dans la table des representations---*/
void TRdimtab(int x, int y);
/*---Rajout une fonction dans la table des representations---*/
void ajoutTRfonc(int type, int nb);
/*---Rajout une procedure dans la table des representations---*/
void ajoutTRproc(int nb);
/*---Ajoute les parametre d'une procedure et d'une fonction--*/
void ajoutTRParam(int lexico,int type,int fonction,int debut);
/*---affiche la table des representations---*/
void afficherTR();
#endif