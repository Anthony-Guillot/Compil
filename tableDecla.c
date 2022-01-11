#include "tableDecla.h"
#include "pregion.h"
/*Author GUILLOT Anthony*/
/*Co-author CONDOM Mahieu*/
int tabledecla[5][1000];
int debordement_libre = 500;
extern int numligne;

int verifInsertion(int pos1,int nature){
  if(tabledecla[0][pos1]==nature && tabledecla[2][pos1]==sommet_pile()){
    return 1;
  }
  else{
    return 0;
  }
}
int verifRegion(int lexAssocie,int nature){
  if(tabledecla[0][lexAssocie]!=-1){
    if(verifInsertion(lexAssocie,nature)==0){
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
          if(verifInsertion(lexAssocie,nature)==0){
              lexAssocie=tabledecla[1][lexAssocie];
          }
          else{
            fprintf(stderr,"Erreur une variable existe deja pour son nom, doublon à la ligne %d\n",numligne);
            exit(-1);
          }
        }
        tabledecla[1][lexAssocie]=debordement_libre;
        lexAssocie=debordement_libre;
        debordement_libre+=1;
        return lexAssocie;
      }
    }
    else{
      fprintf(stderr,"Erreur une variable existe deja pour son nom, doublon à la ligne %d\n",numligne);
    }
  }
  else{
    return lexAssocie;
  }
}

int tailleType(int lexType){
  return tabledecla[4][chercheType(lexType)];
}

void ajoutChamp(int lexAssocie){
    lexAssocie=verifRegion(lexAssocie,-2);
    tabledecla[0][lexAssocie]=-2;
}

int chercheType(int lexeme){
  int i,dernier=-1,min=nispile();
  if(estdanspile(tabledecla[2][lexeme]) &&(tabledecla[0][lexeme]==1 || tabledecla[0][lexeme]==2 || tabledecla[0][lexeme]==0)){
    dernier=lexeme;
  }
  while(tabledecla[1][lexeme]!=-1){
    if(tabledecla[1][lexeme]==-1){
      break;
    }
    else{
      lexeme=tabledecla[1][lexeme];
    }
    if(estdanspile(tabledecla[2][lexeme])){
      if(positionDansPile(tabledecla[2][lexeme])<min &&(tabledecla[0][lexeme]==1 || tabledecla[0][lexeme]==2 || tabledecla[0][lexeme]==0)){
        dernier=lexeme;
      }
    }
  }
  return dernier;
}
int chercheVar(int lexeme){
  int i,dernier=-1,min=nispile();
  if(estdanspile(tabledecla[2][lexeme]) &&(tabledecla[0][lexeme]==3 || tabledecla[0][lexeme]==4)){
    dernier=lexeme;
  }
  while(tabledecla[1][lexeme]!=-1){
    if(tabledecla[1][lexeme]==-1){
      break;
    }
    else{
      lexeme=tabledecla[1][lexeme];
    }
    if(estdanspile(tabledecla[2][lexeme])){
      if(positionDansPile(tabledecla[2][lexeme])<min &&(tabledecla[0][lexeme]==3 || tabledecla[0][lexeme]==4)){
        dernier=lexeme;
      }
    }
  }
  return dernier;
}

int regionProcedure(int lexeme){
  int i,dernier=-1,min=nispile();
  if(tabledecla[0][lexeme]==5 || tabledecla[0][lexeme]==6){
    dernier=lexeme;
  }
  while(tabledecla[1][lexeme]!=-1){
    if(tabledecla[1][lexeme]==-1){
      break;
    }
    else{
      lexeme=tabledecla[1][lexeme];
    }
    if(estdanspile(tabledecla[2][lexeme])){
      if(positionDansPile(tabledecla[2][lexeme])<min &&(tabledecla[0][lexeme]==5 || tabledecla[0][lexeme]==6)){
        dernier=lexeme;
      }
    }
  }
  return tabledecla[dernier][4];
}

void ajoutTypeStruct(int lexAssocie,int taille){
  lexAssocie=verifRegion(lexAssocie,1);
  tabledecla[0][lexAssocie]=1;
  tabledecla[2][lexAssocie]=sommet_pile();
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=taille;
}

void ajoutTypeTab(int lexAssocie,int taille){
  lexAssocie=verifRegion(lexAssocie,2);
  tabledecla[0][lexAssocie]=2;
  tabledecla[2][lexAssocie]=sommet_pile();
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=taille;
}

void ajoutVariable(int lexAssocie,int typeAssocie){
  lexAssocie=verifRegion(lexAssocie,3);
  tabledecla[0][lexAssocie]=3;
  tabledecla[2][lexAssocie]=sommet_pile();
  tabledecla[3][lexAssocie]=chercheType(typeAssocie);
  tabledecla[4][lexAssocie]=getTailleBis();
  setTailleBis(tailleType(chercheType(typeAssocie)));
}

void ajoutParam(int lexAssocie,int typeAssocie){
  lexAssocie=verifRegion(lexAssocie,4);
  tabledecla[0][lexAssocie]=4;
  tabledecla[2][lexAssocie]=sommet_pile();
  tabledecla[3][lexAssocie]=chercheType(typeAssocie);
  tabledecla[4][lexAssocie]=getTailleBis();
  setTailleBis(tailleType(chercheType(typeAssocie)));
}

void ajoutFonction(int lexAssocie){
  lexAssocie=verifRegion(lexAssocie,6);
  tabledecla[0][lexAssocie]=6;
  tabledecla[2][lexAssocie]=deuxiemeValeur();
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=sommet_pile();
}

void ajoutProcedure(int lexAssocie){
  lexAssocie=verifRegion(lexAssocie,5);
  tabledecla[0][lexAssocie]=5;
  tabledecla[2][lexAssocie]=deuxiemeValeur();
  tabledecla[3][lexAssocie]=getibase();
  tabledecla[4][lexAssocie]=sommet_pile();
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
  char *chaine;
  printf("-------------------------------\n");
  printf("|         Table primaire      |\n");
  printf("-------------------------------\n");
  for (i=0;tabledecla[0][i]!=-1; i++){
    chaine="";
    switch (tabledecla[0][i])
    {
    case 0:
      chaine="TYPE_B";
      break;
    case 1:
      chaine="TYPE_S";
      break;
    case 2:
      chaine="TYPE_T";
      break;
    case 3:
      chaine="VAR";
      break;
    case 4:
      chaine="PARAM";
      break;
    case 5:
      chaine="PROC";
      break;
    case 6:
      chaine="FONC";
      break;
    default:
      chaine="-1";
      break;
    }
    printf("|%-4d|%-8s|%-3d|%-3d|%-3d|%-3d|\n", i,chaine, tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
  }
  
  printf("-------------------------------\n");
  printf("\n");
   printf("-------------------------------\n");
   printf("|       Table débordement     |\n");
   printf("-------------------------------\n");
   for(i=500;tabledecla[0][i]!=-1; i++){
     chaine="";
    switch (tabledecla[0][i])
    {
    case 0:
      chaine="TYPE_B";
      break;
    case 1:
      chaine="TYPE_S";
      break;
    case 2:
      chaine="TYPE_T";
      break;
    case 3:
      chaine="VAR";
      break;
    case 4:
      chaine="PARAM";
      break;
    case 5:
      chaine="PROC";
      break;
    case 6:
      chaine="FONC";
      break;
    default:
      chaine="-1";
      break;
    }
    printf("|%-4d|%-8s|%-3d|%-3d|%-3d|%-3d|\n", i, chaine, tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
   }
   printf("-------------------------------\n");
}