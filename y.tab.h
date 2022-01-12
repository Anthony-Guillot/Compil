/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENTIER = 258,
    REEL = 259,
    BOOLEEN = 260,
    CARACTERE = 261,
    CHAINE = 262,
    IDF = 263,
    INF = 264,
    INFE = 265,
    SUPE = 266,
    SUP = 267,
    DIFF = 268,
    EGALE = 269,
    AND = 270,
    OR = 271,
    VRAI = 272,
    FAUX = 273,
    PROG = 274,
    DEBUT = 275,
    FIN = 276,
    POINT_VIRGULE = 277,
    DEUX_POINTS = 278,
    POINT_POINT = 279,
    VIRGULE = 280,
    POINT = 281,
    TYPE = 282,
    VARIABLE = 283,
    PROCEDURE = 284,
    FONCTION = 285,
    STRUCT = 286,
    FSTRUCT = 287,
    TABLEAU = 288,
    DE = 289,
    RETOURNE = 290,
    SI = 291,
    ALORS = 292,
    SINON = 293,
    TANT_QUE = 294,
    FAIRE = 295,
    POUR = 296,
    CSTE_ENTIERE = 297,
    CSTE_REEL = 298,
    CSTE_CHAINE = 299,
    CSTE_CHAR = 300,
    VIDE = 301,
    ACCOLADE_FERMANTE = 302,
    ACCOLADE_OUVRANT = 303,
    PARENTHESE_FERMANTE = 304,
    PARENTHESE_OUVRANTE = 305,
    CROCHET_OUVRANT = 306,
    CROCHET_FERMANT = 307,
    PLUS = 308,
    MOINS = 309,
    MULT = 310,
    DIV = 311,
    OPAFF = 312,
    LIRE = 313,
    ECRIRE = 314,
    ERROR = 315
  };
#endif
/* Tokens.  */
#define ENTIER 258
#define REEL 259
#define BOOLEEN 260
#define CARACTERE 261
#define CHAINE 262
#define IDF 263
#define INF 264
#define INFE 265
#define SUPE 266
#define SUP 267
#define DIFF 268
#define EGALE 269
#define AND 270
#define OR 271
#define VRAI 272
#define FAUX 273
#define PROG 274
#define DEBUT 275
#define FIN 276
#define POINT_VIRGULE 277
#define DEUX_POINTS 278
#define POINT_POINT 279
#define VIRGULE 280
#define POINT 281
#define TYPE 282
#define VARIABLE 283
#define PROCEDURE 284
#define FONCTION 285
#define STRUCT 286
#define FSTRUCT 287
#define TABLEAU 288
#define DE 289
#define RETOURNE 290
#define SI 291
#define ALORS 292
#define SINON 293
#define TANT_QUE 294
#define FAIRE 295
#define POUR 296
#define CSTE_ENTIERE 297
#define CSTE_REEL 298
#define CSTE_CHAINE 299
#define CSTE_CHAR 300
#define VIDE 301
#define ACCOLADE_FERMANTE 302
#define ACCOLADE_OUVRANT 303
#define PARENTHESE_FERMANTE 304
#define PARENTHESE_OUVRANTE 305
#define CROCHET_OUVRANT 306
#define CROCHET_FERMANT 307
#define PLUS 308
#define MOINS 309
#define MULT 310
#define DIV 311
#define OPAFF 312
#define LIRE 313
#define ECRIRE 314
#define ERROR 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "projet.y" /* yacc.c:1909  */

  arbre type1;
  int type2;
  float type3;

#line 180 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
