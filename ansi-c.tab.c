
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
#line 15 "ansi-c.y"

#include <stdio.h>
#include "lex.yy.c"


/* Line 189 of yacc.c  */
#line 79 "ansi-c.tab.c"

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
     ASM = 317
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "ansi-c.y"

    struct ast *a;
    char *id;



/* Line 214 of yacc.c  */
#line 184 "ansi-c.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 196 "ansi-c.tab.c"

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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNRULES -- Number of states.  */
#define YYNSTATES  420

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,     2,     2,    79,    72,     2,
      67,    68,    73,    74,    71,    75,    65,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    86,
      80,    66,    81,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    83,    64,    76,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
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
     322,   324,   326,   328,   330,   332,   337,   342,   347,   353,
     357,   362,   365,   367,   369,   371,   374,   377,   381,   384,
     386,   389,   391,   393,   397,   399,   402,   406,   411,   417,
     420,   422,   426,   427,   429,   433,   435,   437,   440,   442,
     444,   448,   453,   457,   462,   467,   471,   473,   476,   479,
     483,   485,   488,   490,   494,   496,   500,   503,   506,   508,
     510,   514,   516,   519,   521,   523,   526,   530,   533,   537,
     541,   546,   549,   553,   557,   562,   564,   568,   573,   575,
     579,   581,   583,   585,   587,   589,   591,   595,   600,   604,
     607,   611,   615,   620,   623,   625,   628,   630,   633,   635,
     638,   644,   652,   658,   664,   672,   679,   687,   691,   694,
     697,   700,   704,   710,   719,   730,   743,   744,   746,   747,
     749,   751,   755,   760,   768,   770,   774,   776,   779,   781,
     783,   788,   792,   796
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     154,     0,    -1,     3,    -1,    63,     3,    64,    -1,    63,
      65,     3,    66,     3,    64,    -1,    63,     1,    64,    -1,
       4,    -1,    89,    -1,    67,   108,    68,    -1,     5,    -1,
      89,     5,    -1,     1,    -1,    88,    -1,    90,    69,   108,
      70,    -1,    90,    67,    68,    -1,    90,    67,    91,    68,
      -1,    90,    65,     3,    -1,    90,     7,     3,    -1,    90,
       8,    -1,    90,     9,    -1,   106,    -1,    91,    71,   106,
      -1,    90,    -1,     8,    92,    -1,     9,    92,    -1,    93,
      94,    -1,     6,    92,    -1,     6,    67,   135,    68,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    92,    -1,    67,   135,    68,    94,    -1,    67,
     135,    68,    63,    64,    -1,    67,   135,    68,    63,   108,
      64,    -1,    94,    -1,    95,    73,    94,    -1,    95,    78,
      94,    -1,    95,    79,    94,    -1,    95,    -1,    96,    74,
      95,    -1,    96,    75,    95,    -1,    96,    -1,    97,    10,
      96,    -1,    97,    11,    96,    -1,    97,    -1,    98,    80,
      97,    -1,    98,    81,    97,    -1,    98,    12,    97,    -1,
      98,    13,    97,    -1,    98,    -1,    99,    14,    98,    -1,
      99,    15,    98,    -1,    99,    -1,   100,    72,    99,    -1,
     100,    -1,   101,    82,   100,    -1,   101,    -1,   102,    83,
     101,    -1,   102,    -1,   103,    16,   102,    -1,   103,    -1,
     104,    17,   103,    -1,   104,    -1,   104,    84,   108,    85,
     105,    -1,   105,    -1,    92,   107,   106,    -1,    66,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
     106,    -1,   108,    71,   106,    -1,   142,    -1,   105,    -1,
     111,    86,    -1,   111,   112,    86,    -1,   111,     1,    86,
      -1,   114,    -1,   114,   111,    -1,   115,    -1,   115,   111,
      -1,   126,    -1,   126,   111,    -1,   113,    -1,   112,    71,
     113,    -1,   127,    -1,   127,    66,   138,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    44,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    40,    -1,
      41,    -1,    38,    -1,    39,    -1,   116,    -1,   123,    -1,
      28,    -1,    45,    67,   108,    68,    -1,    45,    67,   111,
      68,    -1,   117,     3,    63,    64,    -1,   117,     3,    63,
     118,    64,    -1,   117,    63,    64,    -1,   117,    63,   118,
      64,    -1,   117,     3,    -1,    46,    -1,    47,    -1,   119,
      -1,   118,   119,    -1,   120,    86,    -1,   120,   121,    86,
      -1,   115,   120,    -1,   115,    -1,   126,   120,    -1,   126,
      -1,   122,    -1,   121,    71,   122,    -1,   127,    -1,    85,
     109,    -1,   127,    85,   109,    -1,    48,    63,   124,    64,
      -1,    48,     3,    63,   124,    64,    -1,    48,     3,    -1,
     125,    -1,   124,    71,   125,    -1,    -1,     3,    -1,     3,
      66,   109,    -1,    42,    -1,    43,    -1,   129,   128,    -1,
     128,    -1,     3,    -1,    67,   127,    68,    -1,   128,    69,
     109,    70,    -1,   128,    69,    70,    -1,   128,    67,   131,
      68,    -1,   128,    67,   134,    68,    -1,   128,    67,    68,
      -1,    73,    -1,    73,   130,    -1,    73,   129,    -1,    73,
     130,   129,    -1,   126,    -1,   130,   126,    -1,   132,    -1,
     132,    71,    49,    -1,   133,    -1,   132,    71,   133,    -1,
     111,   127,    -1,   111,   136,    -1,   111,    -1,     3,    -1,
     134,    71,     3,    -1,   120,    -1,   120,   136,    -1,   129,
      -1,   137,    -1,   129,   137,    -1,    67,   136,    68,    -1,
      69,    70,    -1,    69,   109,    70,    -1,   137,    69,    70,
      -1,   137,    69,   109,    70,    -1,    67,    68,    -1,    67,
     131,    68,    -1,   137,    67,    68,    -1,   137,    67,   131,
      68,    -1,   106,    -1,    63,   139,    64,    -1,    63,   139,
      71,    64,    -1,   138,    -1,   139,    71,   138,    -1,   141,
      -1,   142,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,     3,    85,   140,    -1,    50,   109,    85,   140,    -1,
      51,    85,   140,    -1,    63,    64,    -1,    63,   144,    64,
      -1,    63,   143,    64,    -1,    63,   143,   144,    64,    -1,
     142,    86,    -1,   110,    -1,   143,   110,    -1,   140,    -1,
     144,   140,    -1,    86,    -1,   108,    86,    -1,    52,    67,
     108,    68,   140,    -1,    52,    67,   108,    68,   140,    53,
     140,    -1,    54,    67,   108,    68,   140,    -1,    55,    67,
     108,    68,   140,    -1,    56,   140,    55,    67,   108,    68,
      86,    -1,    57,    67,   145,   145,    68,   140,    -1,    57,
      67,   145,   145,   108,    68,   140,    -1,    58,     3,    86,
      -1,    59,    86,    -1,    60,    86,    -1,    61,    86,    -1,
      61,   108,    86,    -1,    62,   149,    67,   108,    68,    -1,
      62,   149,    67,   108,    85,   150,    68,    86,    -1,    62,
     149,    67,   108,    85,   150,    85,   150,    68,    86,    -1,
      62,   149,    67,   108,    85,   150,    85,   150,    85,   153,
      68,    86,    -1,    -1,   126,    -1,    -1,   151,    -1,   152,
      -1,   151,    71,   152,    -1,     5,    67,   108,    68,    -1,
      69,   108,    70,     5,    67,   108,    68,    -1,    89,    -1,
     153,    71,    89,    -1,   155,    -1,   154,   155,    -1,   156,
      -1,   110,    -1,   111,   127,   143,   142,    -1,   111,   127,
     142,    -1,   127,   143,   142,    -1,   127,   142,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    36,    37,    38,    41,
      42,    43,    47,    48,    49,    50,    51,    52,    53,    54,
      58,    59,    63,    64,    65,    66,    67,    68,    72,    73,
      74,    75,    76,    77,    81,    82,    83,    84,    89,    90,
      91,    92,    96,    97,    98,   102,   103,   104,   108,   109,
     110,   111,   112,   116,   117,   118,   122,   123,   127,   128,
     132,   133,   137,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   171,   172,   173,   177,   181,   182,   183,   187,   188,
     189,   190,   191,   192,   196,   197,   201,   202,   206,   207,
     208,   209,   210,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   231,   232,   233,
     234,   235,   239,   240,   244,   245,   249,   250,   254,   255,
     256,   257,   261,   262,   266,   267,   268,   272,   273,   274,
     278,   279,   284,   285,   286,   290,   291,   295,   296,   300,
     301,   302,   303,   304,   305,   306,   310,   311,   312,   313,
     317,   318,   323,   324,   328,   329,   333,   334,   335,   339,
     340,   344,   345,   349,   350,   351,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   367,   368,   369,   373,   374,
     378,   379,   380,   381,   382,   383,   387,   388,   389,   393,
     394,   395,   396,   397,   401,   402,   406,   407,   411,   412,
     416,   417,   418,   422,   423,   424,   425,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   440,   441,   444,   445,
     449,   450,   454,   455,   459,   460,   464,   465,   469,   470,
     474,   475,   476,   477
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
  "CONTINUE", "BREAK", "RETURN", "ASM", "'{'", "'}'", "'.'", "'='", "'('",
  "')'", "'['", "']'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "string", "postfix_expression",
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
  "translation_unit", "external_declaration", "function_definition", 0
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
     315,   316,   317,   123,   125,    46,    61,    40,    41,    91,
      93,    44,    38,    42,    43,    45,   126,    33,    47,    37,
      60,    62,    94,   124,    63,    58,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    96,    97,    97,    97,    98,    98,
      98,    98,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   109,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   139,   139,
     140,   140,   140,   140,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   156,   156
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
       1,     1,     1,     1,     1,     4,     4,     4,     5,     3,
       4,     2,     1,     1,     1,     2,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     0,     1,     3,     1,     1,     2,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     2,     1,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     2,     1,     2,     1,     2,     1,     2,
       5,     7,     5,     5,     7,     6,     7,     3,     2,     2,
       2,     3,     5,     8,    10,    12,     0,     1,     0,     1,
       1,     3,     4,     7,     1,     3,     1,     2,     1,     1,
       4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   149,   114,    98,    99,   100,   101,   102,   104,   105,
     106,   107,   110,   111,   108,   109,   145,   146,   103,     0,
     122,   123,     0,     0,   156,   239,     0,    88,    90,   112,
       0,   113,    92,     0,   148,     0,     0,   236,   238,     0,
     139,   142,     0,   160,   158,   157,     0,    85,     0,    94,
      96,    89,    91,   121,     0,    93,     0,   204,     0,   243,
       0,     0,     0,   147,     1,   237,    11,     2,     6,     9,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
      33,    12,     7,    22,    34,     0,    38,    42,    45,    48,
      53,    56,    58,    60,    62,    64,    66,    68,    81,     0,
       0,    83,   142,   143,     0,   140,   150,   161,   159,    87,
       0,    86,     0,   241,     0,     0,   119,   129,     0,   124,
       0,   131,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   199,   208,     0,   206,   190,
     191,     0,     0,   192,   193,   194,   195,    96,   203,   205,
     242,   169,   155,   168,     0,   162,   164,     0,     0,   152,
      34,    84,     0,     0,    26,     0,    23,    24,    11,     2,
       0,     0,   171,     0,    10,     0,    18,    19,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    70,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,   116,     0,     0,   137,   142,
      95,     0,   185,    97,   240,   117,     0,   128,   120,   125,
       0,   126,     0,   132,   134,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   219,   220,     0,   227,
       0,   209,   201,     0,   200,   207,     0,     0,   166,   173,
     167,   174,   153,     0,   154,     0,     0,     0,   151,     0,
       5,     3,     0,     8,     0,   173,   172,     0,    17,    16,
      14,     0,    20,     0,    69,    39,    40,    41,    43,    44,
      46,    47,    51,    52,    49,    50,    54,    55,    57,    59,
      61,    63,    65,     0,    82,   138,   144,   141,     2,   188,
       0,   118,   135,     0,   127,     0,   196,     0,   198,     0,
       0,     0,     0,     0,   217,   221,     0,   202,   181,     0,
       0,   177,     0,   175,     0,     0,   163,   165,   170,    27,
       0,     0,    35,    15,     0,    13,     0,   186,     0,   133,
     136,   197,     0,     0,     0,     0,     0,     0,   182,   176,
     178,   183,     0,   179,     0,     0,    36,     0,    21,    67,
     187,   189,   210,   212,   213,     0,     0,     0,   222,   228,
     184,   180,     4,    37,     0,     0,   215,     0,     0,     0,
       0,   229,   230,   211,   214,   216,     0,     0,     0,   228,
       0,     0,     0,   223,     0,   231,   232,     0,     0,     0,
       0,   224,   234,     0,     0,     0,     0,   233,   225,   235
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    81,    82,    83,   281,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     192,   137,   162,    57,    58,    48,    49,    27,    28,    29,
      30,   118,   119,   120,   232,   233,    31,   104,   105,    32,
      33,    34,    35,    45,   329,   155,   156,   157,   173,   330,
     261,   223,   310,   138,   139,   101,   141,   142,   143,   144,
     145,   146,   250,   390,   391,   392,   413,    36,    37,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -223
