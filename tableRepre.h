#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tablerepre[1000];
int ibase=0;
int i=1;
int verif=0;

void initrepre();
int getibase();
int verification();
void initibase();
void ajoutTRchamp(int type, int nlex, int move);
void ajoutTRstruct(int taille);
void ajoutTRtab(int type, int nb);
void TRdimtab(int x, int y);
void ajoutTRfonc(int type, int nb);
void ajoutTRproc(int nb);
void ajoutTRpfval(int lex, int type);
void afficherTR();
