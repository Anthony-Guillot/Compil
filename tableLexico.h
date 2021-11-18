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
void init(lexico* table,hashc* tablehc);
void verif_lexeme(char * lexeme,lexico* table,int position);
void afficherTableLexico(lexico* table);
int insererbis(char * lexeme,lexico* table);
void verif_lexeme(char * lexeme,lexico* table,int position);
void inserer(char * lexeme,lexico* table,hashc* tablehc);
int verif_hachcode(char *lexeme,hashc *tabhc);
#endif
