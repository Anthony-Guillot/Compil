%{
  #include <stdio.h>
  extern int numligne;
  extern char *yytext;
  int yylex();
  int yyerror();
  %}
%token PROG DEBUT FIN POINT_VIRGULE DEUX_POINTS
%token TYPE IDF CROCHET_OUVRANT CROCHET_FERMANT STRUCT FSTRUCT TABLEAU DE POINT_POINT
%token ALORS BOOLEEN CARACTERE CHAINE CSTE_ENTIERE ENTIER FAIRE FONCTION OPAFF OPBOOL OR PARENTHESE_FERMANTE PARENTHESE_OUVRANTE
%token PROCEDURE REEL RETOURNE SI SINON TANT_QUE VARIABLE VIDE VIRGULE AND


%token PLUS MOINS MULT DIV
%%
programme   :   PROG corps
;

/*--- Strucutures globales d'un programme d'abord declaration puis instruction ---*/
corps   :   liste_declarations liste_instructions
        |   liste_instructions
;

/*--- Strucutures des listes de declaration ---*/
liste_declarations  :   declaration POINT_VIRGULE;
                    |   liste_declarations declaration POINT_VIRGULE
;

liste_instructions  :   DEBUT suite_liste_inst FIN
;

suite_liste_inst    :   instruction POINT_VIRGULE;
                    |   suite_liste_inst instruction POINT_VIRGULE
;

declaration         :   declaration_type;
                    |   declaration_variable;
                    |   declaration_procedure;
                    |   declaration_fonction
;

declaration_type    :   TYPE IDF DEUX_POINTS suite_declaration_type
;

suite_declaration_type  :       STRUCT liste_champs FSTRUCT;
                        |       TABLEAU dimension DE nom_type
;

dimension       :       CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT
;

liste_dimensions        :       une_dimension;
                        |       liste_dimensions VIRGULE une_dimension
;

une_dimension   :       expression POINT_POINT expression
;

liste_champs    :       un_champ;
                |       liste_champs POINT_VIRGULE un_champ
;

un_champ        :       IDF DEUX_POINTS nom_type
;

nom_type        :       type_simple;
                |       IDF
;

type_simple     :       ENTIER;
                |       REEL;
                |       BOOLEEN;
                |       CARACTERE;
                |       CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT
;

declaration_variable    :       VARIABLE IDF DEUX_POINTS nom_type
;

declaration_procedure   :       PROCEDURE IDF liste_parametres corps
;

declaration_fonction    :       FONCTION IDF liste_parametres RETOURNE type_simple corps
;

liste_parametres        :
liste_parametres        :       PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE
;

liste_param     :       un_param;
                |       liste_param POINT_VIRGULE un_param
;

un_param        :       IDF DEUX_POINTS type_simple
;

instruction     :       affectation;
                |       condition;
                |       tant_que;
                |       appel;
                |       VIDE;
                |       RETOURNE resultat_retourne
;

resultat_retourne       :;
                        |       expression
;

appel   :       IDF liste_arguments
;

liste_arguments :;
                |       PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
;

liste_args      :       un_arg;
                |       liste_args VIRGULE un_arg
;

un_arg  :       expression
;

condition       :       SI expression_booleenne;
                |       ALORS liste_instructions;
                |       SINON liste_instructions
;

tant_que        :       TANT_QUE expression_booleenne FAIRE liste_instructions
;

affectation     :       IDF OPAFF expression
;


/*--- description des formes possibles de toutes les expressions (arithmétiques et booléennes) ---*/

expression              : expression_arithmetique;
                        | expression_booleenne
;
expression_arithmetique : expression_arithmetique PLUS expression_arithmetique2;
                        | expression_arithmetique MOINS expression_arithmetique2;
                        | expression_arithmetique2
;

expression_arithmetique2  : expression_arithmetique2 MULT expression_arithmetique3;
                          | expression_arithmetique2 DIV expression_arithmetique3;
                          | expression_arithmetique3
;

expression_arithmetique3  : PARENTHESE_OUVRANTE expression_arithmetique PARENTHESE_FERMANTE;
                          | ENTIER
;


/*--- Liste des expression boolenes utilisé utilisé dans des conditions ---*/
expression_booleenne    :       nom_type OPBOOL nom_type;
                        |       expression_booleenne AND expression_booleenne;
                        |       expression_booleenne OR expression_booleenne
;
%%
int yyerror(){
  printf("Erreur de syntaxe\n");
 }

int main(){
  return yyparse();
}
