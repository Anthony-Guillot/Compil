#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_PILE 50

typedef struct pile{
 int taille;
 int valeurs[TAILLE_PILE];
 int tailleBis[TAILLE_PILE];
}pile;

void setTailleBis(int taille);

int getTailleBis();

int positionDansPile(int region);
void incr_num_region();
int nispile();
void empiler_region();
void depiler_region();
int sommet_pile();
int estdanspile(int region);
void initpileR();
int num_region();
void afficherPile();
