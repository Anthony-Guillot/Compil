/*--- Inclusion des fichiers ---*/
%{
#include "y.tab.h"
#define ERREUR -99
%}

%%
    /*--- Balise de structure ---*/
PROG {return PROG;}
; {return POINT_VIRGULE;}
BEGIN {return DEBUT;}
END {return FIN;}
: {return DEUX_POINTS;}
struct {return STRUCT;}
endstruct {return FSTRUCT;}

    /*--- Déclaration des types simples ---*/
int {return ENTIER;}
float {return REEL;}
char {return CARACTERE;}
string {return CHAINE;}
booleen {return BOOLEEN;}

    /*--- Déclaration de la grammaire ---*/
[a-zA-Z][a-zA-Z]+ {return CHAINE;}
\[ {return CROCHET_OUVRANT;}
\] {return CROCHET_FERMANT;}
\( {return PARENTHESE_OUVRANTE;}
\) {return PARENTHESE_FERMANTE;}
\{ {return ACCOLADE_OUVRANT;}
\} {return ACCOLADE_FERMANTE;}
[1-9][0-9]* {return CSTE_ENTIERE;}
inst_void {return VIDE;}
[a-z]([a-z]|[A-Z]|[0-9])* {return IDF;} 

    /*--- Déclaration des oppérateur ---*/
= {return OPAFF;}
&& {return AND;}
\|\| {return OR;}
\/  {return DIV;}
\+  {return PLUS;}
\-  {return MOINS;}
\*  {return MULT;}

    /*--- Déclaration des oppérateur bool --*/
== {return EGALE;}
!= {return DIFF;}
<= {return INFE;}
>= {return SUPE;}
< {return INF;}
> {return SUP;}
true {return VRAI;}
false {return FAUX;}


    /*--- Déclaration des fonctions de base ---*/
while {return TANT QUE;}
do {return FAIRE;}
if {return SI;}
then {return ALORS;}
else {return SINON;}
for {return POUR;}
return {return RETOURNE;}



%%