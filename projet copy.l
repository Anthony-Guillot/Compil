/*--- Inclusion des fichiers ---*/
%{
#include "y.tab.h"
#define ERREUR -99
int numligne=1; 
%}
%%

    /*---Declaration des debuts de declarations---*/
var {return VARIABLE;}
proc {return PROCEDURE;}
fonc {return FONCTION;}
type {return TYPE;}
tab {return TABLEAU;}
of {return DE;}
    /*--- Déclaration des oppérateur bool --*/
\=\= {return EGALE;}
\!\= {return DIFF;}
\<\= {return INFE;}
\>\= {return SUPE;}
\< {return INF;}
\> {return SUP;}
true {return VRAI;}
false {return FAUX;}

    /*--- Déclaration des fonctions de base ---*/
while {return TANT_QUE;}
do {return FAIRE;}
if {return SI;}
then {return ALORS;}
else {return SINON;}
for {return POUR;}
return {return RETOURNE;}

    /*--- Balise de structure ---*/
PROG {return PROG;}
; {return POINT_VIRGULE;}
, {return VIRGULE;}
BEGIN {printf("debut\n");return DEBUT;}
END {printf("fin\n");return FIN;}
: {return DEUX_POINTS;}
\.\. {return POINT_POINT;}
struct {return STRUCT;}
endstruct {return FSTRUCT;}

    /*--- Déclaration des types simples ---*/
int {return ENTIER;}
float {return REEL;}
char {return CARACTERE;}
string {return CHAINE;}
bool {return BOOLEEN;}

    /*--- Déclaration de la grammaire ---*/
[a-zA-Z][a-zA-Z]+ {return CHAINE;}
\[ {return CROCHET_OUVRANT;}
\] {return CROCHET_FERMANT;}
\( {return PARENTHESE_OUVRANTE;}
\) {return PARENTHESE_FERMANTE;}
\{ {return ACCOLADE_OUVRANT;}
\} {return ACCOLADE_FERMANTE;}
0|([1-9][0-9]*) {return CSTE_ENTIERE;}
0|([1-9][0-9]*)\.([0-9]*[1-9])|0 {return CSTE_REEL;}
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
    /*--- Déclaration des entrées sorties ---*/
read {return LIRE;}
write {return ECRIRE;}
    /*---gestion de la ligne d'erreur---*/
[\n]  {numligne++;}
%%