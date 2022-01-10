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

  #include <stdio.h>
  #include "tableLexico.h"
  #include "tableDecla.h"
  #include "tableRepre.h"
  #include "pregion.h"
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

#line 88 "y.tab.c" /* yacc.c:339  */

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

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
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    54,    55,    59,    60,    62,    63,    64,
      65,    68,    68,    71,    71,    72,    72,    75,    78,    79,
      82,    84,    84,    87,    87,    87,    87,    90,    90,    90,
      90,    94,    97,    98,   102,   103,   104,   105,   106,   107,
     108,   109,   116,   117,   120,   120,   125,   126,   129,   130,
     131,   132,   133,   138,   139,   142,   143,   146,   146,   151,
     154,   157,   158,   161,   162,   165,   169,   171,   176,   180,
     185,   186,   188,   189,   190,   193,   194,   195,   198,   199,
     200,   201,   202,   207,   208,   209,   212,   213,   214,   215,
     216,   217,   220,   222,   224,   225,   227,   228,   231,   232,
     233,   236
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
  "dimension", "liste_dimensions", "une_dimension", "declaration_variable",
  "$@4", "declaration_procedure", "$@5", "$@6", "$@7",
  "declaration_fonction", "$@8", "$@9", "$@10", "liste_instructions",
  "suite_liste_inst", "instruction", "liste_champs", "un_champ", "$@11",
  "nom_type", "type_simple", "liste_parametres", "liste_param", "un_param",
  "$@12", "resultat_retourne", "appel", "liste_arguments", "liste_args",
  "un_arg", "condition", "tant_que", "affectation", "expression",
  "expression_arithmetique", "expression_arithmetique2",
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

#define YYPACT_NINF -98

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define YYTABLE_NINF -62

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    55,    18,     9,    23,    56,   -98,   -98,   -98,    55,
      44,   -98,   -98,   -98,   -98,   -98,   -98,   -10,    27,    36,
      60,   -98,    61,    62,     0,    76,   -98,   -98,   -98,   -98,
     -98,   -98,   -15,   -98,   -98,   -98,   100,   112,    97,   -98,
     -98,    29,    29,   -98,    29,   -98,    29,    29,   113,    78,
     -98,   101,   -98,   113,    29,   102,   105,   -98,   -98,   -98,
      79,   -98,   -98,   -98,    29,     7,   -98,   -98,    16,   -22,
     -98,    73,    98,    77,    82,    16,    -6,     4,    25,    98,
     107,   -98,    98,   -98,   104,    88,    83,    83,    48,    29,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,    29,    29,    29,
      29,    29,    29,    29,   -98,   -98,   103,    94,   113,   -98,
     113,    86,   -98,   108,   109,   -98,   -98,   -98,   -98,    90,
     -98,   -98,   -98,   135,   -98,   110,   -98,   -98,   -22,   -22,
     -39,   -98,   -98,    73,    73,   124,   124,    98,    74,   -98,
     138,    96,   106,   -98,     2,   -98,    55,   111,   114,   -98,
     -98,   -98,    58,   -98,    29,   115,    99,   127,   135,   -98,
     -98,   -98,   124,   131,   138,   -98,    13,   -98,   132,    88,
     -98,   111,   -98,    55,   -98,    88,   -98,    29,   -98,    29,
     -98,   -98,   -98,   -98,   -98,   -98
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    23,    27,     2,     0,
       0,     7,     8,     9,    10,     4,     1,    98,     0,     0,
       0,    38,     0,     0,     0,     0,    37,    35,    36,    34,
      41,    40,     0,    99,    11,    21,     0,     0,     0,     3,
       5,     0,     0,    60,     0,    39,     0,     0,     0,     0,
      31,     0,    32,     0,     0,     0,     0,    24,    28,     6,
      98,    79,    80,    81,     0,     0,    63,    65,    70,    74,
      77,    71,    82,     0,     0,     0,     0,     0,     0,    94,
      96,    33,   100,    69,    13,     0,    53,    53,     0,     0,
      62,    90,    91,    89,    88,    87,    86,     0,     0,     0,
       0,     0,     0,     0,   101,    59,     0,     0,     0,    92,
       0,     0,    12,     0,     0,    48,    49,    50,    51,     0,
      47,    22,    46,     0,    25,     0,    78,    64,    72,    73,
      83,    75,    76,    84,    85,     0,     0,    95,    96,    93,
       0,     0,     0,    57,     0,    55,     0,     0,    66,    68,
      97,    44,     0,    42,     0,     0,     0,     0,     0,    54,
      26,    29,     0,     0,     0,    14,     0,    18,     0,     0,
      52,     0,    56,     0,    67,     0,    43,     0,    17,     0,
      16,    58,    30,    45,    19,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -97,   -98,   146,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -20,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,    -9,   -98,   134,   -98,    -5,   -98,   -88,
     -93,    75,   -98,     3,   -98,   -98,   -98,   -98,   -98,    71,
     -98,   -98,   -98,   -41,   -42,     6,     5,   -40,   -98,   -98,
     -98,   -98,    26,    -1,   -98
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    55,   112,   113,   114,
     155,   166,   167,    12,    56,    13,    36,    86,   146,    14,
      37,    87,   173,    15,    24,    25,   152,   153,   163,   121,
     122,   124,   144,   145,   157,    45,    26,    43,    65,    66,
      27,    28,    29,    67,    68,    69,    70,    71,    99,    30,
      31,    78,   111,    72,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    73,    32,    74,    75,    75,    76,    77,    17,   102,
     103,    53,   -61,    83,    97,    98,     1,    17,    16,   102,
     103,    50,    88,    32,   158,    91,    92,    93,    94,    95,
      96,    34,    89,   100,   101,    18,    19,    60,   177,    20,
      41,    42,    54,   106,    18,    19,    21,    79,    20,   160,
     108,   159,    82,   107,   161,    21,    90,   130,    22,    23,
      75,    75,   133,   134,    35,   178,    40,    22,    23,    97,
      98,    61,    62,    63,   109,     3,   182,    44,   181,    64,
     164,   180,     4,     5,     6,     7,    46,   183,   102,   103,
     165,   115,   116,   117,   118,   119,   120,   126,    52,   110,
      53,    97,    98,   128,   129,   131,   132,   137,    57,   138,
      47,    48,    49,   168,   115,   116,   117,   118,   119,    59,
      58,    60,    80,    81,    53,    84,   148,   149,    85,   104,
      42,   105,   110,   123,   136,   139,   168,   -15,   185,   140,
     135,   142,   141,   143,     3,   147,   151,   154,   156,   169,
     171,   170,   162,   174,   175,    38,   179,   184,    51,   176,
     127,   172,   125,     0,   150
};

