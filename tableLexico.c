#include "tableLexico.h"
#include <string.h>

void initTableLexico(lexico* table){
    for(int i=0;i<5000;i++){
        table[i].longueur=0;
        table[i].lexeme="";
        table[i].suivant=0;
    }
}

void afficherTableLexico(lexico* table){
    int i=0;
    for(i=0;table[i].longueur!=0;i++){
        printf("%d | %s | %d\n",table[i].longueur,table[i].lexeme,table[i].suivant);
    }
}

int inserer(char * lexeme,lexico* table){
    int i=0;
    for(i=0;table[i].longueur!=0;i++){
        if(strcmp(lexeme,table[i].lexeme)==0){
            return i;
        }
    }
    table[i].longueur=strlen(lexeme);
    table[i].lexeme=lexeme;
    table[i].suivant=-1;
    return i;
}

int main(){
    lexico* table;
    initTableLexico(table);

}