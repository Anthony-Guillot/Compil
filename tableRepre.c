#include "tableRepre.h"

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

void ajoutTRpfval(int lex, int type){
  i++;
  tablerepre[i]= lex;
  i++;
  tablerepre[i]= type;
}

void afficherTR(){
  int aff=0;
  for(aff=0;aff<1000 && tablerepre[aff]!=-1;aff++){
    fprintf(stdout,"%d : %d\n",aff,tablerepre[aff]);
  }
}
/*
int main(){
  initrepre();
  ajoutTRstruct(3);
  ajoutTRchamp(1,1,1);
  ajoutTRchamp(2,2,2);
  ajoutTRchamp(3,3,3);
  printf("%d\n", getibase());
  ajoutTRstruct(4);
  ajoutTRchamp(1,1,1);
  ajoutTRchamp(2,2,2);
  ajoutTRchamp(3,3,3);
  ajoutTRchamp(4,4,4);
  printf("%d\n", getibase());
  ajoutTRtab(0,2);
  TRdimtab(5,5);
  TRdimtab(1,8);
  printf("%d\n", getibase());

  ajoutTRfonc(3, 5);
  printf("%d\n", getibase());
  ajoutTRpfval(5, 0);
  ajoutTRpfval(5, 1);
  ajoutTRpfval(5, 2);
  ajoutTRpfval(5, 3);
  ajoutTRpfval(5, 3);


  ajoutTRproc(2);
  ajoutTRpfval(2, 0);
  printf("%d\n", verification());
  ajoutTRpfval(0, 1);
  printf("%d\n", verification());
  printf("%d\n", getibase());

  afficherTR();
  exit(0);
}
*/