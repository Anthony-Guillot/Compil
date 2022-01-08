#include<stdio.h>
#include"arbre.h"

int main(){
    arbre test=NULL;
    arbre tmp=NULL;
    arbre t=NULL;
    t=creer_arbre(OP_BIN,-1,-1);
    inserer_fils(t,creer_arbre(AFFECT,-1,-1));
    inserer_frere(t,creer_arbre(STR,-1,-1));
    tmp=creer_arbre(OP_BIN,-1,-1);
    inserer_fils(tmp,creer_arbre(AFFECT,-1,-1));
    inserer_frere(tmp,creer_arbre(STR,-1,-1));
    test=creer_arbre(OP_BIN,-1,-1);
    inserer_fils(test,t);
    inserer_frere(test,tmp);
    afficher_arbre(test);
    printf("\n");

    return 1;

}
