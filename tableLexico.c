#include "tableLexico.h"
#include <string.h>
/*Auteur : GUILLOT Anthony*/ 
lexico table[500];
hashc tabhashcode[31];

int calcul_hashcode(char *mot, int taille)
{
    int somme=0;
    for (int i = 0; i < taille; i++)
    {
        somme += mot[i];
    }
    return somme % 32;
}

void init()
{
    for (int i = 0; i < 500; i++)
    {
        table[i].longueur = 0;
        table[i].lexeme = "";
        table[i].suivant = -1;
    }
    for (int i = 0; i < 32; i++)
    {
        tabhashcode[i].hashcode = -1;
    }
        table[0].longueur=3;
    table[0].lexeme="int";
    table[0].suivant=-1;
    table[1].longueur=5;
    table[1].lexeme="float";
    table[1].suivant=-1;
    table[2].longueur=4;
    table[2].lexeme="bool";
    table[2].suivant=-1;
    table[3].longueur=4;
    table[3].lexeme="char";
    table[3].suivant=-1;

}

void afficherTableLexico()
{
    printf("------------------------------------------\n");
    printf("            Table lexicographique         \n");
    printf("------------------------------------------\n");
    printf("|num|Longueur  |Lexeme           |Suivant|\n");
    printf("------------------------------------------\n");
    int i = 0;
    for (i = 0; table[i].longueur != 0; i++)
    {
        printf("|%-3d|%-9d |%-16s |%-7d|\n", i,table[i].longueur, table[i].lexeme, table[i].suivant);
    }
    /*
    printf("------------------------------------------\n");
    printf("               Table Hashcode         \n");
    printf("------------------------------------------\n");
    printf("|num|Hash|\n");
    printf("--------------\n");
    for (i = 0; i<32; i++)
    {
        printf("|%-3d|%-9d|\n", i,tabhashcode[i].hashcode);
    }
    printf("--------------\n");*/
}

int insererbis(char *lexeme)
{
    int i;
    for (i = 0; i < 500; i++)
    {
        if (table[i].longueur == 0)
        {
            table[i].longueur = strlen(lexeme);
            table[i].lexeme = lexeme;
            break;
        }
    }
    return i;
}

int  verif_lexeme(char *lexeme, int position)
{
    int longeur;
    longeur = strlen(lexeme);
    if (longeur != table[position].longueur)
    {
        if (table[position].suivant == -1)
        {
            table[position].suivant = insererbis(lexeme);
        }
        else
        {
            verif_lexeme(lexeme, table[position].suivant);
        }
    }
    else
    {
        if (strcmp(lexeme, table[position].lexeme) == 0)
        {
            return position;
        }
        else
        {
            if (table[position].suivant == -1)
            {
                table[position].suivant = insererbis(lexeme);
            }
            else
            {
                verif_lexeme(lexeme, table[position].suivant);
            }
        }
    }
}

void inserer(char *lexeme)
{
    int retour = verif_hachcode(lexeme);
    if (retour == -1)
    {
        tabhashcode[calcul_hashcode(lexeme, strlen(lexeme))].hashcode = insererbis(lexeme);
    }
    else
    {
        verif_lexeme(lexeme, retour);
    }
}

int positionLexeme(char *lexeme){
    int i;
    for(i=0;i<500;i++){
        if(strcmp(table[i].lexeme,lexeme)==0){
            return i;
        }
    }
    return -1;
}

int verif_hachcode(char *lexeme)
{
    int hc;
    hc = calcul_hashcode(lexeme, strlen(lexeme));
    if (tabhashcode[hc].hashcode == -1)
    {
        return -1;
    }
    else
    {
        return tabhashcode[hc].hashcode;
    }
}