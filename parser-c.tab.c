
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 15 "parser-c.y"

#include <stdio.h>
#include "lex.yy.c"


/* Line 189 of yacc.c  */
#line 79 "parser-c.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     CHAR = 289,
     SHORT = 290,
     INT = 291,
     LONG = 292,
     SIGNED = 293,
     UNSIGNED = 294,
     FLOAT = 295,
     DOUBLE = 296,
     CONST = 297,
     VOLATILE = 298,
     VOID = 299,
     TYPEOF = 300,
     STRUCT = 301,
     UNION = 302,
     ENUM = 303,
     ELLIPSIS = 304,
     CASE = 305,
     DEFAULT = 306,
     IF = 307,
     ELSE = 308,
     SWITCH = 309,
     WHILE = 310,
     DO = 311,
     FOR = 312,
     GOTO = 313,
     CONTINUE = 314,
     BREAK = 315,
     RETURN = 316,
     ASM = 317,
     ATTRIBUTE = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "parser-c.y"

    struct ast *a;
    char *id;
    int	  tok;



/* Line 214 of yacc.c  */
#line 186 "parser-c.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "parser-c.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2016

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNRULES -- Number of states.  */
#define YYNSTATES  456

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      68,    69,    74,    75,    72,    76,    66,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    87,
      81,    67,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    84,    65,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    16,    20,    22,    24,    28,
      30,    33,    35,    37,    42,    46,    51,    55,    59,    62,
      65,    67,    71,    73,    76,    79,    82,    85,    90,    92,
      94,    96,    98,   100,   102,   104,   109,   115,   122,   124,
     128,   132,   136,   138,   142,   146,   148,   152,   156,   158,
     162,   166,   170,   174,   176,   180,   184,   186,   190,   192,
     196,   198,   202,   204,   208,   210,   214,   216,   222,   224,
     228,   230,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   250,   252,   256,   258,   260,   263,   267,   271,   273,
     276,   278,   281,   283,   286,   288,   292,   294,   298,   300,
     302,   304,   306,   308,   310,   312,   314,   316,   318,   320,
     322,   324,   326,   328,   330,   332,   334,   339,   344,   350,
     357,   362,   368,   372,   374,   376,   378,   381,   384,   388,
     391,   393,   396,   398,   400,   404,   406,   409,   413,   419,
     426,   430,   432,   436,   437,   439,   443,   445,   447,   450,
     452,   454,   458,   463,   467,   472,   477,   481,   483,   486,
     489,   493,   495,   498,   500,   504,   506,   510,   513,   516,
     518,   520,   524,   526,   529,   531,   533,   536,   540,   543,
     547,   551,   556,   559,   563,   567,   572,   574,   578,   583,
     585,   589,   591,   593,   595,   597,   599,   601,   605,   610,
     614,   617,   621,   625,   630,   633,   635,   638,   640,   643,
     645,   648,   654,   662,   668,   674,   682,   689,   697,   701,
     704,   707,   710,   714,   720,   729,   740,   753,   754,   756,
     757,   759,   761,   765,   770,   778,   780,   784,   786,   789,
     791,   793,   797,   802,   807,   811,   812,   814,   816,   819,
     826,   828,   832,   833,   835,   840,   847,   852,   854,   856,
     858
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,     3,    -1,    64,     3,    65,    -1,    64,
      66,     3,    67,     3,    65,    -1,    64,     1,    65,    -1,
       4,    -1,    90,    -1,    68,   109,    69,    -1,     5,    -1,
      90,     5,    -1,     1,    -1,    89,    -1,    91,    70,   109,
      71,    -1,    91,    68,    69,    -1,    91,    68,    92,    69,
      -1,    91,    66,     3,    -1,    91,     7,     3,    -1,    91,
       8,    -1,    91,     9,    -1,   107,    -1,    92,    72,   107,
      -1,    91,    -1,     8,    93,    -1,     9,    93,    -1,    94,
      95,    -1,     6,    93,    -1,     6,    68,   136,    69,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    93,    -1,    68,   136,    69,    95,    -1,    68,
     136,    69,    64,    65,    -1,    68,   136,    69,    64,   109,
      65,    -1,    95,    -1,    96,    74,    95,    -1,    96,    79,
      95,    -1,    96,    80,    95,    -1,    96,    -1,    97,    75,
      96,    -1,    97,    76,    96,    -1,    97,    -1,    98,    10,
      97,    -1,    98,    11,    97,    -1,    98,    -1,    99,    81,
      98,    -1,    99,    82,    98,    -1,    99,    12,    98,    -1,
      99,    13,    98,    -1,    99,    -1,   100,    14,    99,    -1,
     100,    15,    99,    -1,   100,    -1,   101,    73,   100,    -1,
     101,    -1,   102,    83,   101,    -1,   102,    -1,   103,    84,
     102,    -1,   103,    -1,   104,    16,   103,    -1,   104,    -1,
     105,    17,   104,    -1,   105,    -1,   105,    85,   109,    86,
     106,    -1,   106,    -1,    93,   108,   107,    -1,    67,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
     107,    -1,   109,    72,   107,    -1,   143,    -1,   106,    -1,
     112,    87,    -1,   112,   113,    87,    -1,   112,     1,    87,
      -1,   115,    -1,   115,   112,    -1,   116,    -1,   116,   112,
      -1,   127,    -1,   127,   112,    -1,   114,    -1,   113,    72,
     114,    -1,   128,    -1,   128,    67,   139,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,   160,    -1,
      44,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      40,    -1,    41,    -1,    38,    -1,    39,    -1,   117,    -1,
     124,    -1,    28,    -1,    45,    68,   109,    69,    -1,    45,
      68,   112,    69,    -1,   118,     3,    64,    65,   158,    -1,
     118,     3,    64,   119,    65,   158,    -1,   118,    64,    65,
     158,    -1,   118,    64,   119,    65,   158,    -1,   118,     3,
     158,    -1,    46,    -1,    47,    -1,   120,    -1,   119,   120,
      -1,   121,    87,    -1,   121,   122,    87,    -1,   116,   121,
      -1,   116,    -1,   127,   121,    -1,   127,    -1,   123,    -1,
     122,    72,   123,    -1,   128,    -1,    86,   110,    -1,   128,
      86,   110,    -1,    48,    64,   125,    65,   158,    -1,    48,
       3,    64,   125,    65,   158,    -1,    48,     3,   158,    -1,
     126,    -1,   125,    72,   126,    -1,    -1,     3,    -1,     3,
      67,   110,    -1,    42,    -1,    43,    -1,   130,   129,    -1,
     129,    -1,     3,    -1,    68,   128,    69,    -1,   129,    70,
     110,    71,    -1,   129,    70,    71,    -1,   129,    68,   132,
      69,    -1,   129,    68,   135,    69,    -1,   129,    68,    69,
      -1,    74,    -1,    74,   131,    -1,    74,   130,    -1,    74,
     131,   130,    -1,   127,    -1,   131,   127,    -1,   133,    -1,
     133,    72,    49,    -1,   134,    -1,   133,    72,   134,    -1,
     112,   128,    -1,   112,   137,    -1,   112,    -1,     3,    -1,
     135,    72,     3,    -1,   121,    -1,   121,   137,    -1,   130,
      -1,   138,    -1,   130,   138,    -1,    68,   137,    69,    -1,
      70,    71,    -1,    70,   110,    71,    -1,   138,    70,    71,
      -1,   138,    70,   110,    71,    -1,    68,    69,    -1,    68,
     132,    69,    -1,   138,    68,    69,    -1,   138,    68,   132,
      69,    -1,   107,    -1,    64,   140,    65,    -1,    64,   140,
      72,    65,    -1,   139,    -1,   140,    72,   139,    -1,   142,
      -1,   143,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,     3,    86,   141,    -1,    50,   110,    86,   141,    -1,
      51,    86,   141,    -1,    64,    65,    -1,    64,   145,    65,
      -1,    64,   144,    65,    -1,    64,   144,   145,    65,    -1,
     143,    87,    -1,   111,    -1,   144,   111,    -1,   141,    -1,
     145,   141,    -1,    87,    -1,   109,    87,    -1,    52,    68,
     109,    69,   141,    -1,    52,    68,   109,    69,   141,    53,
     141,    -1,    54,    68,   109,    69,   141,    -1,    55,    68,
     109,    69,   141,    -1,    56,   141,    55,    68,   109,    69,
      87,    -1,    57,    68,   146,   146,    69,   141,    -1,    57,
      68,   146,   146,   109,    69,   141,    -1,    58,     3,    87,
      -1,    59,    87,    -1,    60,    87,    -1,    61,    87,    -1,
      61,   109,    87,    -1,    62,   150,    68,   109,    69,    -1,
      62,   150,    68,   109,    86,   151,    69,    87,    -1,    62,
     150,    68,   109,    86,   151,    86,   151,    69,    87,    -1,
      62,   150,    68,   109,    86,   151,    86,   151,    86,   154,
      69,    87,    -1,    -1,   127,    -1,    -1,   152,    -1,   153,
      -1,   152,    72,   153,    -1,     5,    68,   109,    69,    -1,
      70,   109,    71,     5,    68,   109,    69,    -1,    90,    -1,
     154,    72,    90,    -1,   156,    -1,   155,   156,    -1,   157,
      -1,   111,    -1,   112,   144,   143,    -1,   112,   128,   158,
     143,    -1,   128,   158,   144,   143,    -1,   128,   158,   143,
      -1,    -1,   159,    -1,   160,    -1,   159,   160,    -1,    63,
      68,    68,   161,    69,    69,    -1,   162,    -1,   161,    72,
     162,    -1,    -1,   163,    -1,   163,    68,     3,    69,    -1,
     163,    68,     3,    72,   109,    69,    -1,   163,    68,   109,
      69,    -1,     3,    -1,   115,    -1,   116,    -1,   127,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    49,    51,    53,    55,    57,    59,    63,
      65,    67,    72,    74,    76,    78,    80,    82,    84,    86,
      91,    93,    98,   100,   102,   104,   106,   108,   113,   115,
     117,   119,   121,   123,   128,   130,   132,   134,   140,   142,
     144,   146,   151,   153,   155,   160,   162,   164,   169,   171,
     173,   175,   177,   182,   184,   186,   191,   193,   198,   200,
     205,   207,   212,   214,   219,   221,   226,   228,   233,   235,
     240,   242,   244,   246,   248,   250,   252,   254,   256,   258,
     260,   265,   267,   269,   274,   279,   280,   281,   285,   286,
     287,   288,   289,   290,   294,   295,   299,   300,   304,   305,
     306,   307,   308,   309,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   330,   331,
     332,   333,   334,   338,   339,   343,   344,   348,   349,   353,
     354,   355,   356,   360,   361,   365,   366,   367,   371,   372,
     373,   377,   378,   383,   384,   385,   389,   390,   394,   395,
     399,   400,   401,   402,   403,   404,   405,   409,   411,   413,
     415,   420,   421,   426,   428,   433,   435,   440,   442,   444,
     449,   450,   454,   456,   461,   463,   465,   470,   472,   474,
     476,   478,   480,   482,   484,   486,   491,   492,   493,   497,
     498,   502,   504,   506,   508,   510,   512,   517,   519,   521,
     526,   528,   530,   532,   534,   539,   541,   546,   548,   553,
     555,   560,   562,   564,   569,   571,   573,   575,   580,   582,
     584,   586,   588,   590,   592,   594,   596,   601,   602,   607,
     608,   613,   615,   620,   622,   627,   629,   633,   635,   640,
     642,   647,   649,   651,   653,   659,   660,   664,   665,   669,
     674,   676,   681,   682,   684,   686,   688,   693,   695,   697,
     699
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "TYPEOF", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ASM", "ATTRIBUTE", "'{'", "'}'", "'.'",
  "'='", "'('", "')'", "'['", "']'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "';'", "$accept", "primary_expression", "string", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "maybe_type_qualifier", "asm_operands",
  "nonnull_asm_operands", "asm_operand", "asm_clobbers",
  "translation_unit", "external_declaration", "function_definition",
  "maybe_attribute", "attributes", "attribute", "attribute_list", "attrib",
  "any_word", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   123,   125,    46,    61,    40,    41,
      91,    93,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    96,    96,
      96,    96,    97,    97,    97,    98,    98,    98,    99,    99,
      99,    99,    99,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   110,   111,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   117,   117,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   126,   127,   127,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   141,   142,   142,   142,
     143,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   157,   157,   157,   157,   158,   158,   159,   159,   160,
     161,   161,   162,   162,   162,   162,   162,   163,   163,   163,
     163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     6,     3,     1,     1,     3,     1,
       2,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     6,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     3,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     6,
       4,     5,     3,     1,     1,     1,     2,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     5,     6,
       3,     1,     3,     0,     1,     3,     1,     1,     2,     1,
       1,     3,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     3,     4,     2,     1,     2,     1,     2,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     3,     2,
       2,     2,     3,     5,     8,    10,    12,     0,     1,     0,
       1,     1,     3,     4,     7,     1,     3,     1,     2,     1,
       1,     3,     4,     4,     3,     0,     1,     1,     2,     6,
       1,     3,     0,     1,     4,     6,     4,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   150,   115,    98,    99,   100,   101,   102,   105,   106,
     107,   108,   111,   112,   109,   110,   146,   147,   104,     0,
     123,   124,     0,     0,     0,   157,   240,     0,    88,    90,
     113,     0,   114,    92,   245,   149,     0,     0,   237,   239,
     103,     0,   245,   143,     0,     0,   161,   159,   158,     0,
      85,   205,     0,     0,    94,    96,     0,    89,    91,   245,
       0,    93,     0,   246,   247,     0,     0,   148,     1,   238,
      11,     2,     6,     9,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    12,     7,    22,    34,     0,
      38,    42,    45,    48,    53,    56,    58,    60,    62,    64,
      66,    68,    81,     0,     0,    83,   143,   140,   144,     0,
     141,   252,   151,   162,   160,    87,    96,     0,    86,     0,
       0,     0,   206,   241,     0,   122,   245,   130,     0,   125,
       0,   132,   244,     0,   248,   170,   156,   169,     0,   163,
     165,     0,     0,   153,    34,    84,     0,     0,    26,     0,
      23,    24,    11,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,   200,     0,   209,     0,
     207,   191,   192,     0,     0,   193,   194,   195,   196,     0,
     172,     0,    10,     0,    18,    19,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    70,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,   117,   204,     0,     0,   245,   143,   257,
     258,   259,   260,     0,   250,   253,    95,     0,   186,    97,
     242,     2,   245,     0,   120,   129,   245,   126,     0,   127,
       0,   133,   135,   131,   243,     0,     0,   167,   174,   168,
     175,   154,     0,   155,     0,     0,     0,   152,     0,     5,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,   220,   221,     0,   228,     0,     0,   210,   202,     0,
     201,   208,     8,     0,   174,   173,     0,    17,    16,    14,
       0,    20,     0,    69,    39,    40,    41,    43,    44,    46,
      47,    51,    52,    49,    50,    54,    55,    57,    59,    61,
      63,    65,     0,    82,   245,   145,   138,   142,     0,   252,
       0,     2,   189,     0,   118,   245,   121,   136,     0,   128,
       0,   182,     0,     0,   178,     0,   176,     0,     0,   164,
     166,   171,    27,   197,     0,   199,     0,     0,     0,     0,
       0,   218,   222,     0,     0,   203,     0,    35,    15,     0,
      13,     0,   139,   249,   251,     2,     0,   187,     0,   119,
     134,   137,   183,   177,   179,   184,     0,   180,     0,   198,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    21,
      67,   254,     0,   256,   188,   190,   185,   181,   211,   213,
     214,     0,     0,     0,   223,   229,     4,    37,     0,     0,
       0,   216,     0,     0,     0,     0,   230,   231,   255,   212,
     215,   217,     0,     0,     0,   229,     0,     0,     0,   224,
       0,   232,   233,     0,     0,     0,     0,   225,   235,     0,
       0,     0,     0,   234,   226,   236
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,    87,   300,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     200,   169,   146,    51,    52,    53,    54,    28,    29,    30,
      31,   128,   129,   130,   250,   251,    32,   109,   110,    33,
      34,    35,    36,    48,   342,   139,   140,   141,   181,   343,
     260,   239,   333,   170,   171,   105,   173,   174,   175,   176,
     177,   178,   285,   425,   426,   427,   449,    37,    38,    39,
      62,    63,    40,   233,   234,   235
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -265
static const yytype_int16 yypact[] =
{
    1601,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,   -22,
    -265,  -265,    23,    -4,    46,   132,  -265,   839,  1938,  1938,
    -265,    36,  -265,  1938,    14,     5,    60,  1507,  -265,  -265,
    -265,   937,   233,    53,    68,    65,  -265,  -265,   132,    25,
    -265,  -265,    17,   -20,  -265,   215,  1865,  -265,  -265,   326,
    1731,  -265,  1865,    14,  -265,   647,  1066,     5,  -265,  -265,
    -265,  -265,  -265,  -265,  1285,  1315,  1315,   423,   988,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,   137,   200,   354,  1330,
    -265,   178,   317,   347,    58,   383,    75,    87,   108,   164,
      -2,  -265,  -265,   129,   141,   133,    53,  -265,   182,   106,
    -265,   760,  -265,  -265,  -265,  -265,   208,    46,  -265,  1363,
     167,   503,  -265,   133,  1763,  -265,    14,  1968,  1795,  -265,
      16,  1968,   133,  1865,  -265,  -265,  -265,    45,   212,   214,
    -265,   195,    44,  -265,  -265,  -265,   219,   988,  -265,  1408,
    -265,  -265,   227,   -14,  1330,   217,   230,   248,   265,   777,
     267,   308,   250,   262,   268,   357,  -265,   361,  -265,   140,
    -265,  -265,   142,   583,   663,  -265,  -265,  -265,  -265,   216,
     191,   251,  -265,   366,  -265,  -265,   381,  1081,  1408,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    1330,  -265,  1330,  1330,  1330,  1330,  1330,  1330,  1330,  1330,
    1330,  1330,  1330,  1330,  1330,  1330,  1330,  1330,  1330,  1330,
    1408,  -265,  1330,  -265,  -265,   117,  1330,    14,    53,  -265,
    -265,  -265,  -265,   241,  -265,   340,  -265,  1114,  -265,  -265,
     133,   327,    14,  1827,  -265,  -265,    14,  -265,  1330,  -265,
     145,  -265,   328,  -265,   133,  1554,  1159,  -265,    24,  -265,
     180,  -265,  1902,  -265,   391,   227,   350,  -265,   348,  -265,
    -265,   777,   336,   777,  1408,  1408,  1408,   368,   857,   329,
    -265,  -265,  -265,   152,  -265,   362,   358,  -265,  -265,   697,
    -265,  -265,  -265,  1648,   192,  -265,  1441,  -265,  -265,  -265,
     243,  -265,   330,  -265,  -265,  -265,  -265,   178,   178,   317,
     317,   347,   347,   347,   347,    58,    58,   383,    75,    87,
     108,   164,    -7,  -265,    14,  -265,  -265,  -265,   364,   760,
    1456,   350,  -265,   179,  -265,    14,  -265,  -265,    59,  -265,
    1330,  -265,   365,   367,  -265,   370,   180,  1695,  1192,  -265,
    -265,  -265,  -265,  -265,   777,  -265,   252,   257,   258,   369,
     857,  -265,  -265,  1408,   432,  -265,  1036,  -265,  -265,  1330,
    -265,  1330,  -265,  -265,  -265,   259,   278,  -265,  1207,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,   373,  -265,   372,  -265,
     777,   777,   777,  1408,  1237,   -12,   374,  -265,   181,  -265,
    -265,  -265,  1408,  -265,  -265,  -265,  -265,  -265,   385,  -265,
    -265,   282,   777,   287,  -265,    71,  -265,  -265,   293,   777,
     359,  -265,   777,   376,  1408,    -8,   377,  -265,  -265,  -265,
    -265,  -265,  1408,   332,   389,    71,    71,   294,   440,  -265,
     114,  -265,  -265,   380,   403,    54,  1408,  -265,   137,   299,
     316,   405,    54,  -265,  -265,   137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -198,  -265,  -265,   -53,  -265,   -73,   201,   202,
      96,   198,   279,   256,   276,   277,   283,  -265,   -57,    18,
    -265,   -41,  -110,    43,     1,  -265,   386,  -104,    66,  -265,
    -265,   390,  -111,   -38,  -265,   175,  -265,   399,   288,    57,
     -19,   -30,   -13,  -265,   -63,  -265,   253,  -265,   371,     6,
    -208,  -206,  -265,    28,  -265,   -52,    26,   344,  -264,  -265,
    -265,  -265,  -265,    84,  -265,    85,  -265,  -265,   483,  -265,
      -1,  -265,   -31,  -265,   193,  -265
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -246
static const yytype_int16 yytable[] =
{
     103,    27,   138,    64,   123,    45,    67,   230,    55,   145,
     132,    64,    47,   144,   360,   219,   201,   247,    49,     1,
       1,   148,   150,   151,    64,   172,    42,     1,    64,    57,
      58,   332,   134,   116,    61,   114,   144,   179,    27,    59,
     180,   107,   104,    26,   272,   265,    41,   266,     1,     1,
     346,   270,   117,    56,   120,    70,   108,   414,   125,    73,
     222,   434,     1,     1,    44,   222,   137,   118,   240,   172,
     209,   210,   271,    65,   415,    66,   423,    23,   435,   371,
      26,   254,    46,   220,    24,    24,   346,    43,   133,   245,
      25,    25,   255,   253,   256,    64,   394,   145,   116,   122,
      60,   144,   248,   249,    50,   113,   179,   172,   179,   180,
     167,   252,   115,   255,    24,   256,   325,   131,   257,    25,
      25,   172,   172,   283,   258,   244,   127,    24,    24,   304,
     305,   306,   247,    25,   112,   131,   111,   238,   337,   211,
     212,   424,   182,   259,   127,   248,   345,   302,   215,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   294,   232,   145,
     216,   227,   405,   144,    16,    17,   122,   231,   228,   322,
     218,   131,   324,   444,   131,   131,   295,   277,   131,   228,
     127,   145,   217,   127,   127,   144,    64,   127,   221,   145,
     445,   222,   291,   144,   131,   301,    25,   183,   184,   185,
     223,    64,   222,   127,   -83,    64,   122,   338,   303,   172,
     224,   172,   284,   367,   222,   230,   326,   287,    67,   224,
     381,   121,   339,   356,   357,   358,    45,   172,   388,   362,
     323,   334,   258,   144,   377,   336,   417,   448,   347,   226,
     348,   378,   202,   222,   455,   238,   137,   203,   204,   293,
     293,   256,   256,   137,   263,    25,   186,   264,   187,    70,
     188,    71,    72,    73,    74,   119,    75,    76,    23,  -245,
     294,   261,   119,   145,   386,   292,   262,   144,   222,   376,
     267,   145,   269,    64,   137,   144,    23,   106,   274,   353,
     131,   355,   172,   273,    64,   311,   312,   313,   314,   127,
     328,   279,   368,   329,   400,   369,   275,   291,   144,   252,
     296,   390,   395,   372,   222,   398,   391,   392,   401,   222,
     222,   402,    77,   276,   379,   278,    78,   280,   172,   172,
     172,    79,    80,    81,    82,    83,    84,   403,   137,   281,
     222,   420,   411,   413,   222,   282,   422,   207,   208,   222,
     172,   418,   428,   442,   286,   222,   222,   172,   451,   297,
     172,   452,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   389,   433,   298,   453,   232,   399,   222,    23,
     124,   437,   205,   206,   351,   231,   238,   213,   214,    16,
      17,   370,   222,   438,   222,   450,   307,   308,   330,   309,
     310,   315,   316,   271,   340,   270,   361,   352,   408,   409,
     410,   199,   354,   359,   152,   364,   153,    72,    73,    74,
     363,    75,    76,   373,   382,   396,   383,   393,   419,   416,
     421,   384,   406,   407,   432,   443,   430,   429,   446,   436,
     431,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   318,   154,   155,   156,   439,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    23,    77,   166,   167,
     447,    78,   454,   319,   317,   320,    79,    80,    81,    82,
      83,    84,   321,   236,    70,   225,   241,    72,    73,    74,
     168,    75,    76,   380,   243,   350,   327,   289,   268,   440,
      69,   441,   374,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    23,    77,   166,     0,
       0,    78,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,     0,     0,    70,     0,   241,    72,    73,    74,
     168,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    23,    77,   288,     0,
     135,    78,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,     0,     0,    70,     0,   241,    72,    73,    74,
     168,    75,    76,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,    70,     0,
     241,    72,    73,    74,     0,    75,    76,     0,     0,     0,
      23,     0,     0,   154,   155,   156,   136,   157,   158,   159,
     160,   161,   162,   163,   164,   165,     0,    77,   290,     0,
       0,    78,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,   154,   155,   156,
     168,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,    77,   365,   229,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,    70,     0,
     241,    72,    73,    74,   168,    75,    76,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,   154,   155,   156,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
      49,    77,     1,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,    70,     0,
      71,    72,    73,    74,   168,    75,    76,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    78,    50,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,    70,     0,
      71,    72,    73,    74,   168,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,    70,
       0,    71,    72,    73,    74,     0,    75,    76,     0,     0,
      23,    77,     0,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   152,     0,   331,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    70,     0,    71,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,    70,     0,    71,    72,    73,    74,     0,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,   397,   167,     0,    78,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,   152,     0,   331,    72,    73,
      74,     0,    75,    76,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,    78,     0,     0,   143,     0,    79,
      80,    81,    82,    83,    84,   142,     0,     0,     0,    78,
     299,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      70,     0,    71,    72,    73,    74,     0,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     167,     0,    78,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    70,     0,    71,    72,    73,    74,     0,
      75,    76,     0,     0,     0,     0,     0,     0,    70,     0,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,    78,     0,     0,
     344,     0,    79,    80,    81,    82,    83,    84,    70,     0,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
      78,     0,     0,   387,     0,    79,    80,    81,    82,    83,
      84,   237,   404,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    70,     0,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    78,   412,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    70,     0,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,     0,
       0,    70,     0,    71,    72,    73,    74,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   147,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    70,     0,    71,    72,    73,    74,
       0,    75,    76,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   149,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,   142,     0,     0,     0,    78,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    70,
       0,    71,    72,    73,    74,     0,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,     0,
       0,    78,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    70,     0,    71,    72,    73,    74,     0,    75,
      76,     0,     0,     0,     0,     0,     0,    70,     0,   375,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   366,     0,    68,     0,    78,
       1,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      77,     0,     0,     0,    78,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,   255,   341,   256,     0,     0,     0,    25,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,   293,   341,   256,     0,
       0,     0,    25,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     2,
       0,     0,     0,     0,   385,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   126,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   242,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     246,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,   121,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,    23,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      41,     0,    65,    34,    56,    24,    36,   111,    27,    66,
      62,    42,    25,    66,   278,    17,    89,   128,     1,     3,
       3,    74,    75,    76,    55,    77,     3,     3,    59,    28,
      29,   237,    63,    52,    33,    48,    89,    78,    37,     3,
      78,    42,    41,     0,   154,     1,    68,     3,     3,     3,
     258,    65,    72,    27,    55,     1,     3,    69,    59,     5,
      72,    69,     3,     3,    68,    72,    65,    87,   120,   121,
      12,    13,    86,    68,    86,    70,     5,    63,    86,    86,
      37,   133,    25,    85,    68,    68,   294,    64,    62,   127,
      74,    74,    68,   131,    70,   126,   360,   154,   117,    56,
      64,   154,    86,    87,    87,    48,   147,   159,   149,   147,
      66,   130,    87,    68,    68,    70,   226,    60,   137,    74,
      74,   173,   174,   164,   137,   126,    60,    68,    68,   202,
     203,   204,   243,    74,    69,    78,    68,   119,   248,    81,
      82,    70,     5,   137,    78,    86,   256,   188,    73,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   180,   111,   226,
      83,    65,   378,   226,    42,    43,   133,   111,    72,   220,
      16,   124,    65,    69,   127,   128,   180,   159,   131,    72,
     124,   248,    84,   127,   128,   248,   227,   131,    69,   256,
      86,    72,   174,   256,   147,   187,    74,     7,     8,     9,
      69,   242,    72,   147,    72,   246,   173,    72,   200,   271,
      87,   273,   165,   296,    72,   329,   227,    87,   258,    87,
     340,    64,    87,   274,   275,   276,   255,   289,   348,    87,
     222,   242,   255,   296,    65,   246,    65,   445,    68,    67,
      70,    72,    74,    72,   452,   237,   255,    79,    80,    68,
      68,    70,    70,   262,    69,    74,    66,    72,    68,     1,
      70,     3,     4,     5,     6,    67,     8,     9,    63,    64,
     293,    69,    67,   340,   347,    69,    72,   340,    72,   330,
      71,   348,    65,   324,   293,   348,    63,    64,    68,   271,
     243,   273,   354,    86,   335,   209,   210,   211,   212,   243,
      69,     3,    69,    72,   371,    72,    68,   289,   371,   338,
      69,    69,   363,   324,    72,   366,    69,    69,    69,    72,
      72,    72,    64,    68,   335,    68,    68,    87,   390,   391,
     392,    73,    74,    75,    76,    77,    78,    69,   347,    87,
      72,    69,   393,   394,    72,    87,    69,    10,    11,    72,
     412,   402,    69,    69,     3,    72,    72,   419,    69,     3,
     422,    72,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   354,   424,     3,    69,   329,   369,    72,    63,
      64,   432,    75,    76,     3,   329,   378,    14,    15,    42,
      43,    71,    72,    71,    72,   446,   205,   206,    68,   207,
     208,   213,   214,    86,    86,    65,    87,    69,   390,   391,
     392,    67,    86,    55,     1,    67,     3,     4,     5,     6,
      68,     8,     9,    69,    69,     3,    69,    68,    53,    65,
     412,    71,    69,    71,    68,     5,    87,   419,    68,    72,
     422,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   216,    50,    51,    52,    87,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      87,    68,    87,   217,   215,   218,    73,    74,    75,    76,
      77,    78,   219,   117,     1,   106,     3,     4,     5,     6,
      87,     8,     9,   338,   124,   262,   228,   173,   147,   435,
      37,   436,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      87,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
       3,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      87,     8,     9,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      63,    -1,    -1,    50,    51,    52,    69,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      87,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,     3,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    87,     8,     9,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       1,    64,     3,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    87,     8,     9,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    87,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    87,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      74,    75,    76,    77,    78,    64,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,
      71,    -1,    73,    74,    75,    76,    77,    78,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    74,    75,    76,    77,
      78,    64,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,     0,    -1,    68,
       3,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    74,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,
      -1,    -1,    -1,    -1,    69,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    65,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    65,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      65,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    63,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    63,    68,    74,   111,   112,   115,   116,
     117,   118,   124,   127,   128,   129,   130,   155,   156,   157,
     160,    68,     3,    64,    68,   128,   127,   130,   131,     1,
      87,   111,   112,   113,   114,   128,   144,   112,   112,     3,
      64,   112,   158,   159,   160,    68,    70,   129,     0,   156,
       1,     3,     4,     5,     6,     8,     9,    64,    68,    73,
      74,    75,    76,    77,    78,    89,    90,    91,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   109,   112,   143,    64,   158,     3,   125,
     126,    68,    69,   127,   130,    87,   128,    72,    87,    67,
     158,    64,   111,   143,    64,   158,    65,   116,   119,   120,
     121,   127,   143,   144,   160,     3,    69,   112,   132,   133,
     134,   135,    64,    71,    93,   106,   110,    68,    93,    68,
      93,    93,     1,     3,    50,    51,    52,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    65,    66,    87,   109,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   109,
     121,   136,     5,     7,     8,     9,    66,    68,    70,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    67,
     108,    95,    74,    79,    80,    75,    76,    10,    11,    12,
      13,    81,    82,    14,    15,    73,    83,    84,    16,    17,
      85,    69,    72,    69,    87,   125,    67,    65,    72,     3,
     115,   116,   127,   161,   162,   163,   114,    64,   107,   139,
     143,     3,    65,   119,   158,   121,    65,   120,    86,    87,
     122,   123,   128,   121,   143,    68,    70,   128,   130,   137,
     138,    69,    72,    69,    72,     1,     3,    71,   136,    65,
      65,    86,   110,    86,    68,    68,    68,   141,    68,     3,
      87,    87,    87,   109,   127,   150,     3,    87,    65,   145,
      65,   141,    69,    68,   130,   137,    69,     3,     3,    69,
      92,   107,   109,   107,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   101,   102,
     103,   104,   109,   107,    65,   110,   158,   126,    69,    72,
      68,     3,   139,   140,   158,    65,   158,   110,    72,    87,
      86,    69,   132,   137,    71,   110,   138,    68,    70,    49,
     134,     3,    69,   141,    86,   141,   109,   109,   109,    55,
     146,    87,    87,    68,    67,    65,    64,    95,    69,    72,
      71,    86,   158,    69,   162,     3,   109,    65,    72,   158,
     123,   110,    69,    69,    71,    69,   132,    71,   110,   141,
      69,    69,    69,    68,   146,   109,     3,    65,   109,   107,
     106,    69,    72,    69,    65,   139,    69,    71,   141,   141,
     141,   109,    69,   109,    69,    86,    65,    65,   109,    53,
      69,   141,    69,     5,    70,   151,   152,   153,    69,   141,
      87,   141,    68,   109,    69,    86,    72,   109,    71,    87,
     151,   153,    69,     5,    69,    86,    68,    87,    90,   154,
     109,    69,    72,    69,    87,    90
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 48 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 50 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(2) - (3)].id)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 52 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(3) - (6)].id)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 54 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 56 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 58 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 60 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 64 "parser-c.y"
    { (yyval.a) = new_string((yyvsp[(1) - (1)].id)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 66 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRING, (yyvsp[(1) - (2)].a), new_string((yyvsp[(2) - (2)].id))); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 68 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 73 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 75 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 77 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 79 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 81 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (3)].a), new_id((yyvsp[(3) - (3)].id))); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 83 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (3)].a), NULL);/*fix*/ ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 85 "parser-c.y"
    { (yyval.a) = new_ast(INC_OP, NULL, (yyvsp[(1) - (2)].a)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 87 "parser-c.y"
    { (yyval.a) = new_ast(DEC_OP, NULL, (yyvsp[(1) - (2)].a)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 92 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 94 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ARGUMENT_EXPRESSION_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 99 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 101 "parser-c.y"
    { (yyval.a) = new_ast(INC_OP, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 103 "parser-c.y"
    { (yyval.a) = new_ast(DEC_OP, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 105 "parser-c.y"
    { (yyval.a) = new_ast((yyvsp[(1) - (2)].tok), (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 107 "parser-c.y"
    { (yyval.a) = new_ast(SIZEOF, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 109 "parser-c.y"
    { (yyval.a) = new_ast(SIZEOF, (yyvsp[(3) - (4)].a), NULL); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 114 "parser-c.y"
    { (yyval.tok) = '&'; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 116 "parser-c.y"
    { (yyval.tok) = '*'; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 118 "parser-c.y"
    { (yyval.tok) = '+'; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 120 "parser-c.y"
    { (yyval.tok) = '-'; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 122 "parser-c.y"
    { (yyval.tok) = '~'; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 124 "parser-c.y"
    { (yyval.tok) = '!'; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 129 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 131 "parser-c.y"
    { (yyval.a) = new_ast(NODE_CAST_EXPRESSION, (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 133 "parser-c.y"
    { (yyval.a) = new_ast(NODE_CAST_EXPRESSION, (yyvsp[(2) - (5)].a), NULL); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 135 "parser-c.y"
    { (yyval.a) = new_ast(NODE_CAST_EXPRESSION, (yyvsp[(2) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 141 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 143 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 145 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 147 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 152 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 154 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 156 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 161 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 163 "parser-c.y"
    { (yyval.a) = new_ast(LEFT_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 165 "parser-c.y"
    { (yyval.a) = new_ast(RIGHT_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 170 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 172 "parser-c.y"
    { (yyval.a) = new_ast('<', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "parser-c.y"
    { (yyval.a) = new_ast('>', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 176 "parser-c.y"
    { (yyval.a) = new_ast(LE_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 178 "parser-c.y"
    { (yyval.a) = new_ast(GE_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 183 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 185 "parser-c.y"
    { (yyval.a) = new_ast(EQ_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 187 "parser-c.y"
    { (yyval.a) = new_ast(NE_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 192 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 194 "parser-c.y"
    { (yyval.a) = new_ast('&', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 199 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 201 "parser-c.y"
    { (yyval.a) = new_ast('^', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 206 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 208 "parser-c.y"
    { (yyval.a) = new_ast('|', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 213 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 215 "parser-c.y"
    { (yyval.a) = new_ast(AND_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 220 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 222 "parser-c.y"
    { (yyval.a) = new_ast(OR_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 227 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 229 "parser-c.y"
    { (yyval.a) = new_flow(IF, (yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 234 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 236 "parser-c.y"
    { (yyval.a) = new_ast((yyvsp[(2) - (3)].tok), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 241 "parser-c.y"
    { (yyval.tok) = '='; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 243 "parser-c.y"
    { (yyval.tok) = MUL_ASSIGN; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 245 "parser-c.y"
    { (yyval.tok) = DIV_ASSIGN; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 247 "parser-c.y"
    { (yyval.tok) = MOD_ASSIGN; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 249 "parser-c.y"
    { (yyval.tok) = ADD_ASSIGN; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 251 "parser-c.y"
    { (yyval.tok) = SUB_ASSIGN; ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 253 "parser-c.y"
    { (yyval.tok) = LEFT_ASSIGN; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 255 "parser-c.y"
    { (yyval.tok) = RIGHT_ASSIGN; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 257 "parser-c.y"
    { (yyval.tok) = AND_ASSIGN; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 259 "parser-c.y"
    { (yyval.tok) = XOR_ASSIGN; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 261 "parser-c.y"
    { (yyval.tok) = OR_ASSIGN; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 266 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 268 "parser-c.y"
    { (yyval.a) = new_ast(NODE_EXPRESSION, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 270 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 275 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 280 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); parse_declaration((yyval.a)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 281 "parser-c.y"
    {  ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 285 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 286 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 287 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 288 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 289 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 290 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 294 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 295 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 299 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 300 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 304 "parser-c.y"
    { (yyval.a) = new_word(TYPEDEF); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 305 "parser-c.y"
    { (yyval.a) = new_word(EXTERN); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 306 "parser-c.y"
    { (yyval.a) = new_word(STATIC); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 307 "parser-c.y"
    { (yyval.a) = new_word(AUTO); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 308 "parser-c.y"
    { (yyval.a) = new_word(REGISTER); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 309 "parser-c.y"
    { (yyval.a) = new_word(ATTRIBUTE); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 313 "parser-c.y"
    { (yyval.a) = new_word(VOID); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 314 "parser-c.y"
    { (yyval.a) = new_word(CHAR); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 315 "parser-c.y"
    { (yyval.a) = new_word(SHORT); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 316 "parser-c.y"
    { (yyval.a) = new_word(INT); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 317 "parser-c.y"
    { (yyval.a) = new_word(LONG); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 318 "parser-c.y"
    { (yyval.a) = new_word(FLOAT); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 319 "parser-c.y"
    { (yyval.a) = new_word(DOUBLE); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 320 "parser-c.y"
    { (yyval.a) = new_word(SIGNED); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 321 "parser-c.y"
    { (yyval.a) = new_word(UNSIGNED); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 322 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 323 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 324 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 325 "parser-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 326 "parser-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 330 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), (yyvsp[(2) - (5)].id), NULL); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 331 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (6)].a), (yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].a)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 332 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), NULL, NULL); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 333 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), NULL, (yyvsp[(3) - (5)].a)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 334 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].id), NULL); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 338 "parser-c.y"
    { (yyval.a) = new_word(STRUCT); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 339 "parser-c.y"
    { (yyval.a) = new_word(UNION); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 343 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 344 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 349 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 353 "parser-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 354 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 355 "parser-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 356 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 360 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 361 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 365 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 366 "parser-c.y"
    { ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 367 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 371 "parser-c.y"
    { (yyval.a) = new_enum(NULL, (yyvsp[(3) - (5)].a)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 372 "parser-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].a)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 373 "parser-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (3)].id), NULL); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 377 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 378 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ENUMERATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 383 "parser-c.y"
    { /*for last comma*/ ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 384 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 385 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (3)].id)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 389 "parser-c.y"
    { (yyval.a) = new_word(CONST); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 390 "parser-c.y"
    { (yyval.a) = new_word(VOLATILE); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 394 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 395 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 399 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 400 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 401 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 402 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 403 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 404 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 405 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 410 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POINTER,NULL, NULL); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 412 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 414 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (2)].a); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 416 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 420 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 421 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_QUALIFIER, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 427 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 429 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 434 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 436 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 441 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_DECLARATION, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 443 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_DECLARATION, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 445 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_DECLARATION, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 455 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_NAME, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 457 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_NAME, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 462 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ABSTRACT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 464 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ABSTRACT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 466 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ABSTRACT_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 471 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 473 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 475 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 477 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 479 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 481 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 483 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 485 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 487 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 491 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ASSIGNMENT_EXPRESSION, NULL, NULL); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 492 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 493 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (4)].a); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 497 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 498 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INITIALIZER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 503 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 505 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 507 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 509 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 511 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 513 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 518 "parser-c.y"
    { (yyval.a) = new_ast(NODE_LABELED_STATEMENT, new_id((yyvsp[(1) - (3)].id)), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 520 "parser-c.y"
    { (yyval.a) = new_ast(NODE_LABELED_STATEMENT, (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 522 "parser-c.y"
    { (yyval.a) = new_ast(NODE_LABELED_STATEMENT, (yyvsp[(3) - (3)].a), NULL); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 527 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 529 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 531 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 533 "parser-c.y"
    { (yyval.a) = new_ast(NODE_COMPOUND_LIST, (yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 535 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 540 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 542 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 547 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 549 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STATEMENT_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 554 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 556 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 561 "parser-c.y"
    { (yyval.a) = new_flow(IF, (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), NULL); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 563 "parser-c.y"
    { (yyval.a) = new_flow(IF, (yyvsp[(3) - (7)].a), (yyvsp[(5) - (7)].a), (yyvsp[(7) - (7)].a)); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 565 "parser-c.y"
    { (yyval.a) = new_flow(SWITCH, (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), NULL); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 570 "parser-c.y"
    { (yyval.a) = new_flow(WHILE, (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), NULL); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 572 "parser-c.y"
    { (yyval.a) = new_flow(DO, (yyvsp[(5) - (7)].a), (yyvsp[(2) - (7)].a), NULL); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 574 "parser-c.y"
    { (yyval.a) = new_for((yyvsp[(3) - (6)].a), (yyvsp[(4) - (6)].a), NULL, (yyvsp[(6) - (6)].a)); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 576 "parser-c.y"
    { (yyval.a) = new_for((yyvsp[(3) - (7)].a), (yyvsp[(4) - (7)].a), (yyvsp[(5) - (7)].a), (yyvsp[(7) - (7)].a)); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 581 "parser-c.y"
    { (yyval.a) = new_ast(GOTO, new_id((yyvsp[(2) - (3)].id)), NULL); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 583 "parser-c.y"
    { (yyval.a) = new_word(CONTINUE); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 585 "parser-c.y"
    { (yyval.a) = new_word(BREAK); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 587 "parser-c.y"
    { (yyval.a) = new_word(RETURN); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 589 "parser-c.y"
    { (yyval.a) = new_ast(RETURN, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 591 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (5)].a), (yyvsp[(4) - (5)].a), NULL, NULL, NULL); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 593 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (8)].a), (yyvsp[(4) - (8)].a), (yyvsp[(6) - (8)].a), NULL, NULL); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 595 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (10)].a), (yyvsp[(4) - (10)].a), (yyvsp[(6) - (10)].a), (yyvsp[(8) - (10)].a), NULL); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 597 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (12)].a), (yyvsp[(4) - (12)].a), (yyvsp[(6) - (12)].a), (yyvsp[(8) - (12)].a), (yyvsp[(10) - (12)].a)); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 601 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 603 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 607 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 609 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 614 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 616 "parser-c.y"
    { (yyval.a) = new_ast(NODE_NONNULL_ASM_OPERANDS, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 621 "parser-c.y"
    { (yyval.a) = new_asm_operand(NULL, new_string((yyvsp[(1) - (4)].id)), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 623 "parser-c.y"
    { (yyval.a) = new_asm_operand((yyvsp[(2) - (7)].a), new_string((yyvsp[(4) - (7)].id)), (yyvsp[(6) - (7)].a)); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 628 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 630 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ASM_CLOBBERS, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 634 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 636 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TRANSLATION_UNIT, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); root = (yyval.a); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 641 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 643 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 648 "parser-c.y"
    { (yyval.a) = new_func((yyvsp[(1) - (3)].a), NULL, (yyvsp[(2) - (3)].a), NULL, (yyvsp[(3) - (3)].a)); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 650 "parser-c.y"
    { (yyval.a) = new_func((yyvsp[(1) - (4)].a), (yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), NULL, (yyvsp[(4) - (4)].a)); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 652 "parser-c.y"
    { (yyval.a) = new_func(NULL, (yyvsp[(1) - (4)].a), (yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 654 "parser-c.y"
    { (yyval.a) = new_func(NULL, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a), NULL, (yyvsp[(3) - (3)].a)); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 659 "parser-c.y"
    { (yyval.a) = NULL;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 660 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a) ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 664 "parser-c.y"
    { (yyval.a) =(yyvsp[(1) - (1)].a); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 665 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ATTRIBUTES, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 670 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ATTRIBUTE, (yyvsp[(4) - (6)].a), NULL); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 675 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 677 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ATTRIBUTE_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 681 "parser-c.y"
    { ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 683 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (1)].a), NULL, NULL); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 685 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (4)].a), new_id((yyvsp[(3) - (4)].id)), NULL); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 687 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (6)].a), new_id((yyvsp[(3) - (6)].id)), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 689 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (4)].a), NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 694 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 696 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ANY_WORD, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 698 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ANY_WORD, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 700 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ANY_WORD, (yyvsp[(1) - (1)].a), NULL); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3949 "parser-c.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 703 "parser-c.y"



/*extern char yytext[];*/
extern int column;

int main(int argc, char *argv[]) 
{
    if (argc < 4) {
	printf("usage:%s <input file> <output file> <afs file>\n", argv[0]);
/*	FILE *in, *out; 
	if ((in = fopen("test.c.preprocess", "r")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], "test.c.preprocess");
	    return 1;
	}
	 
	if ((out = fopen("test_out.c", "w")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], "test_out.c");
	    return 1;
	}
	yyin = in;
	yyout = out;
	addref("__builtin_va_list", TYPE_NAME);
	addref("mm_segment_t", TYPE_NAME);
	yyparse();
	parse_to_afs();
*/
    } else {

	FILE *in, *out; 
	if ((in = fopen(argv[1], "r")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], argv[1]);
	    return 1;
	}
	 
	if ((out = fopen(argv[2], "w")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], argv[2]);
	    return 1;
	}
	if ((afs_file = fopen(argv[3], "w")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], argv[3]);
	    return 1;
	}
	yyin = in;
	yyout = out;
	addref("__builtin_va_list", TYPE_NAME);
	addref("mm_segment_t", TYPE_NAME);
	yyparse();
	parse_to_afs();
	
	fclose(in);
	fclose(out);
    }
    return 1;
}
yyerror(char *s)
{
	fflush(stdout);
	fprintf(yyout, "\n%*s\n%*s\n", column, "^", column, s);
}

