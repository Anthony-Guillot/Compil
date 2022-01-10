%{
  #include <stdio.h>
  #include "tableLexico.h"
  #include "tableDecla.h"
  #include "tableRepre.h"
  #include "tableRegion.h"
  #include "pregion.h"
  #include "y.tab.h"
  extern int numligne;
  extern char *yytext;
  arbre a;
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

programme:PROG corps {inserer_region(getTailleBis(),nispile()-1,NULL,sommet_pile());afficherTableLexico();AfficherTD();afficherTR();afficher_region();}
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

declaration_procedure:PROCEDURE {nbChamps=0;empiler_region();} IDF {ajoutProcedure(positionLexeme(strdup(yytext)));} liste_parametres {ajoutTRproc(nbChamps);} corps {inserer_region(getTailleBis(),nispile()-1,NULL,sommet_pile());depiler_region();}
;

declaration_fonction:FONCTION {nbChamps=0;empiler_region();} IDF {nombuffer=strdup(yytext);ajoutFonction(positionLexeme(strdup(yytext)));} liste_parametres RETOURNE type_simple{type=strdup(yytext);ajoutTRfonc(positionLexeme(type),nbChamps);} corps {inserer_region(getTailleBis(),nispile()-1,NULL,sommet_pile());depiler_region();}
;
/*-----------------------------------------------------------------------*/
  /*--- Strucutures des listes d'instructions---*/
liste_instructions:DEBUT suite_liste_inst FIN {a=$2;}
;
  /*--- instruction(s) suivis de virgule---*/
suite_liste_inst:instruction POINT_VIRGULE   {$$=inserer_fils(creer_arbre(CONDITION_BIS,-1,-1),$1);}
|suite_liste_inst instruction POINT_VIRGULE {$$=inserer_fils(creer_arbre(LISTE_INST_BIS,-1,-1),inserer_frere($2,$1));}
;

  /*--- Liste des instructions possibles ---*/
instruction:affectation {$$=creer_arbre(VIDE_BIS,-1,-1);}
|condition {$$=creer_arbre(VIDE_BIS,-1,-1);}
|tant_que {$$=creer_arbre(VIDE_BIS,-1,-1);}
|appel {$$=creer_arbre(VIDE_BIS,-1,-1);}
|VIDE {$$=creer_arbre(VIDE_BIS,-1,-1);}
|RETOURNE resultat_retourne {$$=creer_arbre(VIDE_BIS,-1,-1);}
|ecriture {$$=creer_arbre(VIDE_BIS,-1,-1);}
|lecture {$$=creer_arbre(VIDE_BIS,-1,-1);}
;

/*-----------------------------------------------------------------------*/



liste_champs:un_champ {tailleStruct+=$1;}
|liste_champs POINT_VIRGULE un_champ {tailleStruct+=$3;}
;

un_champ:IDF {nombuffer2=strdup(yytext);}DEUX_POINTS nom_type {type=strdup(yytext);$$=tailleType(positionLexeme(type));
ajoutTRchamp(positionLexeme(nombuffer2),positionLexeme(strdup(yytext)),decalage);ajoutChamp(positionLexeme(nombuffer2));decalage+=tailleType(positionLexeme(strdup(yytext)));nbChamps+=1;}
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

resultat_retourne:PARENTHESE_OUVRANTE expression PARENTHESE_FERMANTE {$$=$2;}
;

appel:IDF liste_arguments  {$$=inserer_fils(creer_arbre(APPEL_BIS,-1,-1),inserer_frere($1,$2))};
;

liste_arguments:
|PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE {$$=$2;}
;

liste_args:un_arg {$$=$1;}
|liste_args VIRGULE un_arg {$$=$2;}
;

un_arg:expression {$$=$1;}
;

  /*--- Strucuture d'un if ---*/
condition:SI PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE 
ALORS liste_instructions {$$=inserer_fils(creer_arbre(CONDITION_BIS,-1,-1),inserer_frere($3,$6));}
|SI PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE 
ALORS liste_instructions SINON liste_instructions  {$$=inserer_fils(inserer_frere($6,$8));creer_arbre(CONDITION_BIS,-1,-1),inserer_frere($3,$8));}
;

  /*--- Strucuture While ---*/
