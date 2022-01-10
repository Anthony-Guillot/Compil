#ifndef TABLE_LEXICO_H
#define TABLE_LEXICO_H
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hashcode;
}hashc;

typedef struct
{
    int longueur;
    char* lexeme;
    int suivant;
}lexico;
int calcul_hascode(char* mot,int taille);
void init();
int verif_lexeme(char * lexeme,int position);
void afficherTableLexico();
int insererbis(char * lexeme);
void inserer(char * lexeme);
int verif_hachcode(char *lexeme);
int positionLexeme(char *lexeme);
#endif
