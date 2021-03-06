/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "projet.y" /* yacc.c:339  */

  /*Auteur :GUILLOT Anthony*/
  #include <stdio.h>
  #include "tableLexico.h"
  #include "tableDecla.h"
  #include "tableRepre.h"
  #include "tableRegion.h"
  #include "pregion.h"
  #include "arbre.h"
  #include "y.tab.h"
  #include "projet.h"
  #define INT_TYPE 0
  #define FLOAT_TYPE 1
  #define CHAR_TYPE 2
  #define BOOL_TYPE 3
  extern int numligne;
  extern char *yytext;
  int fonct =0;
  int resultatExpression=0;
  int resultatExpression1=0;
  int resultatExpression2=0;
  char *nombuffer;
  char *nombuffer2;
  char *type;
  int debutParam=0;
  int typeExpression=0;
  int typeExpression1=0;
  int typeExpression2=0;
  int decalage=0;
  int tailleTab=0;
  int tailleStruct=0;
  int dimensionDebut=0;
  int dimensionFin=0;
  int nbChamps=0;

#line 102 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 37 "projet.y" /* yacc.c:355  */

  arbre type1;
  int type2;
  float type3;

#line 268 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 285 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    80,    81,    85,    86,    88,    89,    90,
      91,    94,    94,    97,    97,    98,    98,   101,   104,   105,
     105,   105,   108,   108,   108,   110,   110,   113,   113,   113,
     113,   116,   116,   116,   116,   120,   123,   124,   128,   129,
     130,   131,   132,   133,   134,   135,   142,   143,   143,   143,
     146,   146,   151,   152,   155,   156,   157,   158,   159,   164,
     165,   168,   169,   172,   172,   177,   180,   183,   184,   187,
     188,   191,   195,   197,   202,   206,   220,   221,   223,   223,
     223,   232,   232,   232,   241,   244,   244,   244,   253,   253,
     253,   262,   265,   266,   267,   268,   269,   274,   275,   276,
     279,   280,   281,   282,   283,   284,   287,   289,   291,   292,
     294,   295,   298,   299,   300,   303
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTIER", "REEL", "BOOLEEN", "CARACTERE",
  "CHAINE", "IDF", "INF", "INFE", "SUPE", "SUP", "DIFF", "EGALE", "AND",
  "OR", "VRAI", "FAUX", "PROG", "DEBUT", "FIN", "POINT_VIRGULE",
  "DEUX_POINTS", "POINT_POINT", "VIRGULE", "POINT", "TYPE", "VARIABLE",
  "PROCEDURE", "FONCTION", "STRUCT", "FSTRUCT", "TABLEAU", "DE",
  "RETOURNE", "SI", "ALORS", "SINON", "TANT_QUE", "FAIRE", "POUR",
  "CSTE_ENTIERE", "CSTE_REEL", "CSTE_CHAINE", "CSTE_CHAR", "VIDE",
  "ACCOLADE_FERMANTE", "ACCOLADE_OUVRANT", "PARENTHESE_FERMANTE",
  "PARENTHESE_OUVRANTE", "CROCHET_OUVRANT", "CROCHET_FERMANT", "PLUS",
  "MOINS", "MULT", "DIV", "OPAFF", "LIRE", "ECRIRE", "ERROR", "$accept",
  "programme", "corps", "liste_declarations", "declaration",
  "declaration_type", "$@1", "suite_declaration_type", "$@2", "$@3",
  "dimension", "liste_dimensions", "$@4", "$@5", "une_dimension", "$@6",
  "$@7", "declaration_variable", "$@8", "declaration_procedure", "$@9",
  "$@10", "$@11", "declaration_fonction", "$@12", "$@13", "$@14",
  "liste_instructions", "suite_liste_inst", "instruction", "liste_champs",
  "$@15", "$@16", "un_champ", "$@17", "nom_type", "type_simple",
  "liste_parametres", "liste_param", "un_param", "$@18",
  "resultat_retourne", "appel", "liste_arguments", "liste_args", "un_arg",
  "condition", "tant_que", "affectation", "expression",
  "expression_arithmetique", "$@19", "$@20", "$@21", "$@22",
  "expression_arithmetique2", "$@23", "$@24", "$@25", "$@26",
  "expression_arithmetique3", "expression_booleenne", "opbool", "lecture",
  "ecriture", "liste_variables", "suite_format", "variable", "tableau", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -89

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    61,    34,     9,    23,    30,  -166,  -166,  -166,    61,
      43,  -166,  -166,  -166,  -166,  -166,  -166,    32,    54,    58,
      65,  -166,    68,    69,     0,    98,  -166,  -166,  -166,  -166,
    -166,  -166,   -15,  -166,  -166,  -166,    76,   113,   100,  -166,
    -166,    35,    35,  -166,    35,  -166,    35,    35,   115,    80,
    -166,   103,  -166,   115,    35,   105,   106,  -166,  -166,  -166,
      79,  -166,  -166,  -166,    35,    15,  -166,  -166,    16,    -5,
    -166,    71,   108,    81,    82,    62,     4,    17,    31,   108,
     110,  -166,   108,  -166,    99,    89,    86,    86,    49,    35,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,    84,    85,    35,
      83,    87,    35,    35,  -166,  -166,   104,   102,   115,  -166,
     115,    91,  -166,   114,   111,  -166,  -166,  -166,  -166,    95,
    -166,  -166,  -166,   139,  -166,   116,  -166,  -166,    35,    35,
     -38,    35,    35,    71,    71,   128,   128,   108,    74,  -166,
     141,   109,   112,  -166,   -12,  -166,    61,   107,    -5,    -5,
    -166,  -166,   117,  -166,  -166,  -166,   118,  -166,    35,   122,
     119,   134,   139,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
     128,   135,  -166,   137,   120,  -166,  -166,    89,  -166,   107,
    -166,    61,  -166,    89,   141,  -166,   138,   140,  -166,  -166,
    -166,  -166,  -166,    35,    35,  -166,  -166,  -166,  -166,  -166
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    27,    31,     2,     0,
       0,     7,     8,     9,    10,     4,     1,   112,     0,     0,
       0,    42,     0,     0,     0,     0,    41,    39,    40,    38,
      45,    44,     0,   113,    11,    25,     0,     0,     0,     3,
       5,     0,     0,    66,     0,    43,     0,     0,     0,     0,
      35,     0,    36,     0,     0,     0,     0,    28,    32,     6,
     112,    93,    94,    95,     0,     0,    69,    71,    76,    84,
      91,    77,    96,     0,     0,    78,     0,     0,     0,   108,
     110,    37,   114,    75,    13,     0,    59,    59,    78,     0,
      68,   104,   105,   103,   102,   101,   100,     0,     0,     0,
       0,     0,     0,     0,   115,    65,     0,     0,     0,   106,
       0,     0,    12,     0,     0,    54,    55,    56,    57,     0,
      53,    26,    52,     0,    29,     0,    92,    70,     0,     0,
      97,     0,     0,    98,    99,     0,     0,   109,   110,   107,
       0,     0,     0,    63,     0,    61,     0,     0,    79,    82,
      86,    89,    72,    74,   111,    50,    47,    46,     0,     0,
       0,     0,     0,    60,    30,    33,    80,    83,    87,    90,
       0,     0,    14,     0,    19,    18,    22,     0,    58,     0,
      62,     0,    73,     0,     0,    17,     0,     0,    16,    64,
      34,    51,    48,     0,     0,    49,    20,    23,    21,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -132,  -166,   153,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,   -28,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,    -9,  -166,   142,
    -166,  -166,  -166,   -17,  -166,  -165,  -138,    88,  -166,     6,
    -166,  -166,  -166,  -166,  -166,    90,  -166,  -166,  -166,   -41,
     -42,  -166,  -166,  -166,  -166,   -27,  -166,  -166,  -166,  -166,
     -26,   -40,  -166,  -166,  -166,  -166,    36,    -1,  -166
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    55,   112,   113,   114,
     159,   174,   186,   198,   175,   187,   199,    12,    56,    13,
      36,    86,   146,    14,    37,    87,   181,    15,    24,    25,
     156,   173,   195,   157,   171,   121,   122,   124,   144,   145,
     161,    45,    26,    43,    65,    66,    27,    28,    29,    67,
      68,    97,   166,    98,   167,    69,   100,   168,   101,   169,
      70,    71,    99,    30,    31,    78,   111,    72,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    73,    32,    74,    75,    75,    76,    77,    17,   165,
     162,    53,   188,    83,   164,   -78,   -81,    17,   191,   102,
     103,    50,    88,    32,     1,    91,    92,    93,    94,    95,
      96,    34,   102,   103,    16,    18,    19,   163,    35,    20,
      89,   189,    54,    60,    18,    19,    21,    79,    20,   190,
     -85,   -88,    82,   106,   -67,    21,   108,   130,    22,    23,
      75,    75,   133,   134,    90,    40,   107,    22,    23,   -78,
     -81,    91,    92,    93,    94,    95,    96,    61,    62,    63,
     109,     3,    41,    42,    57,    64,   102,   103,     4,     5,
       6,     7,   115,   116,   117,   118,   119,   120,   126,   110,
      53,   148,   149,   -81,    44,   150,   151,   137,    46,   138,
     115,   116,   117,   118,   119,    47,   -81,   176,    48,    49,
      52,    58,    59,    60,    80,    81,   152,   153,    84,    85,
      42,   105,   -15,   104,    53,   110,   123,   128,   131,   129,
     139,   135,   136,   132,   141,   140,   142,   143,     3,   155,
     172,   147,   176,   197,   160,   170,   177,   179,   183,   184,
     158,   182,    38,   193,   194,   196,    51,   192,   180,     0,
       0,   178,   185,     0,   154,   125,     0,     0,     0,   127
};

