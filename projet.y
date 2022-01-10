%{
  #include <stdio.h>
  #include "tableLexico.h"
  #include "tableDecla.h"
  #include "tableRepre.h"
  #include "y.tab.h"
  extern int numligne;
  extern char *yytext;
  char *nombuffer;
  char *nombuffer2;
  char *type;
  int decalage=0;
  int tailleTab=0;
  int tailleStruct=0;
  int dimensionDebut=0;
  int dimensionFin=0;
  int nbChamps=0;
  int yylex();
  int yyerror();
%}
/*---TOKEN types---*/
%token ENTIER REEL BOOLEEN CARACTERE CHAINE IDF
/*---TOKEN  booleen---*/
%token INF INFE SUPE SUP DIFF EGALE AND OR
/*---TOKEN return booleen---*/
%token VRAI FAUX
/*---TOKEN structures d'un corps/programme---*/
%token PROG DEBUT FIN
/*---TOKEN ponctuation---*/
%token POINT_VIRGULE DEUX_POINTS POINT_POINT VIRGULE POINT
/*---TOKEN concernant les declarations---*/
%token TYPE VARIABLE PROCEDURE FONCTION STRUCT FSTRUCT TABLEAU DE RETOURNE
/*---TOKEN concernant les boucles---*/
%token SI ALORS SINON TANT_QUE FAIRE POUR
/*---TOKEN concernant les constantes---*/
%token CSTE_ENTIERE CSTE_REEL CSTE_CHAINE CSTE_CHAR
/*---TOKEN vide---*/
%token VIDE
/*---TOKEN de ponctuation--*/
%token ACCOLADE_FERMANTE ACCOLADE_OUVRANT PARENTHESE_FERMANTE PARENTHESE_OUVRANTE CROCHET_OUVRANT CROCHET_FERMANT
/*---TOKEN Arithmretique---*/
%token PLUS MOINS MULT DIV OPAFF
/*---TOKEN entree sorties---*/
%token LIRE ECRIRE
/*---TOKEN erreur en cas de symboles erreur---*/
%token ERROR
%%

programme:PROG corps {afficherTableLexico();AfficherTD();afficherTR();}
;

  /*--- Strucutures globales d'un programme d'abord declaration puis instruction ---*/
corps:liste_declarations liste_instructions
|liste_instructions
;

  /*--- Strucutures des listes de declaration ---*/
liste_declarations:declaration POINT_VIRGULE
|liste_declarations declaration POINT_VIRGULE
;
declaration:declaration_type
|declaration_variable
|declaration_procedure
|declaration_fonction
;

declaration_type:TYPE IDF {nombuffer=strdup(yytext);} DEUX_POINTS suite_declaration_type
;

suite_declaration_type:{nbChamps=0;tailleStruct=0;decalage=0;}STRUCT liste_champs FSTRUCT {ajoutTypeStruct(positionLexeme(nombuffer),tailleStruct);ajoutTRstruct(nbChamps);}
|{tailleTab=0;iplus();nbChamps=0;}TABLEAU dimension DE nom_type {type=strdup(yytext);ajoutTypeTab(positionLexeme(nombuffer),tailleTab*tailleType(positionLexeme(type)));ajoutTRtab(positionLexeme(type),nbChamps);}
;

dimension:CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT {tailleTab=$2;}
;

liste_dimensions:une_dimension {$$=$1;}
|liste_dimensions VIRGULE une_dimension {$$=$1*$3;}
;

une_dimension:expression POINT_POINT expression {$$=($3-$1)+1;nbChamps+=1;TRdimtab($1,$3);}
;
declaration_variable:VARIABLE IDF {nombuffer=strdup(yytext);} DEUX_POINTS nom_type {type=strdup(yytext);ajoutVariable(positionLexeme(nombuffer),positionLexeme(type));}
;

declaration_procedure:PROCEDURE {nbChamps=0;setRegion(1);} IDF {ajoutProcedure(positionLexeme(strdup(yytext)));} liste_parametres {ajoutTRproc(nbChamps);} corps {setRegion(0);}
;

declaration_fonction:FONCTION {nbChamps=0;setRegion(1);} IDF {nombuffer=strdup(yytext);ajoutFonction(positionLexeme(strdup(yytext)));} liste_parametres RETOURNE type_simple{type=strdup(yytext);ajoutTRfonc(positionLexeme(type),nbChamps);} corps {setRegion(0);}
;
/*-----------------------------------------------------------------------*/
  /*--- Strucutures des listes d'instructions---*/
