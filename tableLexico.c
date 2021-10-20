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
void init(lexico *table, hashc *tablehc)
{
    for (int i = 0; i < 500; i++)
    {
        table[i].longueur = 0;
        table[i].lexeme = "";
        table[i].suivant = -1;
    }
    for (int i = 0; i < 32; i++)
    {
        tablehc[i].hashcode = -1;
    }
}

/*---Affichage du tableau lexicographique---*/
void afficherTableLexico(lexico *table)
{
    int i = 0;
    fprintf(stdout,"position| longueur\t| lexem\t\t| suivant\t\n");
    for (i = 0; table[i].longueur != 0; i++)
    {
        fprintf(stdout,"%d\t|\t%d\t|\t%s\t|\t%d\n",i, table[i].longueur, table[i].lexeme, table[i].suivant);
    }
}

/*---Parcours le tableau, et insere le lexeme, sa taille a la fin et retourne la position inserer---*/
int insererbis(char *lexeme, lexico *table)
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

/*---Verifier si le lexeme a position donnée est different , si oui, il verifie le suivant s'il en existe un---*/
void verif_lexeme(char *lexeme, lexico *table, int position)
{
    int longeur;
    longeur = strlen(lexeme);
    
    if (longeur != table[position].longueur)
    {
        if (table[position].suivant == -1)
        {
            table[position].suivant = insererbis(lexeme, table);
        }
        else
        {
            verif_lexeme(lexeme, table, table[position].suivant);
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
                table[position].suivant = insererbis(lexeme, table);
                return;
            }
            else
            {
                verif_lexeme(lexeme, table, table[position].suivant);
            }
        }
    }
}

/*---Verifie le hashcode pour savoir ou commencer a parcourir les verifications---*/
void inserer(char *lexeme, lexico *table, hashc *tablehc)
{
    int retour = verif_hachcode(lexeme, tablehc);
    if (retour == -1)
    {
        return;
    }
    else
    {
        verif_lexeme(lexeme, table, retour);
    }
}

/*---Verifie si le haschode est deja present, et si oui, renvoie sa poosition---*/
int verif_hachcode(char *lexeme, hashc *tabhc)
{
    int hc;
    hc = calcul_hascode(lexeme, strlen(lexeme));
    if (tabhc[hc].hashcode == -1)
    {
        tabhc[hc].hashcode=insererbis(lexeme,table);
        return -1;
    }
    else
    {
        return tabhc[hc].hashcode;
    }
}
int main()
{
    init(table, tabhashcode);
    
    
    inserer("x12",table,tabhashcode);
    inserer("ok",table,tabhashcode);
    inserer("touze",table,tabhashcode);
    inserer("x1",table,tabhashcode);
    inserer("gte",table,tabhashcode);
    inserer("Bte",table,tabhashcode);
    inserer("Che",table,tabhashcode);
    inserer("x12",table,tabhashcode);
    inserer("12x",table,tabhashcode);
    
    afficherTableLexico(table);

    exit(EXIT_SUCCESS);
}