#include"arbre.h"

/* affiche dans le terminal un arbre (non fini) */
void afficher_arbre(arbre a,int tab){
    int i=0;
    char *chaine,* c="  ";
    switch (a->racine_type)
    {
    case STR_BIS :
    chaine = "A_STRUCT";
    break;
    case TAB_BIS :
    chaine = "A_TAB";
    break;
    case VAR_BIS :
    chaine = "A_VAR";
    break;
case PARAM_BIS :
chaine = "A_PARAM";
    break;
case PROC_BIS :
chaine = "A_PROC";
    break;
case FUN_BIS :
chaine = "A_FUN";
    break;
case AFFECT_BIS :
chaine = "A_AFFECT";
    break;
case PLUS_BIS :
chaine = "A_PLUS";
    break;
case MOINS_BIS :
chaine = "A_MOINS";
    break;
case MULT_BIS :
chaine = "A_MULT";
    break;
case DIV_BIS :
chaine = "A_DIV";
    break;
case LISTE_INST_BIS :
chaine = "A_LIST_INST";
    break;
case SUP_BIS :
chaine = "A_SUP";
    break;
case INF_BIS :
chaine = "A_INF";
    break;
case EGALE_BIS :
chaine = "A_EGALE";
    break;
case SUP_EGALE_BIS :
chaine = "A_SUP_EGALE";
    break;
case INF_EGALE_BIS :
chaine = "A_INF_EGALE";
    break;
case IDF_BIS :
chaine = "A_IDF";
    break;
case CSTE_INT_BIS :
chaine = "A_CSTE_INT";
    break;
case CSTE_FLOAT_BIS :
chaine = "A_CSTE_FLOAT";
    break;
case AND_BIS :
chaine = "A_AND";
    break;
case OR_BIS :
chaine = "A_OR";
    break;
case FALSE_BIS :
chaine = "A_FALSE";
    break;
case TRUE_BIS :
chaine = "A_TRUE";
    break;
case DIFF_BIS:
chaine = "A_DIFF";
    break;
case CONDITION_BIS :
chaine = "A_CONDITION";
    break;
case TQ_BIS :
chaine = "A_TANT_QUE";
    break;
case VIDE_BIS :
chaine = "A_VIDE";
    break;
case RETURN_BIS :
chaine = "A_RETURN";
    break;
case APPEL_BIS:
    chaine = "A_APPEL";
    break;
case POINT_BIS :
    chaine = "A_POINT";
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

arbre inserer_fils(arbre pere,arbre fils){
    pere->fils=fils;
    return pere;
}

arbre inserer_frere(arbre pere, arbre frere){
    pere->frere=frere;
    return pere;
}
