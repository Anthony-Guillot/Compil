#include "tableRepre.h"


void initrepre(){
  int n;
  for (n=0; n<1000; n++){
    tablerepre[n]=-1;
  }
}

int getibase(){
  return ibase;
}

int verification(){
  return !(verif);
}

void initibase(){
  if (i !=1){
    ibase = i;
    i = ibase+1;
  }
}

void ajoutTRchamp(int type, int nlex, int move){
  if(i+3>1000 || ibase+3>1000){
    fprintf(stderr, "Err taille table representation\n");
  }
  tablerepre[i]=type;
  i++;
  tablerepre[i]=nlex;
  i++;
  tablerepre[i]=move;
  i++;
  verif--;
}


void ajoutTRstruct(int taille){
  if(i+taille*3+1>1000 || ibase+taille*3+1>1000){
    fprintf(stderr, "Err taille table representation\n");
    exit(-1);
  }
  if(verif!=0){
    fprintf(stderr, "Err argument table representations TRstruct\n");
    exit(-1);
  }
  initibase();
  tablerepre[ibase]=taille;
  verif=taille;
}


void ajoutTRtab(int type, int nb){
  if(i+nb*2+2>1000 || ibase+nb*2+2>1000){
    fprintf(stderr, "Err taille table representation\n");
    exit(-1);
  }
  if(verif!=0){
    fprintf(stderr, "Err argument table representations TRtab\n");
    exit(-1);
  }
  initibase();
  tablerepre[i]= type;
  i++;
  tablerepre[ibase]= nb;
  verif = nb;
}

void TRdimtab(int x, int y){
  if(i+2>1000 || ibase+2>1000){
    fprintf(stderr, "Err taille table representation\n");
    exit(-1);
  }
  tablerepre[i]= x;
  i++;
  tablerepre[i]= y;
  i++;
  verif--;
}



void ajoutTRfonc(int type, int nb){
  if(i+nb*2+2>1000 || ibase+nb*2+2>1000){
    fprintf(stderr, "Err taille table representation");
    exit(-1);
  }
  if(verif!=0){
    fprintf(stderr, "Err argument table representations TRfonc");
    exit(-1);
  }
  if(type <0 || type >3){
    fprintf(stderr, "Type fonction invalide");
    exit(-1);
  }
  initibase();
  tablerepre[i]= type;
  i++;
  tablerepre[ibase]= nb;
  verif = nb;
}

void ajoutTRproc(int nb){
  if(i+nb*2+1>1000 || ibase+nb*2+1>1000){
    fprintf(stderr, "Err taille table representation");
    exit(-1);
  }
  if(verif!=0){
    fprintf(stderr, "Err argument table representations TRProc");
    exit(-1);
  }
  initibase();
  tablerepre[ibase]= nb;
  verif = nb;
}

void ajoutTRpfval(int lex, int type){
  if(i+2>1000 || ibase+2>1000){
    fprintf(stderr, "Err taille table representation");
    exit(-1);
  }
  if(type <0 || type >3){
    fprintf(stderr, "Type f.arguement invalide\n");
    exit(-1);
  }
  tablerepre[i]= lex;
  i++;
  tablerepre[i]= type;
  i++;
  verif--;
}

void afficherTR(){
  int aff=0;

  while((aff!=1000)&& (tablerepre[aff]!=-1)){
    printf("%d ", tablerepre[aff]);
    if((aff+1)%25==0){
      printf("\n");
    }
    aff++;
  }
  printf("\n");

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
