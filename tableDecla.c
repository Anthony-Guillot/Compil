int tabledecla[5][1000]
int debordement_libre = 500;
/*---sert a trouver instantanément un emplacement libre---*/
/*Include pregion, NIS.*/

/*---Initialise le tableau de déclaration---*/
void initDecla(){
  int i;
  for (i=0; i<1000; i++){
    tabledecla[0][i] = -1; 
    tabledecla[1][i] = -1;
    tabledecla[2][i] = -1;
    tabledecla[3][i] = -1; 
    tabledecla[4][i] = -1;
  }
}

void AjoutTD(int i, int Nature, int Region){
  if(tabledecla[0][i]==-1){
    tabledecla[0][i]=Nature;
    tabledecla[2][i]=Region;
  }
  else{
    if(tabledecla[1][i]==-1){
      tabledecla[1][i]==debordement_libre;
      AjoutTD(debordement_libre, Nature, Region);
      debordement_libre++;
    }
    else{
      AjoutTD(tabledecla[1][i], Nature, Region);
    }
  }
}

void AfficherTD(){
  int i;
  printf("Table primaire 0 à 500\n");
  for (i=0; i<500; i++){
    if(i%50 == 0){
      printf("   Index    Nature    Suivant     N°Region     Index     Exec\n ");
    }
    printf("     %d        %d          %d          %d           %d           %d\n", i, tabledecla[0][i], tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
  }

   printf("\n\nTable débordement\n");
   for(i=500; i<debordement_libre; i++){
      if(i%50 == 0){
      printf("   Index    Nature    Suivant     N°Region     Index     Exec\n ");
    }
    printf("     %d        %d          %d          %d           %d         %d\n", i, tabledecla[0][i], tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
   }
}


int main()  {
  initDecla();
}
