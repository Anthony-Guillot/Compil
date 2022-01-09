#include"tableRegion.h"

region test[50];

void init_tab_region(){
    int i=0;
    for(i=0;i<50;i++){
        test[i].taille=-1;
        test[i].nis=-1;
        test[i].repre=NULL;
    }
}

void inserer_region(int taille,int nis,arbre repre){
    int i=0;
    while(test[i].taille!=-1 && i<50){
        i++;
    }
    test[i].taille=taille;
    test[i].nis=nis;
    test[i].repre=repre;
}

void afficher_region(){
    int i=0;
    fprintf(stderr,"\n----------------------\n| Num | Taille | NIS |\n----------------------\n");
    while(test[i].taille!=-1 && i<50){
        fprintf(stderr,"| %-3d | %-6d | %-3d |\n----------------------\n",i,test[i].taille,test[i].nis);
        i++;
    }
    fprintf(stderr,"\n");
}

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