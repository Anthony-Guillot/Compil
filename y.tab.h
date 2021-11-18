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
    TYPE = 281,
    VARIABLE = 282,
    PROCEDURE = 283,
    FONCTION = 284,
    STRUCT = 285,
    FSTRUCT = 286,
    TABLEAU = 287,
    DE = 288,
    RETOURNE = 289,
    SI = 290,
    ALORS = 291,
    SINON = 292,
    TANT_QUE = 293,
    FAIRE = 294,
    POUR = 295,
    CSTE_ENTIERE = 296,
    CSTE_REEL = 297,
    VIDE = 298,
    ACCOLADE_FERMANTE = 299,
    ACCOLADE_OUVRANT = 300,
    PARENTHESE_FERMANTE = 301,
    PARENTHESE_OUVRANTE = 302,
    CROCHET_OUVRANT = 303,
    CROCHET_FERMANT = 304,
    PLUS = 305,
    MOINS = 306,
    MULT = 307,
    DIV = 308,
    OPAFF = 309,
    LIRE = 310,
    ECRIRE = 311
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
#define TYPE 281
#define VARIABLE 282
#define PROCEDURE 283
#define FONCTION 284
#define STRUCT 285
#define FSTRUCT 286
#define TABLEAU 287
#define DE 288
#define RETOURNE 289
#define SI 290
#define ALORS 291
#define SINON 292
#define TANT_QUE 293
#define FAIRE 294
#define POUR 295
#define CSTE_ENTIERE 296
#define CSTE_REEL 297
#define VIDE 298
#define ACCOLADE_FERMANTE 299
#define ACCOLADE_OUVRANT 300
#define PARENTHESE_FERMANTE 301
#define PARENTHESE_OUVRANTE 302
#define CROCHET_OUVRANT 303
#define CROCHET_FERMANT 304
#define PLUS 305
#define MOINS 306
#define MULT 307
#define DIV 308
#define OPAFF 309
#define LIRE 310
#define ECRIRE 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
