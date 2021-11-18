#define TAILLE_PILE 100;

typedef pile{
  short taille;
  char valeurs[TAILLE_PILE] 
}
/* NIS = taille */
pile p;
char region=0;

void incr_num_region() {
  region ++;
}

void empiler_region(int reg){
  p.valeurs[p.taille]= reg;
  p.taille ++;
}
int depiler_region(){
  p.taille --;
  return p.valeurs[p.taille];
}

int sommet_pile(){
  return p.valeurs[p.taille-1];

pile initialiser pile(pile p){
  p.taille=1;
  p.valeurs[0]=0;
  return p;
}

int num_region(){
  return region;
}

int main(){
  
  
}