static const yytype_int16 yycheck[] =
{
       9,    42,     3,    44,    46,    47,    46,    47,     8,   147,
      22,    26,   177,    54,   146,    53,    54,     8,   183,    15,
      16,    21,    64,    24,    19,     9,    10,    11,    12,    13,
      14,     8,    15,    16,     0,    35,    36,    49,     8,    39,
      25,   179,    57,     8,    35,    36,    46,    48,    39,   181,
      55,    56,    53,    49,    22,    46,    25,    99,    58,    59,
     102,   103,   102,   103,    49,    22,    49,    58,    59,    53,
      54,     9,    10,    11,    12,    13,    14,    42,    43,    44,
      49,    20,    50,    51,     8,    50,    15,    16,    27,    28,
      29,    30,     3,     4,     5,     6,     7,     8,    49,    25,
      26,   128,   129,    54,    50,   131,   132,   108,    50,   110,
       3,     4,     5,     6,     7,    50,    54,   158,    50,    50,
      22,     8,    22,     8,    44,    22,   135,   136,    23,    23,
      51,    49,    33,    52,    26,    25,    50,    53,    55,    54,
      49,    37,    40,    56,    33,    31,    51,     8,    20,     8,
      32,    35,   193,   194,    42,    38,    34,    23,    23,    22,
      51,   170,     9,    25,    24,   193,    24,   184,   162,    -1,
      -1,    52,    52,    -1,   138,    87,    -1,    -1,    -1,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    62,    20,    27,    28,    29,    30,    63,    64,
      65,    66,    78,    80,    84,    88,     0,     8,    35,    36,
      39,    46,    58,    59,    89,    90,   103,   107,   108,   109,
     124,   125,   128,   129,     8,     8,    81,    85,    65,    88,
      22,    50,    51,   104,    50,   102,    50,    50,    50,    50,
      21,    90,    22,    26,    57,    67,    79,     8,     8,    22,
       8,    42,    43,    44,    50,   105,   106,   110,   111,   116,
     121,   122,   128,   110,   110,   111,   122,   122,   126,   128,
      44,    22,   128,   110,    23,    23,    82,    86,   111,    25,
      49,     9,    10,    11,    12,    13,    14,   112,   114,   123,
     117,   119,    15,    16,    52,    49,    49,    49,    25,    49,
      25,   127,    68,    69,    70,     3,     4,     5,     6,     7,
       8,    96,    97,    50,    98,    98,    49,   106,    53,    54,
     111,    55,    56,   122,   122,    37,    40,   128,   128,    49,
      31,    33,    51,     8,    99,   100,    83,    35,   116,   116,
     121,   121,    88,    88,   127,     8,    91,    94,    51,    71,
      42,   101,    22,    49,    63,    97,   113,   115,   118,   120,
      38,    95,    32,    92,    72,    75,   110,    34,    52,    23,
     100,    87,    88,    23,    22,    52,    73,    76,    96,    97,
      63,    96,    94,    25,    24,    93,    75,   110,    74,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    67,    66,    69,    68,    70,    68,    71,    72,    73,
      74,    72,    76,    77,    75,    79,    78,    81,    82,    83,
      80,    85,    86,    87,    84,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    92,    93,    91,
      95,    94,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    99,    99,   101,   100,   102,   103,   104,   104,   105,
     105,   106,   107,   107,   108,   109,   110,   110,   112,   113,
     111,   114,   115,   111,   111,   117,   118,   116,   119,   120,
     116,   116,   121,   121,   121,   121,   121,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   124,   125,   126,   126,
     127,   127,   128,   128,   128,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     2,     3,     1,     1,     1,
       1,     0,     5,     0,     4,     0,     5,     3,     1,     0,
       0,     5,     0,     0,     5,     0,     5,     0,     0,     0,
       7,     0,     0,     0,     9,     3,     2,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     0,     0,     5,
       0,     4,     1,     1,     1,     1,     1,     1,     4,     0,
       3,     1,     3,     0,     4,     3,     2,     0,     3,     1,
       3,     1,     6,     8,     6,     3,     1,     1,     0,     0,
       5,     0,     0,     5,     1,     0,     0,     5,     0,     0,
       5,     1,     3,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     4,     5,     1,     3,
       0,     3,     1,     1,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 76 "projet.y" /* yacc.c:1646  */
    {inserer_region(getTailleBis(),nispile()-1,NULL,sommet_pile());afficherTableLexico();AfficherTD();afficherTR();afficher_region();printf("\n");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "projet.y" /* yacc.c:1646  */
    {printf("\narbre de la region : %d\n",sommet_pile());afficher_arbre((yyvsp[0].type1));(yyval.type1)=(yyvsp[0].type1);}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 81 "projet.y" /* yacc.c:1646  */
    {printf("\narbre de la region : %d\n",sommet_pile());afficher_arbre((yyvsp[0].type1));(yyval.type1)=(yyvsp[0].type1);}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 94 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "projet.y" /* yacc.c:1646  */
    {nbChamps=0;resultatExpression=0;decalage=0;}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "projet.y" /* yacc.c:1646  */
    {ajoutTypeStruct(positionLexeme(nombuffer),resultatExpression);ajoutTRstruct(nbChamps);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "projet.y" /* yacc.c:1646  */
    {tailleTab=0;iplus();nbChamps=0;resultatExpression=0;}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);ajoutTypeTab(positionLexeme(nombuffer),resultatExpression*tailleType(positionLexeme(type)));ajoutTRtab(positionLexeme(type),nbChamps);}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 105 "projet.y" /* yacc.c:1646  */
    {resultatExpression1=resultatExpression;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "projet.y" /* yacc.c:1646  */
    {resultatExpression1=resultatExpression;}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 105 "projet.y" /* yacc.c:1646  */
    {resultatExpression=resultatExpression1*resultatExpression2;}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 108 "projet.y" /* yacc.c:1646  */
    {dimensionDebut=resultatExpression;}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "projet.y" /* yacc.c:1646  */
    {dimensionFin=resultatExpression;}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "projet.y" /* yacc.c:1646  */
    {resultatExpression=(dimensionFin-dimensionDebut)+1;nbChamps+=1;TRdimtab(dimensionDebut,dimensionFin);}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);ajoutVariable(positionLexeme(nombuffer),positionLexeme(type));}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 113 "projet.y" /* yacc.c:1646  */
    {fonct=0;nbChamps=0;empiler_region();}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "projet.y" /* yacc.c:1646  */
    {ajoutProcedure(positionLexeme(strdup(yytext)));}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 113 "projet.y" /* yacc.c:1646  */
    {ajoutTRproc(nbChamps);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 113 "projet.y" /* yacc.c:1646  */
    {inserer_region(getTailleBis(),nispile()-1,(yyvsp[0].type1),sommet_pile());depiler_region();}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 116 "projet.y" /* yacc.c:1646  */
    {fonct=1;nbChamps=0;empiler_region();}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "projet.y" /* yacc.c:1646  */
    {debutParam=1;nombuffer=strdup(yytext);ajoutFonction(positionLexeme(strdup(yytext)));}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);ajoutTRfonc(positionLexeme(type),nbChamps);}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 116 "projet.y" /* yacc.c:1646  */
    {inserer_region(getTailleBis(),nispile()-1,(yyvsp[0].type1),sommet_pile());depiler_region();}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 120 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[-1].type1);}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 123 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(LISTE_INST_BIS,-1,-1),(yyvsp[-1].type1));}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_frere((yyvsp[-2].type1),(yyvsp[-1].type1));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(VIDE_BIS,-1,-1);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 133 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(RETURN_BIS,-1,-1),(yyvsp[0].type1));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 134 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 135 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "projet.y" /* yacc.c:1646  */
    {resultatExpression1=resultatExpression;}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 143 "projet.y" /* yacc.c:1646  */
    {resultatExpression2=resultatExpression;}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 143 "projet.y" /* yacc.c:1646  */
    {resultatExpression=resultatExpression1+resultatExpression2;}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "projet.y" /* yacc.c:1646  */
    {nombuffer2=strdup(yytext);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 146 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);resultatExpression=tailleType(positionLexeme(type));
