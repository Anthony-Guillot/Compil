%{
  #include <stdio.h>
  #include "tableLexico.h"
  #include "tableDecla.h"
  #include "tableRepre.h"
  #include "tableRegion.h"
  #include "pregion.h"
  #include "arbre.h"
  #include "y.tab.h"
  extern int numligne;
  extern char *yytext;
  int resultatExpression=0;
  int resultatExpression1=0;
  int resultatExpression2=0;
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

%union{
  arbre type1;
  int type2;
  float type3;
}
/*---TOKEN types---*/
%token ENTIER REEL BOOLEEN CARACTERE CHAINE 
%token <type1> IDF
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
%token <type2> CSTE_ENTIERE 
%token <type3> CSTE_REEL 
%token CSTE_CHAINE CSTE_CHAR
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

%type <type1> corps liste_instructions instruction suite_liste_inst appel lecture ecriture condition tant_que  resultat_retourne affectation liste_args un_arg tableau variable opbool expression_booleenne liste_arguments expression_arithmetique3 expression_arithmetique2 expression_arithmetique expression

%%

programme:PROG corps {inserer_region(getTailleBis(),nispile()-1,NULL,sommet_pile());afficherTableLexico();AfficherTD();afficherTR();afficher_region();printf("\n");}
;

  /*--- Strucutures globales d'un programme d'abord declaration puis instruction ---*/
corps:liste_declarations liste_instructions {printf("\narbre de la region [%d]\n",sommet_pile());afficher_arbre($2);$$=$2;}
|liste_instructions {printf("\narbre de la region [%d]\n",sommet_pile());afficher_arbre($1);$$=$1;}
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

suite_declaration_type:{nbChamps=0;resultatExpression=0;decalage=0;}STRUCT liste_champs FSTRUCT {ajoutTypeStruct(positionLexeme(nombuffer),resultatExpression);ajoutTRstruct(nbChamps);}
|{tailleTab=0;iplus();nbChamps=0;resultatExpression=0;}TABLEAU dimension DE nom_type {type=strdup(yytext);ajoutTypeTab(positionLexeme(nombuffer),resultatExpression*tailleType(positionLexeme(type)));ajoutTRtab(positionLexeme(type),nbChamps);}
;

dimension:CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT
;

liste_dimensions:une_dimension
|liste_dimensions {resultatExpression1=resultatExpression;}VIRGULE une_dimension {resultatExpression1=resultatExpression;} {resultatExpression=resultatExpression1*resultatExpression2;}
;

une_dimension:expression {dimensionDebut=resultatExpression;}POINT_POINT expression {dimensionFin=resultatExpression;} {resultatExpression=(dimensionFin-dimensionDebut)+1;nbChamps+=1;TRdimtab(dimensionDebut,dimensionFin);}
;
declaration_variable:VARIABLE IDF {nombuffer=strdup(yytext);} DEUX_POINTS nom_type {type=strdup(yytext);ajoutVariable(positionLexeme(nombuffer),positionLexeme(type));}
;

declaration_procedure:PROCEDURE {nbChamps=0;empiler_region();} IDF {ajoutProcedure(positionLexeme(strdup(yytext)));} liste_parametres {ajoutTRproc(nbChamps);} corps {inserer_region(getTailleBis(),nispile()-1,$7,sommet_pile());depiler_region();}
;

declaration_fonction:FONCTION {nbChamps=0;empiler_region();} IDF {nombuffer=strdup(yytext);ajoutFonction(positionLexeme(strdup(yytext)));} liste_parametres RETOURNE type_simple {type=strdup(yytext);ajoutTRfonc(positionLexeme(type),nbChamps);} corps {inserer_region(getTailleBis(),nispile()-1,$9,sommet_pile());depiler_region();}
;
/*-----------------------------------------------------------------------*/
  /*--- Strucutures des listes d'instructions---*/
liste_instructions:DEBUT suite_liste_inst FIN {$$=$2;}
;
  /*--- instruction(s) suivis de virgule---*/
suite_liste_inst:instruction POINT_VIRGULE   {$$=inserer_fils(creer_arbre(LISTE_INST_BIS,-1,-1),$1);}
|suite_liste_inst instruction POINT_VIRGULE {$$=inserer_fils(creer_arbre(LISTE_INST_BIS,-1,-1),inserer_frere($2,$1));}
;

  /*--- Liste des instructions possibles ---*/
instruction:affectation {$$=$1;}
|condition {$$=$1;}
|tant_que {$$=$1;}
|appel {$$=$1;}
|VIDE {$$=creer_arbre(VIDE_BIS,-1,-1);}
|RETOURNE resultat_retourne {$$=inserer_fils(creer_arbre(RETURN_BIS,-1,-1),$2);}
|ecriture {$$=$1;}
|lecture {$$=$1;}
;

/*-----------------------------------------------------------------------*/



liste_champs:un_champ 
|liste_champs {resultatExpression1=resultatExpression;} POINT_VIRGULE un_champ {resultatExpression2=resultatExpression;} {resultatExpression=resultatExpression1+resultatExpression2;}
;

un_champ:IDF {nombuffer2=strdup(yytext);}DEUX_POINTS nom_type {type=strdup(yytext);resultatExpression=tailleType(positionLexeme(type));
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

appel:IDF liste_arguments {$$=inserer_fils(creer_arbre(APPEL_BIS,-1,-1),inserer_frere($1,$2));};
;

liste_arguments: {nombuffer=strdup(yytext);$$=creer_arbre(VIDE_BIS,-1,-1);}
|PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE {$$=$2;}
;

liste_args:un_arg {$$=$1;}
|liste_args VIRGULE un_arg {$$=inserer_fils($1,$3);}
;

un_arg:expression {$$=$1;}
;

  /*--- Strucuture d'un if ---*/
condition:SI PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE 
ALORS liste_instructions {$$=inserer_fils(creer_arbre(CONDITION_BIS,-1,-1),inserer_frere($3,$6));}
|SI PARENTHESE_OUVRANTE expression_booleenne PARENTHESE_FERMANTE 
ALORS liste_instructions SINON liste_instructions  {$$=inserer_frere($3,$8);}
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
expression_arithmetique:expression_arithmetique {resultatExpression1=resultatExpression;} PLUS expression_arithmetique2 {resultatExpression2=resultatExpression;} {$$=inserer_fils(creer_arbre(PLUS_BIS,-1,-1),inserer_frere($1,$4));resultatExpression=resultatExpression1+resultatExpression2;}
|expression_arithmetique {resultatExpression1=resultatExpression;} MOINS expression_arithmetique2 {resultatExpression2=resultatExpression;}{$$=inserer_fils(creer_arbre(MOINS_BIS,-1,-1),inserer_frere($1,$4));resultatExpression=resultatExpression1-resultatExpression2;}
|expression_arithmetique2 {$$=$1;}
;

expression_arithmetique2:expression_arithmetique2 {resultatExpression1=resultatExpression;} MULT  expression_arithmetique3 {resultatExpression2=resultatExpression;}{$$=inserer_fils(creer_arbre(MULT_BIS,-1,-1),inserer_frere($1,$4));resultatExpression=resultatExpression1*resultatExpression2;}
|expression_arithmetique2 {resultatExpression1=resultatExpression;} DIV expression_arithmetique3 {resultatExpression2=resultatExpression;}{$$=inserer_fils(creer_arbre(DIV_BIS,-1,-1),inserer_frere($1,$4));resultatExpression=resultatExpression1/resultatExpression2;}
|expression_arithmetique3 {$$=$1;}
;

expression_arithmetique3:PARENTHESE_OUVRANTE expression_arithmetique PARENTHESE_FERMANTE {$$=$2;}
|CSTE_ENTIERE {$$=creer_arbre(CSTE_INT_BIS,$1,-1);resultatExpression=$1;}
|CSTE_REEL {$$=creer_arbre(CSTE_FLOAT_BIS,$1,-1);}
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

liste_variables:variable
|liste_variables VIRGULE variable;

suite_format: 
|VIRGULE variable suite_format
;

variable:IDF {$$=creer_arbre(IDF_BIS,chercheVar(positionLexeme(strdup(yytext))),positionLexeme(strdup(yytext)));}
| tableau {$$=inserer_fils(creer_arbre(TAB_BIS,-1,-1),$1);}
| variable POINT variable {$$=inserer_fils(creer_arbre(POINT_BIS,-1,-1),inserer_frere($1,$3));}
;

tableau:IDF CROCHET_OUVRANT expression CROCHET_FERMANT {$$=creer_arbre(TAB_BIS,-1,-1);} ;
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