static const yytype_int16 yypact[] =
{
    1381,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   -33,
    -223,  -223,    44,    48,   134,  -223,    41,  1735,  1735,  -223,
      53,  -223,  1735,  1677,    -5,    13,  1289,  -223,  -223,   813,
      43,    27,     7,  -223,  -223,   134,   -14,  -223,   -48,  -223,
    1514,  -223,  -223,    68,  1547,  -223,   434,  -223,    41,    63,
    1677,  1427,   911,    -5,  -223,  -223,  -223,  -223,  -223,  -223,
    1109,  1157,  1157,   355,   863,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   152,   162,   433,  1186,  -223,   165,   173,   259,
      42,   286,    67,    97,   129,   204,    29,  -223,  -223,   107,
     154,    63,    27,   171,    31,  -223,  -223,  -223,  -223,  -223,
      48,  -223,  1201,    63,  1677,  1578,  -223,  1756,  1609,  -223,
      12,  1756,   143,  1186,   172,   196,   208,   238,   704,   270,
     291,   203,   240,   719,   272,  -223,  -223,   -18,  -223,  -223,
      69,   513,   592,  -223,  -223,  -223,  -223,   273,  -223,  -223,
      63,  -223,  -223,    14,   274,   269,  -223,   168,   145,  -223,
    -223,  -223,   271,   863,  -223,  1234,  -223,  -223,   279,   -37,
     342,   188,    93,   278,  -223,   344,  -223,  -223,   345,   940,
    1234,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  1186,  -223,  1186,  1186,  1186,  1186,  1186,  1186,
    1186,  1186,  1186,  1186,  1186,  1186,  1186,  1186,  1186,  1186,
    1186,  1186,  1234,  -223,  1186,  -223,   153,  1186,  -223,    27,
    -223,   955,  -223,  -223,    63,  -223,  1640,  -223,  -223,  -223,
    1186,  -223,    72,  -223,   264,  -223,   704,   266,   704,  1234,
    1234,  1234,   298,   734,   268,  -223,  -223,  -223,    73,  -223,
     295,  -223,  -223,   625,  -223,  -223,  1335,   988,  -223,     9,
    -223,   195,  -223,  1713,  -223,   362,   279,   305,  -223,   304,
    -223,  -223,   307,  -223,  1468,   258,  -223,  1278,  -223,  -223,
    -223,   200,  -223,   248,  -223,  -223,  -223,  -223,   165,   165,
     173,   173,   259,   259,   259,   259,    42,    42,   286,    67,
      97,   129,   204,    80,  -223,  -223,  -223,  -223,   305,  -223,
     161,  -223,  -223,    19,  -223,  1186,  -223,   704,  -223,   206,
     211,   212,   314,   734,  -223,  -223,  1234,  -223,  -223,   306,
     336,  -223,   312,   195,   577,  1032,  -223,  -223,  -223,  -223,
     405,   303,  -223,  -223,  1186,  -223,  1186,  -223,  1065,  -223,
    -223,  -223,   704,   704,   704,  1234,  1080,   -19,  -223,  -223,
    -223,  -223,   353,  -223,   354,   359,  -223,   170,  -223,  -223,
    -223,  -223,   372,  -223,  -223,   220,   704,   222,  -223,    15,
    -223,  -223,  -223,  -223,   704,   340,  -223,   704,   366,  1234,
       3,   363,  -223,  -223,  -223,  -223,  1234,   260,   350,    15,
      15,   227,   439,  -223,    57,  -223,  -223,   378,   360,    62,
    1234,  -223,   152,   228,   242,   361,    62,  -223,  -223,   152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -183,  -223,  -223,   -12,  -223,   -66,   131,   133,
      51,   130,   241,   253,   293,   239,   276,  -223,   -49,  -102,
    -223,   -39,  -112,    33,     4,  -223,   373,  -223,    98,  -223,
    -223,   335,  -109,   -60,  -223,   187,  -223,   401,   285,    46,
     -21,   -29,   -16,  -223,   -58,  -223,   249,  -223,   352,  -127,
    -121,  -214,  -223,  -103,  -223,   -32,   103,   364,  -222,  -223,
    -223,  -223,  -223,   114,  -223,   123,  -223,  -223,   488,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
      99,    59,    42,   154,    26,    50,    63,   309,    44,   229,
     222,   237,     1,   161,   172,     1,     1,     1,   113,   193,
     388,   323,     1,   110,   140,   242,   260,   271,   150,   108,
     103,    51,    52,    25,    39,   171,    55,   147,   111,   255,
      26,   140,    46,   100,     1,   276,   211,    40,   236,   378,
     160,     1,   214,   214,   201,   202,    53,   227,   164,   166,
     167,   235,    61,    66,    62,   153,   379,    69,   251,    25,
      43,   398,   109,   160,   161,   106,   256,   282,   257,    23,
      23,   256,   224,   257,   389,    24,    23,    24,   399,   147,
     284,   107,    24,   149,   248,   218,   140,   230,   231,   234,
     121,   356,   219,   172,   230,   306,   102,    41,    23,   140,
     140,   160,   304,   212,    24,    23,    54,   229,   312,   222,
     121,    24,   203,   204,   171,   408,   171,    47,   285,   286,
     287,   115,   258,   316,   371,   318,    60,   259,   333,   207,
     -83,   283,   409,   313,   214,   332,   266,   149,   267,   148,
     255,   214,   117,   114,   333,   148,   275,   174,   314,   325,
     274,   121,   257,   121,   121,   346,    24,   121,   161,   175,
     176,   177,   117,   303,   149,   213,    16,    17,   214,   208,
     249,   161,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     319,   320,   321,   350,   140,   160,   140,    24,   161,   121,
     170,   342,   209,   117,   351,   117,   117,   305,   160,   117,
     210,   140,   215,   364,   219,   347,   412,   178,   236,   179,
      63,   180,   348,   419,   383,    42,   264,   217,   194,   265,
     259,   214,   368,   195,   196,   160,   222,   197,   198,   372,
     373,   374,   292,   293,   294,   295,   273,   238,   275,   214,
     153,   117,   334,   239,   335,   160,   161,   153,   343,   199,
     200,   344,   121,   386,   352,   240,   362,   214,   153,   353,
     354,   393,   214,   214,   395,   140,   161,   357,   385,   245,
     387,   214,   234,   214,   244,   406,   415,   369,   214,   416,
     205,   206,   367,   160,   168,   241,   308,    68,    69,    70,
     417,    71,    72,   214,    16,    17,   375,   377,   345,   214,
     140,   140,   140,   160,   117,   274,   246,   257,   288,   289,
     402,   214,   290,   291,   160,   296,   297,   243,   153,   112,
     263,   268,   262,   270,   140,   272,   277,   278,   279,   315,
     397,   317,   140,   322,   324,   140,   168,   401,   169,    68,
      69,    70,   326,    71,    72,   338,    73,   366,   170,   271,
      74,   414,   339,   340,   358,    75,    76,    77,    78,    79,
      80,   355,   360,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   359,   123,   124,   125,   365,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    73,   135,
     170,   380,    74,   382,   381,   384,   394,    75,    76,    77,
      78,    79,    80,   396,   400,    66,   403,   122,    68,    69,
      70,   136,    71,    72,   407,   410,   411,   418,   298,   301,
     226,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   299,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   220,   123,   124,   125,   302,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    73,   135,   191,
     349,    74,   300,   216,   307,   253,    75,    76,    77,    78,
      79,    80,   337,   404,    66,   269,   122,    68,    69,    70,
     136,    71,    72,   405,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,   123,   124,   125,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    73,   252,     0,     0,
      74,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,     0,     0,    66,     0,   122,    68,    69,    70,   136,
      71,    72,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    66,     0,   122,    68,
      69,    70,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,   123,   124,   125,   361,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    73,   254,     0,     0,    74,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,   123,   124,   125,   136,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    73,   327,
       0,     0,    74,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,     0,     0,    66,     0,   122,    68,    69,
      70,   136,    71,    72,     0,     0,     0,     0,     0,     0,
      66,     0,    67,    68,    69,    70,     0,    71,    72,     0,
       0,     0,     0,     0,     0,    66,     0,    67,    68,    69,
      70,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,   124,   125,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    73,     0,     0,
       0,    74,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    73,     0,     0,     0,    74,     0,     0,     0,
     136,    75,    76,    77,    78,    79,    80,    73,     0,     0,
       0,    74,     0,     0,     0,   247,    75,    76,    77,    78,
      79,    80,     0,     0,    66,     0,    67,    68,    69,    70,
     136,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,    66,     0,    67,    68,    69,    70,
       0,    71,    72,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,     2,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    66,     0,    67,    68,    69,    70,     0,    71,
      72,     0,     0,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    66,     0,    67,    68,    69,    70,     0,    71,    72,
       0,     0,     0,     0,     0,     0,   168,     0,   308,    68,
      69,    70,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,    74,     0,
       0,   159,     0,    75,    76,    77,    78,    79,    80,    66,
       0,    67,    68,    69,    70,     0,    71,    72,     0,     0,
       0,     0,     0,   158,     0,     0,     0,    74,   280,     0,
       0,     0,    75,    76,    77,    78,    79,    80,   221,     0,
     170,     0,    74,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    66,     0,    67,    68,    69,    70,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,    74,     0,     0,   331,     0,
      75,    76,    77,    78,    79,    80,    66,     0,    67,    68,
      69,    70,     0,    71,    72,     0,     0,     0,     0,     0,
       0,    66,     0,    67,    68,    69,    70,     0,    71,    72,
       0,     0,     0,     0,     0,   158,     0,     0,     0,    74,
       0,     0,   363,     0,    75,    76,    77,    78,    79,    80,
      66,     0,    67,    68,    69,    70,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,   370,
       0,     0,    74,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    73,     0,     0,     0,    74,   376,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    66,     0,
      67,    68,    69,    70,     0,    71,    72,     0,     0,     0,
       0,     0,   158,     0,     0,     0,   163,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    66,     0,    67,
      68,    69,    70,     0,    71,    72,     0,     0,     0,     0,
       0,     0,    66,     0,    67,    68,    69,    70,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,     0,     0,     0,   165,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    66,     0,    67,    68,    69,
      70,     0,    71,    72,     0,     0,     0,     0,     0,   158,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,   221,     0,     0,     0,    74,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    66,
       0,    67,    68,    69,    70,     0,    71,    72,     0,    64,
       0,     0,     1,     0,     0,     0,     0,    73,     0,     0,
       0,    74,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     1,     0,
       0,   341,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    23,     0,     0,     0,
       0,     0,    24,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,   328,   257,     0,     0,     0,    24,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,    24,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   328,   257,     0,     0,
       0,    24,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,    56,     0,     0,
     112,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,   116,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,   225,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   228,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   311,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   336,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     2,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      39,    33,    23,    61,     0,    26,    35,   221,    24,   118,
     112,   123,     3,    62,    74,     3,     3,     3,    50,    85,
       5,   243,     3,    71,    56,   128,   153,    64,    60,    45,
       3,    27,    28,     0,    67,    74,    32,    58,    86,   142,
      36,    73,     1,    39,     3,   172,    17,     3,    85,    68,
      62,     3,    71,    71,    12,    13,     3,   117,    70,    71,
      72,   121,    67,     1,    69,    61,    85,     5,    86,    36,
      24,    68,    86,    85,   123,    68,    67,   179,    69,    67,
      67,    67,   114,    69,    69,    73,    67,    73,    85,   110,
     192,    45,    73,    60,   133,    64,   128,    85,    86,   120,
      54,   323,    71,   163,    85,   217,    63,    63,    67,   141,
     142,   123,   214,    84,    73,    67,    63,   226,   230,   221,
      74,    73,    80,    81,   163,    68,   165,    86,   194,   195,
     196,    63,   153,   236,   348,   238,    33,   153,   259,    72,
      71,   180,    85,    71,    71,   257,     1,   114,     3,    86,
     253,    71,    54,    50,   275,    86,   172,     5,    86,    86,
      67,   115,    69,   117,   118,    85,    73,   121,   217,     7,
       8,     9,    74,   212,   141,    68,    42,    43,    71,    82,
     134,   230,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     239,   240,   241,   315,   236,   217,   238,    73,   257,   163,
      65,   277,    83,   115,   317,   117,   118,    64,   230,   121,
      16,   253,    68,   335,    71,    64,   409,    65,    85,    67,
     259,    69,    71,   416,    64,   256,    68,    66,    73,    71,
     256,    71,   344,    78,    79,   257,   348,    74,    75,   352,
     353,   354,   201,   202,   203,   204,    68,    85,   274,    71,
     256,   163,    67,    67,    69,   277,   315,   263,    68,    10,
      11,    71,   226,   376,    68,    67,   334,    71,   274,    68,
      68,   384,    71,    71,   387,   317,   335,   326,    68,    86,
      68,    71,   313,    71,     3,    68,    68,   346,    71,    71,
      14,    15,   341,   315,     1,    67,     3,     4,     5,     6,
      68,     8,     9,    71,    42,    43,   355,   356,    70,    71,
     352,   353,   354,   335,   226,    67,    86,    69,   197,   198,
      70,    71,   199,   200,   346,   205,   206,    67,   334,    66,
      71,    70,    68,    64,   376,     3,    68,     3,     3,    85,
     389,    85,   384,    55,    86,   387,     1,   396,     3,     4,
       5,     6,    67,     8,     9,     3,    63,    64,    65,    64,
      67,   410,    68,    66,    68,    72,    73,    74,    75,    76,
      77,    67,    70,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    68,    50,    51,    52,     3,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    68,    67,    64,    70,    53,    86,    72,    73,    74,
      75,    76,    77,    67,    71,     1,    86,     3,     4,     5,
       6,    86,     8,     9,     5,    67,    86,    86,   207,   210,
     115,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   208,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,   110,    50,    51,    52,   211,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    66,
     313,    67,   209,   102,   219,   141,    72,    73,    74,    75,
      76,    77,   263,   399,     1,   163,     3,     4,     5,     6,
      86,     8,     9,   400,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    -1,    -1,     1,    -1,     3,     4,     5,     6,    86,
       8,     9,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    68,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    86,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    86,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      86,    72,    73,    74,    75,    76,    77,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    86,    72,    73,    74,    75,
      76,    77,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      86,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    70,    -1,    72,    73,    74,    75,    76,    77,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    63,    -1,
      65,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      72,    73,    74,    75,    76,    77,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    70,    -1,    72,    73,    74,    75,    76,    77,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,     0,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     3,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    67,    -1,    -1,    -1,
      -1,    -1,    73,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    73,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    63,    -1,    -1,
      66,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    64,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    64,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    64,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    67,    73,   110,   111,   114,   115,   116,
     117,   123,   126,   127,   128,   129,   154,   155,   156,    67,
       3,    63,   127,   126,   129,   130,     1,    86,   112,   113,
     127,   111,   111,     3,    63,   111,    63,   110,   111,   142,
     143,    67,    69,   128,     0,   155,     1,     3,     4,     5,
       6,     8,     9,    63,    67,    72,    73,    74,    75,    76,
      77,    88,    89,    90,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   108,
     111,   142,    63,     3,   124,   125,    68,   126,   129,    86,
      71,    86,    66,   142,   143,    63,    64,   115,   118,   119,
     120,   126,     3,    50,    51,    52,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    64,    86,   108,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   127,    86,   110,
     142,     3,    68,   111,   131,   132,   133,   134,    63,    70,
      92,   105,   109,    67,    92,    67,    92,    92,     1,     3,
      65,   108,   120,   135,     5,     7,     8,     9,    65,    67,
      69,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    66,   107,    94,    73,    78,    79,    74,    75,    10,
      11,    12,    13,    80,    81,    14,    15,    72,    82,    83,
      16,    17,    84,    68,    71,    68,   124,    66,    64,    71,
     113,    63,   106,   138,   142,    64,   118,   120,    64,   119,
      85,    86,   121,   122,   127,   120,    85,   109,    85,    67,
      67,    67,   140,    67,     3,    86,    86,    86,   108,   126,
     149,    86,    64,   144,    64,   140,    67,    69,   127,   129,
     136,   137,    68,    71,    68,    71,     1,     3,    70,   135,
      64,    64,     3,    68,    67,   129,   136,    68,     3,     3,
      68,    91,   106,   108,   106,    94,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    98,    98,    99,   100,
     101,   102,   103,   108,   106,    64,   109,   125,     3,   138,
     139,    64,   109,    71,    86,    85,   140,    85,   140,   108,
     108,   108,    55,   145,    86,    86,    67,    64,    68,   131,
     136,    70,   109,   137,    67,    69,    49,   133,     3,    68,
      66,    63,    94,    68,    71,    70,    85,    64,    71,   122,
     109,   140,    68,    68,    68,    67,   145,   108,    68,    68,
      70,    68,   131,    70,   109,     3,    64,   108,   106,   105,
      64,   138,   140,   140,   140,   108,    68,   108,    68,    85,
      68,    70,    64,    64,    53,    68,   140,    68,     5,    69,
     150,   151,   152,   140,    86,   140,    67,   108,    68,    85,
      71,   108,    70,    86,   150,   152,    68,     5,    68,    85,
      67,    86,    89,   153,   108,    68,    71,    68,    86,    89
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
        case 10:

/* Line 1455 of yacc.c  */
#line 42 "ansi-c.y"
    {  ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 182 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); parse_declaration((yyval.a)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 183 "ansi-c.y"
    { ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 187 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 188 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 189 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 190 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 191 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 192 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 196 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 197 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 201 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 202 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 206 "ansi-c.y"
    { (yyval.a) = new_word(TYPEDEF); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 207 "ansi-c.y"
    { (yyval.a) = new_word(EXTERN); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 208 "ansi-c.y"
    { (yyval.a) = new_word(STATIC); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 209 "ansi-c.y"
    { (yyval.a) = new_word(AUTO); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 210 "ansi-c.y"
    { (yyval.a) = new_word(REGISTER); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 214 "ansi-c.y"
    { (yyval.a) = new_word(VOID); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 215 "ansi-c.y"
    { (yyval.a) = new_word(CHAR); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 216 "ansi-c.y"
    { (yyval.a) = new_word(SHORT); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 217 "ansi-c.y"
    { (yyval.a) = new_word(INT); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 218 "ansi-c.y"
    { (yyval.a) = new_word(LONG); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 219 "ansi-c.y"
    { (yyval.a) = new_word(FLOAT); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 220 "ansi-c.y"
    { (yyval.a) = new_word(DOUBLE); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 221 "ansi-c.y"
    { (yyval.a) = new_word(SIGNED); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 222 "ansi-c.y"
    { (yyval.a) = new_word(UNSIGNED); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 223 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 224 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 225 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 226 "ansi-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 227 "ansi-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 231 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), (yyvsp[(2) - (4)].id), NULL); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 232 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), (yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 233 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (3)].a), NULL, NULL); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 234 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 235 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].id), NULL); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 239 "ansi-c.y"
    { (yyval.a) = new_word(STRUCT); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 240 "ansi-c.y"
    { (yyval.a) = new_word(UNION); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 244 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 245 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 250 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 254 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 255 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 256 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 257 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 261 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 262 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 266 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 267 "ansi-c.y"
    { ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 268 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 272 "ansi-c.y"
    { (yyval.a) = new_enum(NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 273 "ansi-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 274 "ansi-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (2)].id), NULL); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 278 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 279 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_ENUMERATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 284 "ansi-c.y"
    { /*for last comma*/ ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 285 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 286 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (3)].id)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 290 "ansi-c.y"
    { (yyval.a) = new_word(CONST); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 291 "ansi-c.y"
    { (yyval.a) = new_word(VOLATILE); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 295 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 296 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 300 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 301 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 302 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 303 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 304 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 305 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 306 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 310 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER,NULL, NULL); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 311 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 312 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (2)].a); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 313 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 317 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 318 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_QUALIFIER, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 367 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_ASSIGNMENT_EXPRESSION, NULL, NULL); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 368 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 369 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (4)].a); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 373 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 374 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INITIALIZER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 440 "ansi-c.y"
    {/*NULL*/;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 444 "ansi-c.y"
    {;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 450 "ansi-c.y"
    {  ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 454 "ansi-c.y"
    { ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 455 "ansi-c.y"
    { ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 459 "ansi-c.y"
    { ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 460 "ansi-c.y"
    { ;}
    break;



/* Line 1455 of yacc.c  */
#line 2706 "ansi-c.tab.c"
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
#line 480 "ansi-c.y"



/*extern char yytext[];*/
extern int column;

int main(int argc, char *argv[]) 
{
    if (argc < 3) {
	printf("usage:%s <input file> <output file>\n", argv[0]);
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
	return (yyparse());*/
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
	yyin = in;
	yyout = out;
	addref("__builtin_va_list", TYPE_NAME);
	addref("mm_segment_t", TYPE_NAME);
	return (yyparse());
    }
    return 1;
}
yyerror(char *s)
{
	fflush(stdout);
	fprintf(yyout, "\n%*s\n%*s\n", column, "^", column, s);
}