ajoutTRchamp(positionLexeme(nombuffer2),positionLexeme(strdup(yytext)),decalage);ajoutChamp(positionLexeme(nombuffer2));decalage+=tailleType(positionLexeme(strdup(yytext)));nbChamps+=1;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 172 "projet.y" /* yacc.c:1646  */
    {nbChamps+=1;type=strdup(yytext);ajoutParam(positionLexeme(nombuffer),positionLexeme(type));ajoutTRParam(positionLexeme(nombuffer),positionLexeme(type),fonct,debutParam);debutParam=0;}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[-1].type1);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 180 "projet.y" /* yacc.c:1646  */
    {(yyvsp[-1].type1)->num_declaration=chercheProc((yyvsp[-1].type1)->num_lexi);(yyval.type1)=inserer_fils(creer_arbre(APPEL_BIS,-1,-1),inserer_frere((yyvsp[-1].type1),(yyvsp[0].type1)));}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 183 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);(yyval.type1)=creer_arbre(VIDE_BIS,-1,-1);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 184 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[-1].type1);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 187 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 188 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils((yyvsp[-2].type1),(yyvsp[0].type1));}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 191 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 196 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(CONDITION_BIS,-1,-1),inserer_frere((yyvsp[-3].type1),(yyvsp[0].type1)));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 198 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(CONDITION_BIS,-1,-1),inserer_frere((yyvsp[-5].type1),inserer_frere((yyvsp[-2].type1),(yyvsp[0].type1))));}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 202 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(TQ_BIS,-1,-1),inserer_frere((yyvsp[-3].type1),(yyvsp[0].type1)));}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 207 "projet.y" /* yacc.c:1646  */
    {
  if(typeVar((yyvsp[-2].type1)->num_declaration)==typeExpression){
    (yyval.type1)=inserer_fils(creer_arbre(AFFECT_BIS,-1,-1),inserer_frere((yyvsp[-2].type1),(yyvsp[0].type1)));
  }
  else{
    fprintf(stderr,"Erreur affectation impossible(type differents) ligne %d\n",numligne);
    yyerror();
  }
}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 220 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 221 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 223 "projet.y" /* yacc.c:1646  */
    {typeExpression1=typeExpression; resultatExpression1=resultatExpression;}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 223 "projet.y" /* yacc.c:1646  */
    {typeExpression2=typeExpression;resultatExpression2=resultatExpression;}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 223 "projet.y" /* yacc.c:1646  */
    {
  if(typeExpression1==typeExpression2){
  (yyval.type1)=inserer_fils(creer_arbre(PLUS_BIS,-1,-1),inserer_frere((yyvsp[-4].type1),(yyvsp[-1].type1)));resultatExpression=resultatExpression1+resultatExpression2;
  }
  else{
    fprintf(stderr,"Erreur addition impossible(type differents) ligne %d\n",numligne);
    yyerror();
  }
}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 232 "projet.y" /* yacc.c:1646  */
    {typeExpression1=typeExpression;resultatExpression1=resultatExpression;}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 232 "projet.y" /* yacc.c:1646  */
    {typeExpression2=typeExpression;resultatExpression2=resultatExpression;}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 232 "projet.y" /* yacc.c:1646  */
    {
  if(typeExpression1==typeExpression2){
    (yyval.type1)=inserer_fils(creer_arbre(MOINS_BIS,-1,-1),inserer_frere((yyvsp[-4].type1),(yyvsp[-1].type1)));resultatExpression=resultatExpression1-resultatExpression2;
  }
  else{
    fprintf(stderr,"Erreur soustraction impossible(type differents) ligne %d\n",numligne);
    yyerror();
  }
}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 241 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 244 "projet.y" /* yacc.c:1646  */
    {typeExpression1=typeExpression;resultatExpression1=resultatExpression;}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 244 "projet.y" /* yacc.c:1646  */
    {typeExpression2=typeExpression;resultatExpression2=resultatExpression;}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 244 "projet.y" /* yacc.c:1646  */
    {
  if(typeExpression1==typeExpression2){
    (yyval.type1)=inserer_fils(creer_arbre(MULT_BIS,-1,-1),inserer_frere((yyvsp[-4].type1),(yyvsp[-1].type1)));resultatExpression=resultatExpression1*resultatExpression2;
    }
    else{
      fprintf(stderr,"Erreur multiplication impossible(type differents) ligne %d\n",numligne);
    yyerror();
    }
}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 253 "projet.y" /* yacc.c:1646  */
    {typeExpression1=typeExpression;resultatExpression1=resultatExpression;}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 253 "projet.y" /* yacc.c:1646  */
    {typeExpression2=typeExpression;resultatExpression2=resultatExpression;}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 253 "projet.y" /* yacc.c:1646  */
    {
  if(typeExpression1==typeExpression2){
    (yyval.type1)=inserer_fils(creer_arbre(DIV_BIS,-1,-1),inserer_frere((yyvsp[-4].type1),(yyvsp[-1].type1)));resultatExpression=resultatExpression1/resultatExpression2;
    }
    else{
      fprintf(stderr,"Erreur division impossible(type differents) ligne %d\n",numligne);
    yyerror();
    }
}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 262 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 265 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[-1].type1);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 266 "projet.y" /* yacc.c:1646  */
    {typeExpression=INT_TYPE;(yyval.type1)=creer_arbre(CSTE_INT_BIS,(yyvsp[0].type2),-1);resultatExpression=(yyvsp[0].type2);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 267 "projet.y" /* yacc.c:1646  */
    {typeExpression=FLOAT_TYPE;(yyval.type1)=creer_arbre(CSTE_FLOAT_BIS,(yyvsp[0].type3),-1);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 268 "projet.y" /* yacc.c:1646  */
    {typeExpression=CHAR_TYPE;(yyval.type1)=creer_arbre(CSTE_CHAR_BIS,-1,-1);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 269 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=(yyvsp[0].type1);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 274 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils((yyvsp[-1].type1),inserer_frere((yyvsp[-2].type1),(yyvsp[0].type1)));}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 275 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(AND_BIS,-1,-1),inserer_frere((yyvsp[-2].type1),(yyvsp[0].type1)));}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 276 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(OR_BIS,-1,-1),inserer_frere((yyvsp[-2].type1),(yyvsp[0].type1)));}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 279 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(EGALE_BIS,-1,-1);}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 280 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(DIFF_BIS,-1,-1);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 281 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(SUP_BIS,-1,-1);}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 282 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(SUP_EGALE_BIS,-1,-1);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 283 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(INF_BIS,-1,-1);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 284 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(INF_EGALE_BIS,-1,-1);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 287 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(CSTE_INT_BIS,-1,-1);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 289 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(CSTE_INT_BIS,-1,-1);}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 298 "projet.y" /* yacc.c:1646  */
    {typeExpression=typeVar((yyvsp[0].type1)->num_declaration);(yyval.type1)=(yyvsp[0].type1);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 299 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(TAB_BIS,-1,-1),(yyvsp[0].type1));}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 300 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=inserer_fils(creer_arbre(POINT_BIS,-1,-1),inserer_frere((yyvsp[-2].type1),(yyvsp[0].type1)));}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 303 "projet.y" /* yacc.c:1646  */
    {(yyval.type1)=creer_arbre(TAB_BIS,-1,-1);}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2093 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 304 "projet.y" /* yacc.c:1906  */

int yyerror(){
  printf("Erreur de syntaxe ?? la ligne %d\n",numligne);
  exit(-1);
 }

int main(){
  init_tab_region();
  initpileR();
  initrepre();
  init();
  initDecla();
  return yyparse();
}
