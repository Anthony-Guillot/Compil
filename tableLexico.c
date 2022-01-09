#include "tableLexico.h"
#include <string.h>

lexico table[500];
hashc tabhashcode[31];
/*---Calcul le hashcode d'un lexeme---*/
int calcul_hascode(char *mot, int taille)
{
    int somme=0;
    for (int i = 0; i < taille; i++)
    {
        somme += mot[i];
    }
    return somme % 32;
}

/*---Initialise le tableau de hashcode et le tableau lexico---*/
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

/*---Affichage du tableau lexicographique---*/
void afficherTableLexico()
{
    printf("------------------------------------------\n");
    printf("|num|Longueur  |Lexeme           |Suivant|\n");
    printf("------------------------------------------\n");
    int i = 0;
    for (i = 0; table[i].longueur != 0; i++)
    {
        printf("|%-3d|%-9d |%-16s |%-7d|\n", i,table[i].longueur, table[i].lexeme, table[i].suivant);
    }
    printf("------------------------------------------\n");
}

/*---Parcours le tableau, et insere le lexeme, sa taille a la fin et retourne la position inserer---*/
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
    return i - 1;
}

/*---Verifier si le lexeme a position donnée est different , si oui, il verifie le suivant s'il en existe un---*/
void verif_lexeme(char *lexeme, int position){
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
            return;
        }
        else
        {
            if (table[position].suivant == -1)
            {
                table[position].suivant = insererbis(lexeme);
            }
            else
            {
                verif_lexeme(lexeme,table[position].suivant);
            }
        }
    }
}

/*---Verifie le hashcode pour savoir ou commencer a parcourir les verifications---*/
void inserer(char *lexeme)
{
    int retour = verif_hachcode(lexeme);
    if (retour == -1)
    {
        tabhashcode[calcul_hascode(lexeme, strlen(lexeme))].hashcode = insererbis(lexeme);
    }
    else
    {
        verif_lexeme(lexeme, retour);
    }
}

/*---Verifie si le haschode est deja present, et si oui, renvoie sa poosition---*/
int verif_hachcode(char *lexeme)
{
    int hc;
    hc = calcul_hascode(lexeme, strlen(lexeme));
    if (tabhashcode[hc].hashcode == -1)
    {
        return -1;
    }
    else
    {
        return tabhashcode[hc].hashcode;
    }
}
int main()
{
    init(table, tabhashcode);
    inserer("anthony");
    inserer("matthieu");
    inserer("pierre");
    inserer("ian");
    inserer("soan");
    inserer("alexandre");
    inserer("ophelie");
    inserer("thomas");
    inserer("thomas");
    inserer("thomas");
    inserer("thomas");
    afficherTableLexico();
}
