#include "pregion.h"
int region=0;
pile p;

void incr_num_region() {
  region ++;
}
int positionDansPile(int region){
  int n=0;
  for(n=0;n<p.taille;n++){
    if(p.valeurs[n]==region){
      return n;
    }
  }
  fprintf(stderr,"erreur dans la pile\n");
  return -1;
}
/* NIS = taille */
int nispile(){
  return p.taille;
}

void empiler_region(){
  incr_num_region();
  for(int n=p.taille;n>=0;n--){
    p.valeurs[n]=p.valeurs[n-1];
  }
  p.valeurs[0]= region;
  p.taille ++;
}

void depiler_region(){
  for(int n=0;n<p.taille;n++){
    p.valeurs[n]=p.valeurs[n+1];
  }
}

int sommet_pile(){
  return p.valeurs[0];
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

void initpileR(){
 p.taille=1;
 p.valeurs[0]=0;
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
