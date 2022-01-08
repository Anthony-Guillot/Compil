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
    case AFFECT:
        fprintf(stderr,"AFFECT");
        break;
    case OP_BIN:
        fprintf(stderr,"OP_BIN");
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

arbre creer_arbre(int type,int declaration,int lexico){
    arbre tmp=(arbre)malloc(sizeof(noeud));
    tmp->fils=NULL;
    tmp->frere=NULL;
    tmp->num_declaration = declaration;
    tmp->num_lexi =lexico;
    tmp->racine_type=type;
    return tmp;
}

void inserer_fils(arbre pere,arbre fils){
    pere->fils=fils;
}

void inserer_frere(arbre pere, arbre frere){
    pere->frere=frere;
}
