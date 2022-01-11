#ifndef TABLE_LEXICO_H
#define TABLE_LEXICO_H
#include <stdio.h>
#include <stdlib.h>
/*Auteur : GUILLOT Anthony*/ 
typedef struct{
    int hashcode;
}hashc;
typedef struct
{
    int longueur;
    char* lexeme;
    int suivant;
}lexico;
/*--- Calcul le hashcode d'un lexeme donnée en parametre avec sa taille ---*/
int calcul_hashcode(char* mot,int taille);
/*--- Initialise la table Lexicographique ---*/
void init();
/*---Verifier si le lexeme a position donnée est different , si oui, il verifie le suivant s'il en existe un---*/
int verif_lexeme(char * lexeme,int position);
/*---Affichage du tableau lexicographique---*/
void afficherTableLexico();
/*---Parcours le tableau, et insere le lexeme, sa taille a la fin et retourne la position inserer---*/
int insererbis(char * lexeme);
/*---Verifie le hashcode pour savoir ou commencer a parcourir les verifications---*/
void inserer(char * lexeme);
/*---Verifie si le haschode est deja present, et si oui, renvoie sa poosition---*/
int verif_hachcode(char *lexeme);
/*--- Renvoie la position d'un lexeme ---*/
int positionLexeme(char *lexeme);
#endif
