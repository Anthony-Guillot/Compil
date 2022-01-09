#include "pile_execution.h"
#include "tableRegion.h"

void init_pile(){
    int i=0;
    for(i=0;i<MAX_PILE;i++){
        pile[i]=INT_MAX;
    }
}

void changer_bc(){
    reg++;
    chainage_dyna();
    chainage_static();
    bc = loc;
}

void chainage_dyna(){
    pile[loc]=bc;
    loc++;
}

void chainage_static(){
    int i=0;
    for(i=0;i<tab_region[reg].nis;i++){
        pile[loc+i]=pile[bc+i];
    }
    loc+=i;
}

void affiche_pile(){
    int i=0;
    fprintf(stdout,"------\n");
    while(i<MAX_PILE && pile[i]!=INT_MAX){
        fprintf(stdout,"|%-4d|\n",pile[i]);
    }
    fprintf(stdout,"------\n");
}