#include"tableRegion.h"
region tab_region[MAX_REGION];

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

void afficher_region(){
    int i=0;
    fprintf(stderr,"\n----------------------\n| Num | Taille | NIS |\n----------------------\n");
    while(i<MAX_REGION && tab_region[i].taille!=-1){
        fprintf(stderr,"| %-3d | %-6d | %-3d |\n----------------------\n",i,tab_region[i].taille,tab_region[i].nis);
        i++;
    }
    fprintf(stderr,"\n");
}
/*
int main(){
    
    init_tab_region();
    afficher_region();
    inserer_region(12,3,NULL);
    inserer_region(2,31,NULL);
    inserer_region(102,53,NULL);
    inserer_region(5,6,NULL);
    inserer_region(1,4,NULL);
    inserer_region(84,25,NULL);
    inserer_region(31,03,NULL);
    inserer_region(15,13,NULL);
    afficher_region();
}
*/