static const yytype_int16 yycheck[] =
{
       9,    42,     3,    44,    46,    47,    46,    47,     8,    15,
      16,    26,    22,    54,    53,    54,    19,     8,     0,    15,
      16,    21,    64,    24,    22,     9,    10,    11,    12,    13,
      14,     8,    25,    55,    56,    35,    36,     8,    25,    39,
      50,    51,    57,    49,    35,    36,    46,    48,    39,   146,
      25,    49,    53,    49,   147,    46,    49,    99,    58,    59,
     102,   103,   102,   103,     8,    52,    22,    58,    59,    53,
      54,    42,    43,    44,    49,    20,   173,    50,   171,    50,
      22,   169,    27,    28,    29,    30,    50,   175,    15,    16,
      32,     3,     4,     5,     6,     7,     8,    49,    22,    25,
      26,    53,    54,    97,    98,   100,   101,   108,     8,   110,
      50,    50,    50,   154,     3,     4,     5,     6,     7,    22,
       8,     8,    44,    22,    26,    23,   135,   136,    23,    52,
      51,    49,    25,    50,    40,    49,   177,    33,   179,    31,
      37,    51,    33,     8,    20,    35,     8,    51,    42,    34,
      23,    52,    38,   162,    23,     9,    24,   177,    24,   164,
      89,   158,    87,    -1,   138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    62,    20,    27,    28,    29,    30,    63,    64,
      65,    66,    74,    76,    80,    84,     0,     8,    35,    36,
      39,    46,    58,    59,    85,    86,    97,   101,   102,   103,
     110,   111,   114,   115,     8,     8,    77,    81,    65,    84,
      22,    50,    51,    98,    50,    96,    50,    50,    50,    50,
      21,    86,    22,    26,    57,    67,    75,     8,     8,    22,
       8,    42,    43,    44,    50,    99,   100,   104,   105,   106,
     107,   108,   114,   104,   104,   105,   108,   108,   112,   114,
      44,    22,   114,   104,    23,    23,    78,    82,   105,    25,
      49,     9,    10,    11,    12,    13,    14,    53,    54,   109,
      55,    56,    15,    16,    52,    49,    49,    49,    25,    49,
      25,   113,    68,    69,    70,     3,     4,     5,     6,     7,
       8,    90,    91,    50,    92,    92,    49,   100,   106,   106,
     105,   107,   107,   108,   108,    37,    40,   114,   114,    49,
      31,    33,    51,     8,    93,    94,    79,    35,    84,    84,
     113,     8,    87,    88,    51,    71,    42,    95,    22,    49,
      63,    91,    38,    89,    22,    32,    72,    73,   104,    34,
      52,    23,    94,    83,    84,    23,    88,    25,    52,    24,
      90,    91,    63,    90,    73,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    67,    66,    69,    68,    70,    68,    71,    72,    72,
      73,    75,    74,    77,    78,    79,    76,    81,    82,    83,
      80,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    89,    88,    90,    90,    91,    91,
      91,    91,    91,    92,    92,    93,    93,    95,    94,    96,
      97,    98,    98,    99,    99,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   105,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   111,   112,   112,   113,   113,   114,   114,
     114,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     2,     3,     1,     1,     1,
       1,     0,     5,     0,     4,     0,     5,     3,     1,     3,
       3,     0,     5,     0,     0,     0,     7,     0,     0,     0,
       9,     3,     2,     3,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     0,     4,     1,     1,     1,     1,
       1,     1,     4,     0,     3,     1,     3,     0,     4,     3,
       2,     0,     3,     1,     3,     1,     6,     8,     6,     3,
       1,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     4,     5,     1,     3,     0,     3,     1,     1,
       3,     4
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
#line 50 "projet.y" /* yacc.c:1646  */
    {afficherTableLexico();AfficherTD();afficherTR();}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 68 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 71 "projet.y" /* yacc.c:1646  */
    {nbChamps=0;tailleStruct=0;decalage=0;}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 71 "projet.y" /* yacc.c:1646  */
    {ajoutTypeStruct(positionLexeme(nombuffer),tailleStruct);ajoutTRstruct(nbChamps);}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "projet.y" /* yacc.c:1646  */
    {tailleTab=0;iplus();nbChamps=0;}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);ajoutTypeTab(positionLexeme(nombuffer),tailleTab*tailleType(positionLexeme(type)));ajoutTRtab(positionLexeme(type),nbChamps);}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 75 "projet.y" /* yacc.c:1646  */
    {tailleTab=(yyvsp[-1]);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])*(yyvsp[0]);}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "projet.y" /* yacc.c:1646  */
    {(yyval)=((yyvsp[0])-(yyvsp[-2]))+1;nbChamps+=1;TRdimtab((yyvsp[-2]),(yyvsp[0]));}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);ajoutVariable(positionLexeme(nombuffer),positionLexeme(type));}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "projet.y" /* yacc.c:1646  */
    {nbChamps=0;empiler_region();}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "projet.y" /* yacc.c:1646  */
    {ajoutProcedure(positionLexeme(strdup(yytext)));}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "projet.y" /* yacc.c:1646  */
    {ajoutTRproc(nbChamps);}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "projet.y" /* yacc.c:1646  */
    {depiler_region();}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 90 "projet.y" /* yacc.c:1646  */
    {nbChamps=0;empiler_region();}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);ajoutFonction(positionLexeme(strdup(yytext)));}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);ajoutTRfonc(positionLexeme(type),nbChamps);}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "projet.y" /* yacc.c:1646  */
    {depiler_region();;}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "projet.y" /* yacc.c:1646  */
    {tailleStruct+=(yyvsp[0]);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "projet.y" /* yacc.c:1646  */
    {tailleStruct+=(yyvsp[0]);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 120 "projet.y" /* yacc.c:1646  */
    {nombuffer2=strdup(yytext);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "projet.y" /* yacc.c:1646  */
    {type=strdup(yytext);(yyval)=tailleType(positionLexeme(type));
ajoutTRchamp(positionLexeme(nombuffer2),positionLexeme(strdup(yytext)),decalage);decalage+=tailleType(positionLexeme(strdup(yytext)));nbChamps+=1;}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 146 "projet.y" /* yacc.c:1646  */
    {nombuffer=strdup(yytext);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 146 "projet.y" /* yacc.c:1646  */
    {nbChamps+=1;type=strdup(yytext);ajoutParam(positionLexeme(nombuffer),positionLexeme(type));}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 188 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) + (yyvsp[0]);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 189 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) - (yyvsp[0]);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 193 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) * (yyvsp[0]);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) / (yyvsp[0]);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 200 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 201 "projet.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1679 "y.tab.c" /* yacc.c:1646  */
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
#line 238 "projet.y" /* yacc.c:1906  */

int yyerror(){
  printf("Erreur de syntaxe à la ligne %d\n",numligne);
 }

int main(){
  initpileR();
  initrepre();
  init();
  initDecla();
  return yyparse();
}
