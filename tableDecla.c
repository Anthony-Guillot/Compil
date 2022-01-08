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

    tabledecla[0][0] = 3;
    tabledecla[2][0] = 0;
    tabledecla[4][0] = 1;

     tabledecla[0][0] =3;
    tabledecla[2][0] = 0;
    tabledecla[4][0] = 1;

     tabledecla[0][0] = 3;
    tabledecla[2][0] = 0;
    tabledecla[4][0] = 1;

     tabledecla[3][0] = 3;
    tabledecla[2][0] = 0;
    tabledecla[4][0] = 1;

}
/*---Ajoute dans la table de déclaration les éléments---*/
/*lexassocie viens de base par association_nom dans le YACC = son indice*/
/*---Desc = autre indice contenant sa description---*/
void AjoutTD(int Nature, int Region, int lexassocie, int desc, int exec){

  if(tabledecla[0][lexassocie]==-1){
    tabledecla[0][lexassocie]=Nature;
    tabledecla[2][lexassocie]=Region;
    tabledecla[3][lexassocie]=desc;
    tabledecla[4][lexassocie]=exec;
  else{
    if(tabledecla[1][lexassocie]==-1){
      tabledecla[1][lexassocie]==debordement_libre;
      AjoutTD(Nature, Region debordement_libre, desc, exec);
      debordement_libre++;
    }
    else{
      AjoutTD(Nature, Region, tabledecla[1][lexassocie], desc, exec);
    }
  }
}

/*---Recupére la description---*/
int DescClass(int indice){
  return tabledecla[3][indice];
}

/*---Récupere l'execution, permet de calculer l'execution avec DescClass---*/
int ExecClass(int desc){
  return tabledecla[4][indice];
}

void AfficherTD(){
  int i;
  printf("Table primaire 0 à 500\n");
  for (i=0; i<500; i++){
    if(i%50 == 0){
      printf("\tIndex\tNature\tSuivant\tN°Region\tIndex\tExec\n ");
    }0
    printf("\t%d \t%d \t%d \t%d \t%d \t%d \n", i, tabledecla[0][i], tabledecla[1][i], tabledecla[2][i], tabledecla[3][i], tabledecla[4][i]);
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
