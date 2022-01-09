#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_PILE 50

typedef struct pile{
 int taille;
 int valeurs[TAILLE_PILE];
}pile;

pile p;
int region=0;

void incr_num_region();
void nispile();
void empiler_region();
void depiler_region();
int sommet_pile();
int estdanspile(int region);
pile initpileR(pile p);
int num_region();
void afficherPile();