liste_instructions:DEBUT suite_liste_inst FIN
;
  /*--- instruction(s) suivis de virgule---*/
suite_liste_inst:instruction POINT_VIRGULE
|suite_liste_inst instruction POINT_VIRGULE
;

  /*--- Liste des instructions possibles ---*/
instruction:affectation
|condition
|tant_que
|appel
|VIDE
|RETOURNE resultat_retourne
|ecriture
|lecture
;

/*-----------------------------------------------------------------------*/



liste_champs:un_champ {tailleStruct+=$1;}
|liste_champs POINT_VIRGULE un_champ {tailleStruct+=$3;}
;

un_champ:IDF {nombuffer2=strdup(yytext);}DEUX_POINTS nom_type {type=strdup(yytext);$$=tailleType(positionLexeme(type));
ajoutTRchamp(positionLexeme(nombuffer2),positionLexeme(strdup(yytext)),decalage);decalage+=tailleType(positionLexeme(strdup(yytext)));nbChamps+=1;}
;


nom_type:type_simple
|IDF
;
  /*--- Liste possible des types ---*/
type_simple:ENTIER
|REEL
|BOOLEEN
|CARACTERE
|CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT
;



liste_parametres:
|PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE
;

liste_param:un_param
|liste_param POINT_VIRGULE un_param
;

un_param:IDF {nombuffer=strdup(yytext);}DEUX_POINTS type_simple {nbChamps+=1;type=strdup(yytext);ajoutParam(positionLexeme(nombuffer),positionLexeme(type));}
;

  /*--- Strucuture d'un return ---*/

resultat_retourne:PARENTHESE_OUVRANTE expression PARENTHESE_FERMANTE
;

appel:IDF liste_arguments
;

liste_arguments:
|PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
;

liste_args:un_arg
|liste_args VIRGULE un_arg
;

un_arg:expression
;

  /*--- Strucuture d'un if ---*/
condition:SI PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE 
ALORS liste_instructions
|SI PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE 
ALORS liste_instructions SINON liste_instructions
;

  /*--- Strucuture While ---*/
tant_que:TANT_QUE PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE FAIRE liste_instructions
;

  /*--- Strucuture d'une affectation ---*/
affectation:variable OPAFF expression
;

/*--- description des formes possibles de toutes les expressions (arithmétiques et booléennes) ---*/

expression:expression_arithmetique
|expression_booleenne
;
expression_arithmetique:expression_arithmetique PLUS expression_arithmetique2 {$$=$1 + $3;}
|expression_arithmetique MOINS expression_arithmetique2 {$$=$1 - $3;}
|expression_arithmetique2
;

expression_arithmetique2:expression_arithmetique2 MULT expression_arithmetique3 {$$=$1 * $3;}
|expression_arithmetique2 DIV expression_arithmetique3 {$$=$1 / $3;}
|expression_arithmetique3
;

expression_arithmetique3:PARENTHESE_OUVRANTE expression_arithmetique PARENTHESE_FERMANTE
|CSTE_ENTIERE {$$=$1;}
|CSTE_REEL {$$=$1;}
|CSTE_CHAINE {$$=$1;}
|variable
;


/*--- Liste des expressiony boolenes utilisé utilisé dans des conditions ---*/
expression_booleenne: expression_arithmetique opbool expression_arithmetique
|expression_booleenne AND expression_booleenne
|expression_booleenne OR expression_booleenne
;

opbool: EGALE
|DIFF
|SUP
|SUPE
|INF
|INFE
;

lecture: LIRE PARENTHESE_OUVRANTE liste_variables PARENTHESE_FERMANTE;

ecriture: ECRIRE PARENTHESE_OUVRANTE CSTE_CHAINE suite_format PARENTHESE_FERMANTE;

liste_variables:variable;
|liste_variables VIRGULE variable;

suite_format: 
|VIRGULE variable suite_format
;

variable:IDF
| tableau
| variable POINT variable;
;

tableau:IDF CROCHET_OUVRANT expression CROCHET_FERMANT;

%%
int yyerror(){
  printf("Erreur de syntaxe à la ligne %d\n",numligne);
 }

int main(){
  initrepre();
  init();
  initDecla();
  return yyparse();
}