tant_que:TANT_QUE PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE FAIRE liste_instructions {$$=inserer_fils(creer_arbre(TQ_BIS,-1,-1),inserer_frere($3,$6));}
;

  /*--- Strucuture d'une affectation ---*/
affectation:variable OPAFF expression {$$=inserer_fils(creer_arbre(AFFECT_BIS,-1,-1),inserer_frere($1,$3));}
;

/*--- description des formes possibles de toutes les expressions (arithmétiques et booléennes) ---*/

expression:expression_arithmetique {$$=$1;}
|expression_booleenne {$$=$1;}
;
expression_arithmetique:expression_arithmetique PLUS expression_arithmetique2 {$$=inserer_fils(creer_arbre(PLUS_BIS,-1,-1),inserer_frere($1,$3));}
|expression_arithmetique MOINS expression_arithmetique2 {$$=inserer_fils(creer_arbre(MOINS_BIS,-1,-1),inserer_frere($1,$3));}
|expression_arithmetique2 {$$=$1;}
;

expression_arithmetique2:expression_arithmetique2 MULT expression_arithmetique3 {$$=inserer_fils(creer_arbre(MULT_BIS,-1,-1),inserer_frere($1,$3));}
|expression_arithmetique2 DIV expression_arithmetique3 {$$=inserer_fils(creer_arbre(DIV_BIS,-1,-1),inserer_frere($1,$3));}
|expression_arithmetique3 {$$=$1;}
;

expression_arithmetique3:PARENTHESE_OUVRANTE expression_arithmetique PARENTHESE_FERMANTE
|CSTE_ENTIERE {$$=creer_arbre(CSTE_INT_BIS,-1,-1);}
|CSTE_REEL {$$=creer_arbre(CSTE_FLOAT_BIS,-1,-1);}
|CSTE_CHAINE {$$=creer_arbre(CSTE_FLOAT_BIS,-1,-1);}
|variable {$$=$1;}
;


/*--- Liste des expressiony boolenes utilisé utilisé dans des conditions ---*/
expression_booleenne: expression_arithmetique opbool expression_arithmetique {$$=inserer_fils($2,inserer_frere($1,$3));}
|expression_booleenne AND expression_booleenne {$$=inserer_fils(creer_arbre(AND_BIS,-1,-1),inserer_frere($1,$3));}
|expression_booleenne OR expression_booleenne {$$=inserer_fils(creer_arbre(OR_BIS,-1,-1),inserer_frere($1,$3));}
;

opbool: EGALE {$$=creer_arbre(EGALE_BIS,-1,-1);}
|DIFF {$$=creer_arbre(DIFF_BIS,-1,-1);}
|SUP {$$=creer_arbre(SUP_BIS,-1,-1);}
|SUPE {$$=creer_arbre(SUP_EGALE_BIS,-1,-1);}
|INF {$$=creer_arbre(INF_BIS,-1,-1);}
|INFE {$$=creer_arbre(INF_EGALE_BIS,-1,-1);}
;

lecture: LIRE PARENTHESE_OUVRANTE liste_variables PARENTHESE_FERMANTE {$$=creer_arbre(CSTE_INT_BIS,-1,-1);};

ecriture: ECRIRE PARENTHESE_OUVRANTE CSTE_CHAINE suite_format PARENTHESE_FERMANTE {$$=creer_arbre(CSTE_INT_BIS,-1,-1);};

liste_variables:variable;
|liste_variables VIRGULE variable;

suite_format: 
|VIRGULE variable suite_format
;

variable:IDF {$$=creer_arbre(IDF_BIS,chercheVar(positionLexeme(strdup(yytext))),positionLexeme(strdup(yytext)));}
| tableau {$$=inserer_fils(creer_arbre(TAB_BIS,-1,-1),$1);}
| variable POINT variable {$$=inserer_fils(creer_arbre(POINT_BIS,-1,-1),inserer_frere($1,$3));}
;

tableau:IDF CROCHET_OUVRANT expression CROCHET_FERMANT {$$=creer_arbre("TAB_BIS",-1,-1);} ;
%%
int yyerror(){
  printf("Erreur de syntaxe à la ligne %d\n",numligne);
 }

int main(){
  init_tab_region();
  initpileR();
  initrepre();
  init();
  initDecla();
  return yyparse();
}
