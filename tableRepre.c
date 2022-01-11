#include "tableRepre.h"
/*Auteur : CONDOM Matthieu*/
int tablerepre[1000];
int ibase=0;
int i=0;

void initrepre(){
  int n;
  for (n=0; n<1000; n++){
    tablerepre[n]=-1;
  }
}

void iplus(){
  i+=1;
}

int getibase(){
  return ibase;
}

void ajoutTRchamp(int type, int nlex, int move){
  i++;
  tablerepre[i]=type;
  i++;
  tablerepre[i]=nlex;
  i++;
  tablerepre[i]=move;
}

void ajoutTRstruct(int taille){
  i++;
  tablerepre[ibase]=taille;
  ibase=i;
}

void ajoutTRtab(int type, int nb){
  i++;
  tablerepre[ibase]= type;
  tablerepre[ibase+1]= nb;
  ibase=i;
}

void TRdimtab(int x, int y){
  i++;
  tablerepre[i]= x;
  i++;
  tablerepre[i]= y;
}

void ajoutTRfonc(int type, int nb){
  i++;
  tablerepre[ibase+1]= type;
  tablerepre[ibase]= nb;
  ibase=i;
}

void ajoutTRproc(int nb){
  i++;
  tablerepre[ibase]= nb;
  ibase=i;
}

void afficherTR(){
  int aff=0;
  for(aff=0;aff<1000 && tablerepre[aff]!=-1;aff++){
    fprintf(stdout,"%d : %d\n",aff,tablerepre[aff]);
  }
}