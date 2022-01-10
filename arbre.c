#include"arbre.h"

/* affiche dans le terminal un arbre (non fini) */
void afficher_arbre(arbre a,int tab){
    int i=0;
    char *chaine,* c="  ";
    switch (a->racine_type)
    {
    case STR:
        chaine="STR";
        break;
    case TAB:
        chaine="TAB";
        break;
    case VAR:
        chaine="VAR";
        /* reste à ajouter les numéro*/
        break;
    case PARAM:
        chaine="PARAM";
        break;
    case PROC:
        chaine="PROC";
        break;
    case FUN:
        chaine="FUN";
        break;
    case AFFECT:
        chaine="AFFECT";
        break;
    case OP_BIN_BIS:
        chaine="OP_BIN";
        break;
    default:
        break;
    }

    fprintf(stderr,"%10s",chaine);
    
    if (a->frere!=NULL){
        tab++;
        afficher_arbre(a->frere,tab);
    }
    
        
    if(a->fils!=NULL){
        tab--;
        fprintf(stderr,"\n");
        for(i=0;i<tab;i++){
            fprintf(stderr,"%10s",c);
        }
        afficher_arbre(a->fils,tab);
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
