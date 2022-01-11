#include"tableRegion.h"
region tab_region[MAX_REGION];
/*Auteur BONNEFOY Pierre*/
void init_tab_region(){
    int i=0;
    for(i=0;i<MAX_REGION;i++){
        tab_region[i].taille=-1;
        tab_region[i].nis=-1;
        tab_region[i].repre=NULL;
    }
}

void inserer_region(int taille,int nis,arbre repre,int i){
    tab_region[i].taille=taille;
    tab_region[i].nis=nis;
    tab_region[i].repre=repre;
}

arbre recupArbre(int region){
    return tab_region[region].repre;
}

void afficher_region(){
    int i=0;
    fprintf(stderr,"\n----------------------\n| Num | Taille | NIS |\n----------------------\n");
    while(i<MAX_REGION && tab_region[i].taille!=-1){
        fprintf(stderr,"| %-3d | %-6d | %-3d |\n----------------------\n",i,tab_region[i].taille,tab_region[i].nis);
        i++;
    }
    fprintf(stderr,"\n");
}