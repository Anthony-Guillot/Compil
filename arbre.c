#include"arbre.h"

/* affiche dans le terminal un arbre (non fini) */
void afficher_arbre(arbre a){
    switch (a->racine_type)
    {
    case STR:
        fprintf(stderr,"STR");
        break;
    case TAB:
        fprintf(stderr,"TAB");
        break;
    case VAR:
        fprintf(stderr,"VAR");
        /* reste à ajouter les numéro*/
        break;
    case PARAM:
        fprintf(stderr,"PARAM");
        break;
    case PROC:
        fprintf(stderr,"PROC");
        break;
    case FUN:
        fprintf(stderr,"FUN");
        break;
    default:
        break;
    }
    if (a->frere!=NULL)
    {
        fprintf(stderr,"\t");
        afficher_arbre(a->frere);
    }
    if(a->fils!=NULL){
        fprintf(stderr,"\n");
        afficher_arbre(a->fils);
    }
    
}

int main(){

    exit(EXIT_SUCCESS);
}