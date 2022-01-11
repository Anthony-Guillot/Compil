/*--- Inclusion des fichiers ---*/
/*Auteur : BONNEFOY Pierre  GUILLOT Anthony*/

%{
    #include <stdio.h>
    #include <string.h>
    #include "arbre.h"
    #include "y.tab.h"
    #include "tableLexico.h"
    #include "tableDecla.h"
    #define ERREUR -99
    int numligne=1; 
%}
%%
  /*--- s'occupe de la gestion des commentaires---*/
\/\*([^*]|\*+[^*/])*\*+\/ {;}
\/\/.* {;}
    /*---Declaration des debuts de declarations---*/
var {return VARIABLE;}
proc {return PROCEDURE;}
fonc {return FONCTION;}
type {return TYPE;}
tab {return TABLEAU;}
of {return DE;}

    /*--- Déclaration des fonctions de base ---*/
while {return TANT_QUE;}
do {return FAIRE;}
if {return SI;}
then {return ALORS;}
else {return SINON;}
for {return POUR;}
return {return RETOURNE;}
true {return VRAI;}
false {return FAUX;}
read {return LIRE;}
write {return ECRIRE;}

    /*--- Balise de structure ---*/
PROG {return PROG;}
\; {return POINT_VIRGULE;}
\, {return VIRGULE;}
BEGIN {return DEBUT;}
END {return FIN;}
\: {return DEUX_POINTS;}
\.\. {return POINT_POINT;}
\. {return POINT;}
struct {return STRUCT;}
endstruct {return FSTRUCT;}

    /*--- Déclaration des types simples ---*/
int {(strdup(yytext));return ENTIER;}
float {(strdup(yytext));return REEL;}
char {(strdup(yytext));return CARACTERE;}
string {(strdup(yytext));return CHAINE;}
bool {(strdup(yytext));return BOOLEEN;}

    /*--- Déclaration de la grammaire ---*/
\[ {return CROCHET_OUVRANT;}
\] {return CROCHET_FERMANT;}
\( {return PARENTHESE_OUVRANTE;}
\) {return PARENTHESE_FERMANTE;}
\{ {return ACCOLADE_OUVRANT;}
\} {return ACCOLADE_FERMANTE;}
0|([1-9][0-9]*) {yylval.type2=atoi(yytext);return CSTE_ENTIERE;}
0|([1-9][0-9]*)\.([0-9]*[1-9])|0 {yylval.type3=atof(yytext);return CSTE_REEL;}
\"[a-zA-Z]\" {return CSTE_CHAR;}
\".*\" {return CSTE_CHAINE;}
inst_void {return VIDE;}
    /*--- Déclaration des oppérateur ---*/
\= {return OPAFF;}
&& {return AND;}
\|\| {return OR;}
\/  {return DIV;}
\+  {return PLUS;}
\-  {return MOINS;}
\*  {return MULT;}

    /*--- Déclaration des oppérateur bool --*/
\=\= {return EGALE;}
\!\= {return DIFF;}
\<\= {return INFE;}
\>\= {return SUPE;}
\< {return INF;}
\> {return SUP;}

    /*---Gestion des idf---*/
[a-zA-Z][a-zA-Z0-9_]* {inserer(strdup(yytext));yylval.type1=creer_arbre(IDF_BIS,chercheVar(positionLexeme(strdup(yytext))),positionLexeme(strdup(yytext)));return IDF;} 


    /*---gestion de la ligne d'erreur---*/
[\n]  {numligne++;}

\" {return ERROR;}
%%