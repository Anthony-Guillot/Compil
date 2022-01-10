#include "tableDecla.h"

int tabledecla[5][1000];
int debordement_libre = 500;
int region_courante=0;

int getRegion(){
  return region_courante;
}

void setRegion(int plus){
  if(plus==1){
    region_courante+=1;
  }
  else{
    region_courante-=1;
  }
}

int verifRegion(int lexAssocie){
  if(tabledecla[0][lexAssocie]!=-1){
    if(tabledecla[1][lexAssocie]==-1){
      tabledecla[1][lexAssocie]=debordement_libre;
      lexAssocie=debordement_libre;
      debordement_libre+=1;
      return lexAssocie;
    }
    else{
      lexAssocie=tabledecla[1][lexAssocie];
      while (tabledecla[1][lexAssocie]!=-1)
      {
        lexAssocie=tabledecla[1][lexAssocie];
      }
      tabledecla[1][lexAssocie]=debordement_libre;
      lexAssocie=debordement_libre;
      debordement_libre+=1;
      return lexAssocie;
    }
  }
  else{
    return lexAssocie;
  }
}

int tailleType(int lexType){
  return tabledecla[4][chercheType(region_courante,lexType)];
}

int chercheType(int region,int lexeme){
  int i,dernier=-1;
  if(tabledecla[1][lexeme]<=region &&(tabledecla[0][lexeme]==1 || tabledecla[0][lexeme]==2 || tabledecla[0][lexeme]==0)){
    dernier=lexeme;
  }
  while(tabledecla[1][lexeme]!=-1){
    if(tabledecla[1][lexeme]==-1){
      break;
    }
    else{
      lexeme=tabledecla[1][lexeme];
    }
    if(tabledecla[1][lexeme]<=region &&(tabledecla[0][lexeme]==1 || tabledecla[0][lexeme]==2)){
      dernier=lexeme;
    }
  }
  return dernier;
}

void ajoutTypeStruct(int lexAssocie,int taille){
  lexAssocie=verifRegion(lexAssocie);
  tabledecla[0][lexAssocie]=1;
  tabledecla[2][lexAssocie]=region_courante;
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=taille;
}

void ajoutTypeTab(int lexAssocie,int taille){
  lexAssocie=verifRegion(lexAssocie);
  tabledecla[0][lexAssocie]=2;
  tabledecla[2][lexAssocie]=region_courante;
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=taille;
}

void ajoutVariable(int lexAssocie,int typeAssocie){
  lexAssocie=verifRegion(lexAssocie);
  tabledecla[0][lexAssocie]=3;
  tabledecla[2][lexAssocie]=region_courante;
  tabledecla[3][lexAssocie]=chercheType(region_courante,typeAssocie);
}

void ajoutParam(int lexAssocie,int typeAssocie){
  lexAssocie=verifRegion(lexAssocie);
  tabledecla[0][lexAssocie]=4;
  tabledecla[2][lexAssocie]=region_courante;
  tabledecla[3][lexAssocie]=chercheType(region_courante,typeAssocie);
}

void ajoutFonction(int lexAssocie){
  lexAssocie=verifRegion(lexAssocie);
  tabledecla[0][lexAssocie]=6;
  tabledecla[2][lexAssocie]=region_courante-1;
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=region_courante;
}

void ajoutProcedure(int lexAssocie){
  lexAssocie=verifRegion(lexAssocie);
  tabledecla[0][lexAssocie]=5;
  tabledecla[2][lexAssocie]=region_courante-1;
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=region_courante;
}

void initDecla(){
  int i;
  for (i=0; i<1000; i++){
    tabledecla[0][i] = -1;
    tabledecla[1][i] = -1;
    tabledecla[2][i] = -1;
    tabledecla[3][i] = -1;
    tabledecla[4][i] = -1;
  }
    tabledecla[0][0] = 0;
    tabledecla[0][1] = 0;
    tabledecla[0][2] = 0;
    tabledecla[0][3] = 0;
    
    tabledecla[2][0] = 0;
    tabledecla[2][1] = 0;
    tabledecla[2][2] = 0;
    tabledecla[2][3] = 0;
    
    tabledecla[4][0] = 1;
    tabledecla[4][1] = 1;
    tabledecla[4][2] = 1;
    tabledecla[4][3] = 1;
    
}

int DescClass(int indice){
  return tabledecla[3][indice];
}

int ExecClass(int desc){
  return tabledecla[4][desc];
}

void AfficherTD(){
  int i;
  printf("Table primaire 0 à 500\n");
  for (i=0; i<500; i++){
    printf("\t%d \t%d \t%d \t%d \t%d \t%d \n", i, tabledecla[0][i], tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
  }

   printf("\n\nTable débordement\n");
   for(i=500; i<debordement_libre; i++){
    printf("     %d        %d          %d          %d           %d         %d\n", i, tabledecla[0][i], tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
   }
}