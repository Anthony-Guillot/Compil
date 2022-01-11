#ifndef TABLE_DECLA_H
#define TABLE_DECLA_H
#include <stdio.h>
#include <stdlib.h>
#include "tableRepre.h"
/*Auteur : CONDOM Matthieu GUILLOT Anthony*/

/*--- Parcours la table de declaration pour voir si dans la meme region , une declaration de meme nature n'existe pas ---*/
int verifRegion(int pos1,int nature);
/*--- Renvoie la taille d'un type dont la position dans le table des decla est donnée en parametre ---*/
int tailleType(int lexType);
/*--- retourne la position de la variable dans la region la plus proche ---*/
int chercheVar(int lexeme);
/*--- retourne la position du type dans la region la plus proche ---*/
int chercheType(int lexeme);

int chercheProc(int lexeme);
/*--- Rajoute une structure dans le tableau des declaration ---*/
void ajoutTypeStruct(int lexAssocie,int taille);
/*--- Rajoute un champ dans le tableau de declaration ---*/
void ajoutChamp(int lexAssocie);
/*--- Rajoute un Tableau dans le tableau de declaration ---*/
void ajoutTypeTab(int lexAssocie,int taille);
/*--- Rajoute une variable dans le tableau de declaration ---*/
void ajoutVariable(int lexAssocie,int typeAssocie);
/*--- Rajoute un param dans le tableau de declaration ---*/
void ajoutParam(int lexAssocie,int typeAssocie);
/*--- Rajoute une fonction dans le tableau de declaration ---*/
void ajoutFonction(int lexAssocie);
/*--- Rajoute une procedure dans le tableau de declaration ---*/
void ajoutProcedure(int lexAssocie);
/*--- Initialise le tableau des declarations ---*/
void initDecla();
/*--- Affiche le tableau des declarations ---*/
void AfficherTD();
#endif