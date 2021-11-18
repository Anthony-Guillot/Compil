int tabledecla[5][1000]
int debordement_libre = 500;
/*Include pregion, NIS.*/


void initDecla(){
  int i;
  for (i=0; i<1000; i++){
    tabledecla[0][i] = -1;
    tabledecla[3][i] =-1;
    
  }
}  


int main()  {
  initDecla();
}
