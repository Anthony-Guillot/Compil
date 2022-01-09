#include "pregion.h"


void incr_num_region() {
  region ++;
}

/* NIS = taille */
void nispile(){
  return p.taille;
}

void empiler_region(){
  incr_num_region();
  p.valeurs[p.taille]= region;
  p.taille ++;
}

void depiler_region(){
  if (p.taille!=1){
    p.taille --;
  }
}

int sommet_pile(){
  return p.valeurs[p.taille-1];
}

/*Si false alors non déclarer*/
/*Regarder valeurs dans tableDecla les plus lointaine*/
int estdanspile(int region){
  int n;
  for (n=p.taille-1; n>=0; n--){
    if (p.valeurs[n]==region){
      return 1;
    }
  }
  return 0;
}

pile initpileR(pile p){
 p.taille=1;
 p.valeurs[0]=0;
 return p;
}

int num_region(){
 return region;
}

void afficherPile(){
  int n;
  for (n=p.taille-1; n>=0; n--){
    printf("%d\n", p.valeurs[n]);
  }
}

/*
int main(){
  p=initpileR(p);
  afficherPile();
  printf("\n");
  empiler_region();
  empiler_region();
  afficherPile();
  printf("\n");
  depiler_region();
  empiler_region();
  afficherPile();
  printf("\n");
  if(estdanspile(1)){
    printf("%d\n",sommet_pile());
  }
  depiler_region();
  depiler_region();
  depiler_region();
  depiler_region();
  afficherPile();

}
*/
