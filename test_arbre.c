#include<stdio.h>
#include"arbre.h"

int main(){
    arbre test=NULL;
    arbre tmp=NULL;
    arbre t=NULL;
    arbre t2=NULL;
    arbre t3=NULL;
    t=creer_arbre(OP_BIN_BIS,-1,-1);
    inserer_fils(t,creer_arbre(AFFECT_BIS,-1,-1));
    inserer_frere(t,creer_arbre(STR_BIS,-1,-1));
    tmp=creer_arbre(OP_BIN_BIS,-1,-1);
    inserer_fils(tmp,creer_arbre(AFFECT_BIS,-1,-1));
    inserer_frere(tmp,creer_arbre(STR_BIS,-1,-1));
    t2=creer_arbre(OP_BIN_BIS,-1,-1);
    t3=t2;
    inserer_fils(t2,tmp);
    inserer_frere(t2,creer_arbre(STR_BIS,-1,-1));
    test=creer_arbre(OP_BIN_BIS,-1,-1);
    inserer_fils(test,t);
    inserer_frere(test,t2);
    /*afficher_arbre(test,0);*/
    printf("\n");

    return 1;

}
