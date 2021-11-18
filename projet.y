%{
  #include <stdio.h>
  extern int numligne;
  extern char *yytext;
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
%%

programme:PROG corps
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

declaration_type:TYPE IDF DEUX_POINTS suite_declaration_type
;

suite_declaration_type:STRUCT liste_champs FSTRUCT
|TABLEAU dimension DE nom_type
;

dimension:CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT
;

liste_dimensions:une_dimension
|liste_dimensions VIRGULE une_dimension
;

une_dimension:expression POINT_POINT expression
;
declaration_variable:VARIABLE IDF DEUX_POINTS nom_type
;

declaration_procedure:PROCEDURE IDF liste_parametres corps
;

declaration_fonction:FONCTION IDF liste_parametres RETOURNE type_simple corps
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
|lecture
|ecriture
;

/*-----------------------------------------------------------------------*/



liste_champs:un_champ
|liste_champs POINT_VIRGULE un_champ
;

un_champ:IDF DEUX_POINTS nom_type
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

un_param:IDF DEUX_POINTS type_simple
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
;

  /*--- Strucuture While ---*/
tant_que:TANT_QUE expression_booleenne FAIRE liste_instructions
;

  /*--- Strucuture d'une affectation ---*/
affectation:variable OPAFF expression_arithmetique
;
variable:IDF
|IDF suite_crochet
;
suite_crochet:CROCHET_OUVRANT expression_arithmetique CROCHET_FERMANT
|CROCHET_OUVRANT expression_arithmetique CROCHET_FERMANT suite_crochet
;
/*--- description des formes possibles de toutes les expressions (arithmétiques et booléennes) ---*/

expression:expression_arithmetique
|expression_booleenne
;
expression_arithmetique:expression_arithmetique PLUS expression_arithmetique2
|expression_arithmetique MOINS expression_arithmetique2
|expression_arithmetique2
;

expression_arithmetique2:expression_arithmetique2 MULT expression_arithmetique3
|expression_arithmetique2 DIV expression_arithmetique3
|expression_arithmetique3
;

expression_arithmetique3:PARENTHESE_OUVRANTE expression_arithmetique PARENTHESE_FERMANTE
|CSTE_ENTIERE
|variable
;


/*--- Liste des expression boolenes utilisé utilisé dans des conditions ---*/
expression_booleenne: nom_type opbool nom_type
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
ecriture: ECRIRE PARENTHESE_OUVRANTE format suite_ecriture PARENTHESE_FERMANTE;
liste_variables:variable;
|liste_variables VIRGULE variable;
format:
;
variable:IDF
| tableau
| variable POINT tableau
| variable POINT IDF
;

tableau:IDF CROCHET_OUVRANT expression_arithmetique CROCHET_FERMANT;

suite_ecriture:
              | VIRGULE variable suite_ecriture
              ; 
%%
int yyerror(){
  printf("Erreur de syntaxe à la ligne %d\n",numligne);
 }

int main(){
  return yyparse();
}
