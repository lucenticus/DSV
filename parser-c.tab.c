
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
#define YYLAST   1968

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNRULES -- Number of states.  */
#define YYNSTATES  457

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
       0,     0,     3,     5,     9,    16,    17,    22,    24,    26,
      30,    32,    35,    37,    39,    44,    48,    53,    57,    61,
      64,    67,    69,    73,    75,    78,    81,    84,    87,    92,
      94,    96,    98,   100,   102,   104,   106,   111,   117,   124,
     126,   130,   134,   138,   140,   144,   148,   150,   154,   158,
     160,   164,   168,   172,   176,   178,   182,   186,   188,   192,
     194,   198,   200,   204,   206,   210,   212,   216,   218,   224,
     226,   230,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   250,   252,   254,   258,   260,   262,   265,   269,   273,
     275,   278,   280,   283,   285,   288,   290,   294,   296,   300,
     302,   304,   306,   308,   310,   312,   314,   316,   318,   320,
     322,   324,   326,   328,   330,   332,   334,   336,   341,   346,
     352,   359,   364,   370,   374,   376,   378,   380,   383,   386,
     390,   393,   395,   398,   400,   402,   406,   408,   411,   415,
     421,   428,   432,   434,   438,   439,   441,   445,   447,   449,
     452,   454,   456,   460,   465,   469,   474,   479,   483,   485,
     488,   491,   495,   497,   500,   502,   506,   508,   512,   515,
     518,   520,   522,   526,   528,   531,   533,   535,   538,   542,
     545,   549,   553,   558,   561,   565,   569,   574,   576,   580,
     585,   587,   591,   593,   595,   597,   599,   601,   603,   607,
     612,   616,   619,   623,   627,   632,   635,   637,   640,   642,
     645,   647,   650,   656,   664,   670,   676,   684,   691,   699,
     703,   706,   709,   712,   716,   722,   731,   742,   755,   756,
     758,   759,   761,   763,   767,   772,   780,   782,   786,   788,
     791,   793,   795,   799,   804,   809,   813,   814,   816,   818,
     821,   828,   830,   834,   835,   837,   842,   849,   854,   856,
     858,   860
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     156,     0,    -1,     3,    -1,    64,     3,    65,    -1,    64,
      66,     3,    67,     3,    65,    -1,    -1,    64,     1,    65,
      90,    -1,     4,    -1,    91,    -1,    68,   110,    69,    -1,
       5,    -1,    91,     5,    -1,     1,    -1,    89,    -1,    92,
      70,   110,    71,    -1,    92,    68,    69,    -1,    92,    68,
      93,    69,    -1,    92,    66,     3,    -1,    92,     7,     3,
      -1,    92,     8,    -1,    92,     9,    -1,   108,    -1,    93,
      72,   108,    -1,    92,    -1,     8,    94,    -1,     9,    94,
      -1,    95,    96,    -1,     6,    94,    -1,     6,    68,   137,
      69,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    94,    -1,    68,   137,    69,    96,
      -1,    68,   137,    69,    64,    65,    -1,    68,   137,    69,
      64,   110,    65,    -1,    96,    -1,    97,    74,    96,    -1,
      97,    79,    96,    -1,    97,    80,    96,    -1,    97,    -1,
      98,    75,    97,    -1,    98,    76,    97,    -1,    98,    -1,
      99,    10,    98,    -1,    99,    11,    98,    -1,    99,    -1,
     100,    81,    99,    -1,   100,    82,    99,    -1,   100,    12,
      99,    -1,   100,    13,    99,    -1,   100,    -1,   101,    14,
     100,    -1,   101,    15,   100,    -1,   101,    -1,   102,    73,
     101,    -1,   102,    -1,   103,    83,   102,    -1,   103,    -1,
     104,    84,   103,    -1,   104,    -1,   105,    16,   104,    -1,
     105,    -1,   106,    17,   105,    -1,   106,    -1,   106,    85,
     110,    86,   107,    -1,   107,    -1,    94,   109,   108,    -1,
      67,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,   108,    -1,   110,    72,   108,    -1,   144,    -1,
     107,    -1,   113,    87,    -1,   113,   114,    87,    -1,   113,
       1,    87,    -1,   116,    -1,   116,   113,    -1,   117,    -1,
     117,   113,    -1,   128,    -1,   128,   113,    -1,   115,    -1,
     114,    72,   115,    -1,   129,    -1,   129,    67,   140,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
     161,    -1,    44,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,    40,    -1,    41,    -1,    38,    -1,    39,    -1,
     118,    -1,   125,    -1,    28,    -1,    45,    68,   110,    69,
      -1,    45,    68,   113,    69,    -1,   119,     3,    64,    65,
     159,    -1,   119,     3,    64,   120,    65,   159,    -1,   119,
      64,    65,   159,    -1,   119,    64,   120,    65,   159,    -1,
     119,     3,   159,    -1,    46,    -1,    47,    -1,   121,    -1,
     120,   121,    -1,   122,    87,    -1,   122,   123,    87,    -1,
     117,   122,    -1,   117,    -1,   128,   122,    -1,   128,    -1,
     124,    -1,   123,    72,   124,    -1,   129,    -1,    86,   111,
      -1,   129,    86,   111,    -1,    48,    64,   126,    65,   159,
      -1,    48,     3,    64,   126,    65,   159,    -1,    48,     3,
     159,    -1,   127,    -1,   126,    72,   127,    -1,    -1,     3,
      -1,     3,    67,   111,    -1,    42,    -1,    43,    -1,   131,
     130,    -1,   130,    -1,     3,    -1,    68,   129,    69,    -1,
     130,    70,   111,    71,    -1,   130,    70,    71,    -1,   130,
      68,   133,    69,    -1,   130,    68,   136,    69,    -1,   130,
      68,    69,    -1,    74,    -1,    74,   132,    -1,    74,   131,
      -1,    74,   132,   131,    -1,   128,    -1,   132,   128,    -1,
     134,    -1,   134,    72,    49,    -1,   135,    -1,   134,    72,
     135,    -1,   113,   129,    -1,   113,   138,    -1,   113,    -1,
       3,    -1,   136,    72,     3,    -1,   122,    -1,   122,   138,
      -1,   131,    -1,   139,    -1,   131,   139,    -1,    68,   138,
      69,    -1,    70,    71,    -1,    70,   111,    71,    -1,   139,
      70,    71,    -1,   139,    70,   111,    71,    -1,    68,    69,
      -1,    68,   133,    69,    -1,   139,    68,    69,    -1,   139,
      68,   133,    69,    -1,   108,    -1,    64,   141,    65,    -1,
      64,   141,    72,    65,    -1,   140,    -1,   141,    72,   140,
      -1,   143,    -1,   144,    -1,   147,    -1,   148,    -1,   149,
      -1,   150,    -1,     3,    86,   142,    -1,    50,   111,    86,
     142,    -1,    51,    86,   142,    -1,    64,    65,    -1,    64,
     146,    65,    -1,    64,   145,    65,    -1,    64,   145,   146,
      65,    -1,   144,    87,    -1,   112,    -1,   145,   112,    -1,
     142,    -1,   146,   142,    -1,    87,    -1,   110,    87,    -1,
      52,    68,   110,    69,   142,    -1,    52,    68,   110,    69,
     142,    53,   142,    -1,    54,    68,   110,    69,   142,    -1,
      55,    68,   110,    69,   142,    -1,    56,   142,    55,    68,
     110,    69,    87,    -1,    57,    68,   147,   147,    69,   142,
      -1,    57,    68,   147,   147,   110,    69,   142,    -1,    58,
       3,    87,    -1,    59,    87,    -1,    60,    87,    -1,    61,
      87,    -1,    61,   110,    87,    -1,    62,   151,    68,   110,
      69,    -1,    62,   151,    68,   110,    86,   152,    69,    87,
      -1,    62,   151,    68,   110,    86,   152,    86,   152,    69,
      87,    -1,    62,   151,    68,   110,    86,   152,    86,   152,
      86,   155,    69,    87,    -1,    -1,   128,    -1,    -1,   153,
      -1,   154,    -1,   153,    72,   154,    -1,     5,    68,   110,
      69,    -1,    70,   110,    71,     5,    68,   110,    69,    -1,
      91,    -1,   155,    72,    91,    -1,   157,    -1,   156,   157,
      -1,   158,    -1,   112,    -1,   113,   145,   144,    -1,   113,
     129,   159,   144,    -1,   129,   159,   145,   144,    -1,   129,
     159,   144,    -1,    -1,   160,    -1,   161,    -1,   160,   161,
      -1,    63,    68,    68,   162,    69,    69,    -1,   163,    -1,
     162,    72,   163,    -1,    -1,   164,    -1,   164,    68,     3,
      69,    -1,   164,    68,     3,    72,   110,    69,    -1,   164,
      68,   110,    69,    -1,     3,    -1,   116,    -1,   117,    -1,
     128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    49,    51,    53,    53,    55,    57,    59,
      63,    65,    67,    72,    74,    76,    78,    80,    82,    84,
      86,    91,    93,    98,   100,   102,   104,   106,   108,   113,
     115,   117,   119,   121,   123,   128,   130,   132,   134,   140,
     142,   144,   146,   151,   153,   155,   160,   162,   164,   169,
     171,   173,   175,   177,   182,   184,   186,   191,   193,   198,
     200,   205,   207,   212,   214,   219,   221,   226,   228,   233,
     235,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   265,   267,   269,   274,   279,   280,   281,   285,
     286,   287,   288,   289,   290,   294,   295,   299,   300,   304,
     305,   306,   307,   308,   309,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   330,
     331,   332,   333,   334,   338,   339,   343,   344,   348,   349,
     353,   354,   355,   356,   360,   361,   365,   366,   367,   371,
     372,   373,   377,   378,   383,   384,   385,   389,   390,   394,
     395,   399,   400,   401,   402,   403,   404,   405,   409,   411,
     413,   415,   420,   421,   426,   428,   433,   435,   440,   442,
     444,   449,   450,   454,   456,   461,   463,   465,   470,   472,
     474,   476,   478,   480,   482,   484,   486,   491,   492,   493,
     497,   498,   502,   504,   506,   508,   510,   512,   517,   519,
     521,   526,   528,   530,   532,   534,   539,   541,   546,   548,
     553,   555,   560,   562,   564,   569,   571,   573,   575,   580,
     582,   584,   586,   588,   590,   592,   594,   596,   601,   602,
     607,   608,   613,   615,   620,   622,   627,   629,   633,   635,
     640,   642,   647,   649,   651,   653,   659,   660,   664,   665,
     669,   674,   676,   681,   682,   684,   686,   688,   693,   695,
     697,   699
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
  "';'", "$accept", "primary_expression", "$@1", "string",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
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
       0,    88,    89,    89,    89,    90,    89,    89,    89,    89,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   111,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   123,   123,   124,   124,   124,   125,
     125,   125,   126,   126,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   149,   149,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   158,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   163,   163,   163,   163,   164,   164,
     164,   164
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     6,     0,     4,     1,     1,     3,
       1,     2,     1,     1,     4,     3,     4,     3,     3,     2,
       2,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     6,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     3,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     5,
       6,     4,     5,     3,     1,     1,     1,     2,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     5,
       6,     3,     1,     3,     0,     1,     3,     1,     1,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     2,     1,     2,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     3,
       2,     2,     2,     3,     5,     8,    10,    12,     0,     1,
       0,     1,     1,     3,     4,     7,     1,     3,     1,     2,
       1,     1,     3,     4,     4,     3,     0,     1,     1,     2,
       6,     1,     3,     0,     1,     4,     6,     4,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   151,   116,    99,   100,   101,   102,   103,   106,   107,
     108,   109,   112,   113,   110,   111,   147,   148,   105,     0,
     124,   125,     0,     0,     0,   158,   241,     0,    89,    91,
     114,     0,   115,    93,   246,   150,     0,     0,   238,   240,
     104,     0,   246,   144,     0,     0,   162,   160,   159,     0,
      86,   206,     0,     0,    95,    97,     0,    90,    92,   246,
       0,    94,     0,   247,   248,     0,     0,   149,     1,   239,
      12,     2,     7,    10,     0,     0,     0,     0,     0,    29,
      30,    31,    32,    33,    34,    13,     8,    23,    35,     0,
      39,    43,    46,    49,    54,    57,    59,    61,    63,    65,
      67,    69,    82,     0,     0,    84,   144,   141,   145,     0,
     142,   253,   152,   163,   161,    88,    97,     0,    87,     0,
       0,     0,   207,   242,     0,   123,   246,   131,     0,   126,
       0,   133,   245,     0,   249,   171,   157,   170,     0,   164,
     166,     0,     0,   154,    35,    85,     0,     0,    27,     0,
      24,    25,    12,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   201,     0,   210,     0,
     208,   192,   193,     0,     0,   194,   195,   196,   197,     0,
     173,     0,    11,     0,    19,    20,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    71,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,   118,   205,     0,     0,   246,   144,   258,
     259,   260,   261,     0,   251,   254,    96,     0,   187,    98,
     243,     2,   246,     0,   121,   130,   246,   127,     0,   128,
       0,   134,   136,   132,   244,     0,     0,   168,   175,   169,
     176,   155,     0,   156,     0,     0,     0,   153,     0,     5,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   221,   222,     0,   229,     0,     0,   211,   203,     0,
     202,   209,     9,     0,   175,   174,     0,    18,    17,    15,
       0,    21,     0,    70,    40,    41,    42,    44,    45,    47,
      48,    52,    53,    50,    51,    55,    56,    58,    60,    62,
      64,    66,     0,    83,   246,   146,   139,   143,     0,   253,
       0,     2,   190,     0,   119,   246,   122,   137,     0,   129,
       0,   183,     0,     0,   179,     0,   177,     0,     0,   165,
     167,   172,    28,     6,   198,     0,   200,     0,     0,     0,
       0,     0,   219,   223,     0,     0,   204,     0,    36,    16,
       0,    14,     0,   140,   250,   252,     2,     0,   188,     0,
     120,   135,   138,   184,   178,   180,   185,     0,   181,     0,
     199,     0,     0,     0,     0,     0,     0,     0,    37,     0,
      22,    68,   255,     0,   257,   189,   191,   186,   182,   212,
     214,   215,     0,     0,     0,   224,   230,     4,    38,     0,
       0,     0,   217,     0,     0,     0,     0,   231,   232,   256,
     213,   216,   218,     0,     0,     0,   230,     0,     0,     0,
     225,     0,   233,   234,     0,     0,     0,     0,   226,   236,
       0,     0,     0,     0,   235,   227,   237
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,   353,    86,    87,   300,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   200,   169,   146,    51,    52,    53,    54,    28,    29,
      30,    31,   128,   129,   130,   250,   251,    32,   109,   110,
      33,    34,    35,    36,    48,   342,   139,   140,   141,   181,
     343,   260,   239,   333,   170,   171,   105,   173,   174,   175,
     176,   177,   178,   285,   426,   427,   428,   450,    37,    38,
      39,    62,    63,    40,   233,   234,   235
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -272
static const yytype_int16 yypact[] =
{
    1553,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   -42,
    -272,  -272,    13,   -23,    29,   102,  -272,   809,  1890,  1890,
    -272,    41,  -272,  1890,    -7,   115,    20,  1459,  -272,  -272,
    -272,   937,   219,    48,    93,    -5,  -272,  -272,   102,    44,
    -272,  -272,    17,   -17,  -272,   235,  1817,  -272,  -272,   272,
    1683,  -272,  1817,    -7,  -272,   617,   305,   115,  -272,  -272,
    -272,  -272,  -272,  -272,  1207,  1237,  1237,   393,   988,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,   165,   206,   472,  1285,
    -272,   199,   225,   327,    59,   328,   145,   147,   204,   300,
       4,  -272,  -272,   100,   260,   246,    48,  -272,   288,   151,
    -272,   730,  -272,  -272,  -272,  -272,   290,    29,  -272,  1315,
     295,   473,  -272,   246,  1715,  -272,    -7,  1920,  1747,  -272,
      80,  1920,   246,  1817,  -272,  -272,  -272,    46,   298,   315,
    -272,   112,    51,  -272,  -272,  -272,   299,   988,  -272,  1330,
    -272,  -272,   307,   -38,  1285,   291,   323,   325,   332,   747,
     335,   392,   317,   318,   827,   303,  -272,   404,  -272,    47,
    -272,  -272,    63,   553,   633,  -272,  -272,  -272,  -272,   148,
     217,   339,  -272,   406,  -272,  -272,   408,  1036,  1330,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    1285,  -272,  1285,  1285,  1285,  1285,  1285,  1285,  1285,  1285,
    1285,  1285,  1285,  1285,  1285,  1285,  1285,  1285,  1285,  1285,
    1330,  -272,  1285,  -272,  -272,   166,  1285,    -7,    48,  -272,
    -272,  -272,  -272,   157,  -272,   344,  -272,  1066,  -272,  -272,
     246,   329,    -7,  1779,  -272,  -272,    -7,  -272,  1285,  -272,
      65,  -272,   330,  -272,   246,  1506,  1081,  -272,    32,  -272,
     207,  -272,  1854,  -272,   410,   307,   349,  -272,   350,  -272,
    -272,   747,   356,   747,  1330,  1330,  1330,   363,   857,   359,
    -272,  -272,  -272,    86,  -272,   394,   396,  -272,  -272,   667,
    -272,  -272,  -272,  1600,   237,  -272,  1363,  -272,  -272,  -272,
     173,  -272,   279,  -272,  -272,  -272,  -272,   199,   199,   225,
     225,   327,   327,   327,   327,    59,    59,   328,   145,   147,
     204,   300,    92,  -272,    -7,  -272,  -272,  -272,   391,   730,
    1408,   349,  -272,   174,  -272,    -7,  -272,  -272,    91,  -272,
    1285,  -272,   395,   403,  -272,   402,   207,  1647,  1114,  -272,
    -272,  -272,  -272,  -272,  -272,   747,  -272,   182,   190,   192,
     397,   857,  -272,  -272,  1330,   480,  -272,   884,  -272,  -272,
    1285,  -272,  1285,  -272,  -272,  -272,   221,   223,  -272,  1159,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,   415,  -272,   414,
    -272,   747,   747,   747,  1330,  1192,    88,   421,  -272,   176,
    -272,  -272,  -272,  1330,  -272,  -272,  -272,  -272,  -272,   422,
    -272,  -272,   243,   747,   248,  -272,    42,  -272,  -272,   249,
     747,   400,  -272,   747,   420,  1330,   -55,   417,  -272,  -272,
    -272,  -272,  -272,  1330,   292,   413,    42,    42,   253,   517,
    -272,   -45,  -272,  -272,   458,   453,    38,  1330,  -272,   165,
     258,   262,   455,    38,  -272,  -272,   165
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,  -272,  -193,  -272,  -272,   -16,  -272,   -74,   160,
     167,    -4,   172,   337,   347,   326,   346,   334,  -272,   -44,
    -113,  -272,   -41,   -93,    76,     1,  -272,   427,  -102,   -32,
    -272,  -272,   431,  -116,    97,  -272,   227,  -272,   439,   338,
      15,   -19,   -33,   -12,  -272,   -63,  -272,   306,  -272,   423,
    -118,  -241,  -226,  -272,    -3,  -272,   -52,    74,   398,  -271,
    -272,  -272,  -272,  -272,   131,  -272,   132,  -272,  -272,   535,
    -272,    25,  -272,    23,  -272,   244,  -272
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -247
static const yytype_int16 yytable[] =
{
     103,    27,   138,    67,   123,    45,   238,   361,    55,   230,
     132,   332,   247,    47,   435,   201,    42,   346,    49,   259,
       1,   219,   145,     1,   445,   172,    41,   270,   127,    57,
      58,   436,     1,   116,    61,     1,   114,   179,    27,    70,
      46,   446,   104,    73,    59,    44,   127,   424,   271,     1,
     144,   108,   265,   346,   266,   117,    23,    64,   148,   150,
     151,   272,   295,   113,   112,    64,   137,   107,   240,   172,
     118,   209,   210,   144,   301,   131,    26,    43,    64,   231,
     120,   254,    64,     1,   125,    24,   134,   303,    24,   220,
     395,    25,   127,   131,     1,   127,   127,    24,   116,   127,
     255,    56,   256,    25,    50,    60,   179,   172,   179,   323,
     145,   252,   425,    26,   255,   127,   256,   167,   257,   222,
      25,   172,   172,   283,   238,   258,   232,   247,   304,   305,
     306,   115,   122,   325,   287,   -84,   133,   338,   144,   131,
     211,   212,   131,   131,    16,    17,   131,   302,    24,    64,
     224,   244,   339,   406,    25,   337,   277,   415,   222,    24,
     222,   111,   131,   345,   222,    25,   248,   249,   294,   221,
     182,   291,   222,   363,   416,   180,    25,   248,   372,   322,
     284,   263,   145,    65,   264,    66,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   311,   312,   313,   314,   122,
     144,   127,   145,   183,   184,   185,   227,   292,   215,   172,
     222,   172,   368,   228,   245,    67,   328,   230,   253,   329,
     216,   324,   144,   357,   358,   359,    45,   172,   228,   378,
     144,   418,   369,   258,   180,   370,   379,   382,   222,   122,
      64,   391,   326,   449,   222,   389,   137,   400,   131,   392,
     456,   393,   222,   137,   222,    64,   238,   334,   354,    64,
     356,   336,   186,   202,   187,   347,   188,   348,   203,   204,
     144,   294,    23,   106,   387,   293,   291,   256,   217,   377,
     402,    25,   404,   403,   137,   222,   145,   231,    23,  -246,
     205,   206,   119,   172,   145,   293,    70,   256,    71,    72,
      73,    74,   421,    75,    76,   222,   218,   423,   429,   252,
     222,   222,   443,   396,   144,   222,   399,   452,   401,   223,
     453,   454,   144,   224,   222,    23,   124,   207,   208,   172,
     172,   172,   213,   214,   232,    16,    17,    64,   137,   373,
     371,   222,   390,   412,   414,   226,   144,   119,    64,   121,
     380,   172,   419,   439,   222,   307,   308,   261,   172,   142,
     267,   172,   269,    78,   309,   310,   143,   273,    79,    80,
      81,    82,    83,    84,   434,   315,   316,   262,   409,   410,
     411,   274,   438,   275,   152,   279,   153,    72,    73,    74,
     276,    75,    76,   278,   280,   281,   451,   286,   296,   297,
     422,   298,   330,   351,   270,   271,   340,   430,   360,   352,
     432,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   355,   154,   155,   156,   362,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    23,    77,   166,   167,
     374,    78,   364,   365,   383,   394,    79,    80,    81,    82,
      83,    84,   384,   385,    70,   420,   241,    72,    73,    74,
     168,    75,    76,   397,   407,   408,   417,   431,   433,   437,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     440,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   444,   154,   155,   156,   447,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    23,    77,   166,   199,
     448,    78,   455,   319,   236,   225,    79,    80,    81,    82,
      83,    84,   317,   321,    70,   243,   241,    72,    73,    74,
     168,    75,    76,   318,   320,   381,   327,   441,   350,   442,
     268,   289,    69,   375,     0,     0,     0,     0,     0,     0,
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
       0,    77,   366,   229,     0,    78,     0,     0,     0,     0,
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
      15,    16,    17,    18,    19,    20,    21,    22,    70,     0,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,   152,     0,   331,    72,    73,
      74,    77,    75,    76,     0,    78,    50,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,    70,     0,
      71,    72,    73,    74,   168,    75,    76,     0,    77,   398,
     167,     0,    78,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,    70,
       0,    71,    72,    73,    74,     0,    75,    76,     0,     0,
      23,    77,     0,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    70,     0,    71,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,   152,     0,   331,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,    70,     0,    71,    72,    73,    74,     0,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,    78,   299,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    70,     0,    71,    72,    73,
      74,     0,    75,    76,     0,     0,     0,     0,     0,     0,
     237,     0,   167,     0,    78,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,   142,     0,     0,     0,    78,
       0,     0,   344,     0,    79,    80,    81,    82,    83,    84,
      70,     0,    71,    72,    73,    74,     0,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,    78,     0,     0,   388,     0,    79,    80,    81,
      82,    83,    84,    70,     0,    71,    72,    73,    74,     0,
      75,    76,     0,     0,     0,     0,     0,     0,    70,     0,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,     0,   237,   405,     0,     0,    78,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    70,     0,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
      78,   413,     0,     0,     0,    79,    80,    81,    82,    83,
      84,   142,     0,     0,     0,   147,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    70,     0,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   149,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    70,     0,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,     0,
       0,    70,     0,    71,    72,    73,    74,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,    78,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    70,     0,    71,    72,    73,    74,
       0,    75,    76,     0,     0,     0,     0,     0,     0,   237,
       0,     0,     0,    78,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    77,     0,     0,     0,    78,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    70,
       0,   376,    72,    73,    74,     0,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,     0,
       0,    78,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,   255,   341,   256,     0,     0,     0,
      25,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,   293,   341,
     256,     0,     0,     0,    25,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     2,     0,     0,     0,     0,   386,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   126,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     242,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,   246,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,   121,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,    23,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      41,     0,    65,    36,    56,    24,   119,   278,    27,   111,
      62,   237,   128,    25,    69,    89,     3,   258,     1,   137,
       3,    17,    66,     3,    69,    77,    68,    65,    60,    28,
      29,    86,     3,    52,    33,     3,    48,    78,    37,     1,
      25,    86,    41,     5,     3,    68,    78,     5,    86,     3,
      66,     3,     1,   294,     3,    72,    63,    34,    74,    75,
      76,   154,   180,    48,    69,    42,    65,    42,   120,   121,
      87,    12,    13,    89,   187,    60,     0,    64,    55,   111,
      55,   133,    59,     3,    59,    68,    63,   200,    68,    85,
     361,    74,   124,    78,     3,   127,   128,    68,   117,   131,
      68,    27,    70,    74,    87,    64,   147,   159,   149,   222,
     154,   130,    70,    37,    68,   147,    70,    66,   137,    72,
      74,   173,   174,   164,   237,   137,   111,   243,   202,   203,
     204,    87,    56,   226,    87,    72,    62,    72,   154,   124,
      81,    82,   127,   128,    42,    43,   131,   188,    68,   126,
      87,   126,    87,   379,    74,   248,   159,    69,    72,    68,
      72,    68,   147,   256,    72,    74,    86,    87,   180,    69,
       5,   174,    72,    87,    86,    78,    74,    86,    86,   220,
     165,    69,   226,    68,    72,    70,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   248,   209,   210,   211,   212,   133,
     226,   243,   256,     7,     8,     9,    65,    69,    73,   271,
      72,   273,   296,    72,   127,   258,    69,   329,   131,    72,
      83,    65,   248,   274,   275,   276,   255,   289,    72,    65,
     256,    65,    69,   255,   147,    72,    72,   340,    72,   173,
     227,    69,   227,   446,    72,   348,   255,   370,   243,    69,
     453,    69,    72,   262,    72,   242,   379,   242,   271,   246,
     273,   246,    66,    74,    68,    68,    70,    70,    79,    80,
     296,   293,    63,    64,   347,    68,   289,    70,    84,   330,
      69,    74,    69,    72,   293,    72,   340,   329,    63,    64,
      75,    76,    67,   355,   348,    68,     1,    70,     3,     4,
       5,     6,    69,     8,     9,    72,    16,    69,    69,   338,
      72,    72,    69,   364,   340,    72,   367,    69,   372,    69,
      72,    69,   348,    87,    72,    63,    64,    10,    11,   391,
     392,   393,    14,    15,   329,    42,    43,   324,   347,   324,
      71,    72,   355,   394,   395,    67,   372,    67,   335,    64,
     335,   413,   403,    71,    72,   205,   206,    69,   420,    64,
      71,   423,    65,    68,   207,   208,    71,    86,    73,    74,
      75,    76,    77,    78,   425,   213,   214,    72,   391,   392,
     393,    68,   433,    68,     1,     3,     3,     4,     5,     6,
      68,     8,     9,    68,    87,    87,   447,     3,    69,     3,
     413,     3,    68,     3,    65,    86,    86,   420,    55,    69,
     423,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    86,    50,    51,    52,    87,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      69,    68,    68,    67,    69,    68,    73,    74,    75,    76,
      77,    78,    69,    71,     1,    53,     3,     4,     5,     6,
      87,     8,     9,     3,    69,    71,    65,    87,    68,    72,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      87,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     5,    50,    51,    52,    68,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    67,
      87,    68,    87,   217,   117,   106,    73,    74,    75,    76,
      77,    78,   215,   219,     1,   124,     3,     4,     5,     6,
      87,     8,     9,   216,   218,   338,   228,   436,   262,   437,
     147,   173,    37,   329,    -1,    -1,    -1,    -1,    -1,    -1,
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
      41,    42,    43,    44,    45,    46,    47,    48,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    -1,     1,    -1,     3,     4,     5,
       6,    64,     8,     9,    -1,    68,    87,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    87,     8,     9,    -1,    64,    65,
      66,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    28,    29,    30,    31,    32,
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
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    64,    -1,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    74,    75,    76,    77,    78,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    74,    75,
      76,    77,    78,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
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
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    28,    -1,    -1,    -1,    -1,    69,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    65,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      65,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    65,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    63,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    63,    68,    74,   112,   113,   116,   117,
     118,   119,   125,   128,   129,   130,   131,   156,   157,   158,
     161,    68,     3,    64,    68,   129,   128,   131,   132,     1,
      87,   112,   113,   114,   115,   129,   145,   113,   113,     3,
      64,   113,   159,   160,   161,    68,    70,   130,     0,   157,
       1,     3,     4,     5,     6,     8,     9,    64,    68,    73,
      74,    75,    76,    77,    78,    89,    91,    92,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   110,   113,   144,    64,   159,     3,   126,
     127,    68,    69,   128,   131,    87,   129,    72,    87,    67,
     159,    64,   112,   144,    64,   159,    65,   117,   120,   121,
     122,   128,   144,   145,   161,     3,    69,   113,   133,   134,
     135,   136,    64,    71,    94,   107,   111,    68,    94,    68,
      94,    94,     1,     3,    50,    51,    52,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    65,    66,    87,   110,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   110,
     122,   137,     5,     7,     8,     9,    66,    68,    70,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    67,
     109,    96,    74,    79,    80,    75,    76,    10,    11,    12,
      13,    81,    82,    14,    15,    73,    83,    84,    16,    17,
      85,    69,    72,    69,    87,   126,    67,    65,    72,     3,
     116,   117,   128,   162,   163,   164,   115,    64,   108,   140,
     144,     3,    65,   120,   159,   122,    65,   121,    86,    87,
     123,   124,   129,   122,   144,    68,    70,   129,   131,   138,
     139,    69,    72,    69,    72,     1,     3,    71,   137,    65,
      65,    86,   111,    86,    68,    68,    68,   142,    68,     3,
      87,    87,    87,   110,   128,   151,     3,    87,    65,   146,
      65,   142,    69,    68,   131,   138,    69,     3,     3,    69,
      93,   108,   110,   108,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   102,   103,
     104,   105,   110,   108,    65,   111,   159,   127,    69,    72,
      68,     3,   140,   141,   159,    65,   159,   111,    72,    87,
      86,    69,   133,   138,    71,   111,   139,    68,    70,    49,
     135,     3,    69,    90,   142,    86,   142,   110,   110,   110,
      55,   147,    87,    87,    68,    67,    65,    64,    96,    69,
      72,    71,    86,   159,    69,   163,     3,   110,    65,    72,
     159,   124,   111,    69,    69,    71,    69,   133,    71,   111,
     142,    69,    69,    69,    68,   147,   110,     3,    65,   110,
     108,   107,    69,    72,    69,    65,   140,    69,    71,   142,
     142,   142,   110,    69,   110,    69,    86,    65,    65,   110,
      53,    69,   142,    69,     5,    70,   152,   153,   154,    69,
     142,    87,   142,    68,   110,    69,    86,    72,   110,    71,
      87,   152,   154,    69,     5,    69,    86,    68,    87,    91,
     155,   110,    69,    72,    69,    87,    91
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
#line 53 "parser-c.y"
    { fprintf(yyout, "!t!"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 54 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 56 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 58 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 60 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 64 "parser-c.y"
    { (yyval.a) = new_string((yyvsp[(1) - (1)].id)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 66 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRING, (yyvsp[(1) - (2)].a), new_string((yyvsp[(2) - (2)].id))); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 68 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 73 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 75 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 77 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 79 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 81 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (3)].a), new_id((yyvsp[(3) - (3)].id))); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 83 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POSTFIX_EXPRESSION, (yyvsp[(1) - (3)].a), NULL);/*fix*/ ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 85 "parser-c.y"
    { (yyval.a) = new_ast(INC_OP, NULL, (yyvsp[(1) - (2)].a)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 87 "parser-c.y"
    { (yyval.a) = new_ast(DEC_OP, NULL, (yyvsp[(1) - (2)].a)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 92 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 94 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ARGUMENT_EXPRESSION_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 99 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 101 "parser-c.y"
    { (yyval.a) = new_ast(INC_OP, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 103 "parser-c.y"
    { (yyval.a) = new_ast(DEC_OP, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 105 "parser-c.y"
    { (yyval.a) = new_ast((yyvsp[(1) - (2)].tok), (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 107 "parser-c.y"
    { (yyval.a) = new_ast(SIZEOF, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 109 "parser-c.y"
    { (yyval.a) = new_ast(SIZEOF, (yyvsp[(3) - (4)].a), NULL); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 114 "parser-c.y"
    { (yyval.tok) = '&'; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 116 "parser-c.y"
    { (yyval.tok) = '*'; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 118 "parser-c.y"
    { (yyval.tok) = '+'; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 120 "parser-c.y"
    { (yyval.tok) = '-'; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 122 "parser-c.y"
    { (yyval.tok) = '~'; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 124 "parser-c.y"
    { (yyval.tok) = '!'; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 129 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 131 "parser-c.y"
    { (yyval.a) = new_ast(NODE_CAST_EXPRESSION, (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 133 "parser-c.y"
    { (yyval.a) = new_ast(NODE_CAST_EXPRESSION, (yyvsp[(2) - (5)].a), NULL); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 135 "parser-c.y"
    { (yyval.a) = new_ast(NODE_CAST_EXPRESSION, (yyvsp[(2) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 141 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 143 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 145 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 147 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 152 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 154 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 156 "parser-c.y"
    { (yyval.a) = new_ast('*', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 161 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 163 "parser-c.y"
    { (yyval.a) = new_ast(LEFT_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 165 "parser-c.y"
    { (yyval.a) = new_ast(RIGHT_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 170 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 172 "parser-c.y"
    { (yyval.a) = new_ast('<', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 174 "parser-c.y"
    { (yyval.a) = new_ast('>', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 176 "parser-c.y"
    { (yyval.a) = new_ast(LE_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 178 "parser-c.y"
    { (yyval.a) = new_ast(GE_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 183 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 185 "parser-c.y"
    { (yyval.a) = new_ast(EQ_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 187 "parser-c.y"
    { (yyval.a) = new_ast(NE_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 192 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 194 "parser-c.y"
    { (yyval.a) = new_ast('&', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 199 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 201 "parser-c.y"
    { (yyval.a) = new_ast('^', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 206 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 208 "parser-c.y"
    { (yyval.a) = new_ast('|', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 213 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 215 "parser-c.y"
    { (yyval.a) = new_ast(AND_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 220 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 222 "parser-c.y"
    { (yyval.a) = new_ast(OR_OP, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 227 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 229 "parser-c.y"
    { (yyval.a) = new_flow(IF, (yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 234 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 236 "parser-c.y"
    { (yyval.a) = new_ast((yyvsp[(2) - (3)].tok), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 241 "parser-c.y"
    { (yyval.tok) = '='; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 243 "parser-c.y"
    { (yyval.tok) = MUL_ASSIGN; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 245 "parser-c.y"
    { (yyval.tok) = DIV_ASSIGN; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 247 "parser-c.y"
    { (yyval.tok) = MOD_ASSIGN; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 249 "parser-c.y"
    { (yyval.tok) = ADD_ASSIGN; ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 251 "parser-c.y"
    { (yyval.tok) = SUB_ASSIGN; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 253 "parser-c.y"
    { (yyval.tok) = LEFT_ASSIGN; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 255 "parser-c.y"
    { (yyval.tok) = RIGHT_ASSIGN; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 257 "parser-c.y"
    { (yyval.tok) = AND_ASSIGN; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 259 "parser-c.y"
    { (yyval.tok) = XOR_ASSIGN; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 261 "parser-c.y"
    { (yyval.tok) = OR_ASSIGN; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 266 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 268 "parser-c.y"
    { (yyval.a) = new_ast(NODE_EXPRESSION, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 270 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 275 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 280 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); parse_declaration((yyval.a)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 281 "parser-c.y"
    {  ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 285 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 286 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 287 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 288 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 289 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 290 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 294 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 295 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 299 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 300 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 304 "parser-c.y"
    { (yyval.a) = new_word(TYPEDEF); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 305 "parser-c.y"
    { (yyval.a) = new_word(EXTERN); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 306 "parser-c.y"
    { (yyval.a) = new_word(STATIC); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 307 "parser-c.y"
    { (yyval.a) = new_word(AUTO); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 308 "parser-c.y"
    { (yyval.a) = new_word(REGISTER); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 309 "parser-c.y"
    { (yyval.a) = new_word(ATTRIBUTE); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 313 "parser-c.y"
    { (yyval.a) = new_word(VOID); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 314 "parser-c.y"
    { (yyval.a) = new_word(CHAR); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 315 "parser-c.y"
    { (yyval.a) = new_word(SHORT); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 316 "parser-c.y"
    { (yyval.a) = new_word(INT); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 317 "parser-c.y"
    { (yyval.a) = new_word(LONG); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 318 "parser-c.y"
    { (yyval.a) = new_word(FLOAT); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 319 "parser-c.y"
    { (yyval.a) = new_word(DOUBLE); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 320 "parser-c.y"
    { (yyval.a) = new_word(SIGNED); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 321 "parser-c.y"
    { (yyval.a) = new_word(UNSIGNED); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 322 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 323 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 324 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 325 "parser-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 326 "parser-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 330 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), (yyvsp[(2) - (5)].id), NULL); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 331 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (6)].a), (yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].a)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 332 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), NULL, NULL); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 333 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), NULL, (yyvsp[(3) - (5)].a)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 334 "parser-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].id), NULL); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 338 "parser-c.y"
    { (yyval.a) = new_word(STRUCT); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 339 "parser-c.y"
    { (yyval.a) = new_word(UNION); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 343 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 344 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 349 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 353 "parser-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 354 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 355 "parser-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 356 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 360 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 361 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 365 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 366 "parser-c.y"
    { ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 367 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 371 "parser-c.y"
    { (yyval.a) = new_enum(NULL, (yyvsp[(3) - (5)].a)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 372 "parser-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].a)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 373 "parser-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (3)].id), NULL); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 377 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 378 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ENUMERATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 383 "parser-c.y"
    { /*for last comma*/ ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 384 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 385 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (3)].id)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 389 "parser-c.y"
    { (yyval.a) = new_word(CONST); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 390 "parser-c.y"
    { (yyval.a) = new_word(VOLATILE); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 394 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 395 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 399 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 400 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 401 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 402 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 403 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 404 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 405 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 410 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POINTER,NULL, NULL); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 412 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 414 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (2)].a); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 416 "parser-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 420 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 421 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_QUALIFIER, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 427 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 429 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 434 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 436 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 441 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_DECLARATION, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 443 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_DECLARATION, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 445 "parser-c.y"
    { (yyval.a) = new_ast(NODE_PARAMETER_DECLARATION, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 455 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_NAME, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 457 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_NAME, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 462 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ABSTRACT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 464 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ABSTRACT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 466 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ABSTRACT_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 471 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 473 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 475 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 477 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 479 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 481 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 483 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 485 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 487 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, (yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 491 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ASSIGNMENT_EXPRESSION, NULL, NULL); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 492 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 493 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (4)].a); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 497 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 498 "parser-c.y"
    { (yyval.a) = new_ast(NODE_INITIALIZER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 503 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 505 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 507 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 509 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 511 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 513 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 518 "parser-c.y"
    { (yyval.a) = new_ast(NODE_LABELED_STATEMENT, new_id((yyvsp[(1) - (3)].id)), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 520 "parser-c.y"
    { (yyval.a) = new_ast(NODE_LABELED_STATEMENT, (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 522 "parser-c.y"
    { (yyval.a) = new_ast(NODE_LABELED_STATEMENT, (yyvsp[(3) - (3)].a), NULL); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 527 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 529 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 531 "parser-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 533 "parser-c.y"
    { (yyval.a) = new_ast(NODE_COMPOUND_LIST, (yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 535 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 540 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 542 "parser-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 547 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 549 "parser-c.y"
    { (yyval.a) = new_ast(NODE_STATEMENT_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 554 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 556 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 561 "parser-c.y"
    { (yyval.a) = new_flow(IF, (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), NULL); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 563 "parser-c.y"
    { (yyval.a) = new_flow(IF, (yyvsp[(3) - (7)].a), (yyvsp[(5) - (7)].a), (yyvsp[(7) - (7)].a)); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 565 "parser-c.y"
    { (yyval.a) = new_flow(SWITCH, (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), NULL); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 570 "parser-c.y"
    { (yyval.a) = new_flow(WHILE, (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), NULL); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 572 "parser-c.y"
    { (yyval.a) = new_flow(DO, (yyvsp[(5) - (7)].a), (yyvsp[(2) - (7)].a), NULL); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 574 "parser-c.y"
    { (yyval.a) = new_for((yyvsp[(3) - (6)].a), (yyvsp[(4) - (6)].a), NULL, (yyvsp[(6) - (6)].a)); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 576 "parser-c.y"
    { (yyval.a) = new_for((yyvsp[(3) - (7)].a), (yyvsp[(4) - (7)].a), (yyvsp[(5) - (7)].a), (yyvsp[(7) - (7)].a)); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 581 "parser-c.y"
    { (yyval.a) = new_ast(GOTO, new_id((yyvsp[(2) - (3)].id)), NULL); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 583 "parser-c.y"
    { (yyval.a) = new_word(CONTINUE); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 585 "parser-c.y"
    { (yyval.a) = new_word(BREAK); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 587 "parser-c.y"
    { (yyval.a) = new_word(RETURN); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 589 "parser-c.y"
    { (yyval.a) = new_ast(RETURN, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 591 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (5)].a), (yyvsp[(4) - (5)].a), NULL, NULL, NULL); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 593 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (8)].a), (yyvsp[(4) - (8)].a), (yyvsp[(6) - (8)].a), NULL, NULL); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 595 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (10)].a), (yyvsp[(4) - (10)].a), (yyvsp[(6) - (10)].a), (yyvsp[(8) - (10)].a), NULL); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 597 "parser-c.y"
    { (yyval.a) = new_asm((yyvsp[(2) - (12)].a), (yyvsp[(4) - (12)].a), (yyvsp[(6) - (12)].a), (yyvsp[(8) - (12)].a), (yyvsp[(10) - (12)].a)); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 601 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 603 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 607 "parser-c.y"
    { (yyval.a) = NULL; ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 609 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 614 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 616 "parser-c.y"
    { (yyval.a) = new_ast(NODE_NONNULL_ASM_OPERANDS, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 621 "parser-c.y"
    { (yyval.a) = new_asm_operand(NULL, new_string((yyvsp[(1) - (4)].id)), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 623 "parser-c.y"
    { (yyval.a) = new_asm_operand((yyvsp[(2) - (7)].a), new_string((yyvsp[(4) - (7)].id)), (yyvsp[(6) - (7)].a)); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 628 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 630 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ASM_CLOBBERS, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 634 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 636 "parser-c.y"
    { (yyval.a) = new_ast(NODE_TRANSLATION_UNIT, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); root = (yyval.a); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 641 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 643 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 648 "parser-c.y"
    { (yyval.a) = new_func((yyvsp[(1) - (3)].a), NULL, (yyvsp[(2) - (3)].a), NULL, (yyvsp[(3) - (3)].a)); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 650 "parser-c.y"
    { (yyval.a) = new_func((yyvsp[(1) - (4)].a), (yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), NULL, (yyvsp[(4) - (4)].a)); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 652 "parser-c.y"
    { (yyval.a) = new_func(NULL, (yyvsp[(1) - (4)].a), (yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 654 "parser-c.y"
    { (yyval.a) = new_func(NULL, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a), NULL, (yyvsp[(3) - (3)].a)); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 659 "parser-c.y"
    { (yyval.a) = NULL;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 660 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a) ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 664 "parser-c.y"
    { (yyval.a) =(yyvsp[(1) - (1)].a); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 665 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ATTRIBUTES, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 670 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ATTRIBUTE, (yyvsp[(4) - (6)].a), NULL); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 675 "parser-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 677 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ATTRIBUTE_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 681 "parser-c.y"
    { ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 683 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (1)].a), NULL, NULL); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 685 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (4)].a), new_id((yyvsp[(3) - (4)].id)), NULL); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 687 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (6)].a), new_id((yyvsp[(3) - (6)].id)), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 689 "parser-c.y"
    { (yyval.a) = new_attribute((yyvsp[(1) - (4)].a), NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 694 "parser-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 696 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ANY_WORD, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 698 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ANY_WORD, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 700 "parser-c.y"
    { (yyval.a) = new_ast(NODE_ANY_WORD, (yyvsp[(1) - (1)].a), NULL); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3948 "parser-c.tab.c"
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

