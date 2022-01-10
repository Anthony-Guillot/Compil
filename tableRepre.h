#ifndef TABLE_REPRE_H
#define TABLE_REPRE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void iplus();
void initrepre();
int getibase();
void ajoutTRchamp(int type, int nlex, int move);
void ajoutTRstruct(int taille);
void ajoutTRtab(int type, int nb);
void TRdimtab(int x, int y);
void ajoutTRfonc(int type, int nb);
void ajoutTRproc(int nb);
void ajoutTRpfval(int lex, int type);
void afficherTR();
#endif