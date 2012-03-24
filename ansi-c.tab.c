
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
#define YYLAST   1860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNRULES -- Number of states.  */
#define YYNSTATES  416

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
       0,     0,     3,     5,     9,    16,    18,    20,    24,    26,
      29,    31,    33,    38,    42,    47,    51,    55,    58,    61,
      63,    67,    69,    72,    75,    78,    81,    86,    88,    90,
      92,    94,    96,    98,   100,   105,   111,   118,   120,   124,
     128,   132,   134,   138,   142,   144,   148,   152,   154,   158,
     162,   166,   170,   172,   176,   180,   182,   186,   188,   192,
     194,   198,   200,   204,   206,   210,   212,   218,   220,   224,
     226,   228,   230,   232,   234,   236,   238,   240,   242,   244,
     246,   248,   252,   254,   256,   259,   263,   267,   269,   272,
     274,   277,   279,   282,   284,   288,   290,   294,   296,   298,
     300,   302,   304,   306,   308,   310,   312,   314,   316,   318,
     320,   322,   324,   326,   328,   333,   338,   343,   349,   353,
     358,   361,   363,   365,   367,   370,   373,   377,   380,   382,
     385,   387,   389,   393,   395,   398,   402,   407,   413,   416,
     418,   422,   423,   425,   429,   431,   433,   436,   438,   440,
     444,   449,   453,   458,   463,   467,   469,   472,   475,   479,
     481,   484,   486,   490,   492,   496,   499,   502,   504,   506,
     510,   512,   515,   517,   519,   522,   526,   529,   533,   537,
     542,   545,   549,   553,   558,   560,   564,   569,   571,   575,
     577,   579,   581,   583,   585,   587,   591,   596,   600,   603,
     607,   611,   616,   618,   621,   623,   626,   628,   631,   637,
     645,   651,   657,   665,   672,   680,   684,   687,   690,   693,
     697,   703,   712,   723,   736,   737,   739,   740,   742,   744,
     748,   753,   761,   763,   767,   769,   772,   774,   776,   781,
     785,   789
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     154,     0,    -1,     3,    -1,    63,     3,    64,    -1,    63,
      65,     3,    66,     3,    64,    -1,     4,    -1,    89,    -1,
      67,   108,    68,    -1,     5,    -1,    89,     5,    -1,     1,
      -1,    88,    -1,    90,    69,   108,    70,    -1,    90,    67,
      68,    -1,    90,    67,    91,    68,    -1,    90,    65,     3,
      -1,    90,     7,     3,    -1,    90,     8,    -1,    90,     9,
      -1,   106,    -1,    91,    71,   106,    -1,    90,    -1,     8,
      92,    -1,     9,    92,    -1,    93,    94,    -1,     6,    92,
      -1,     6,    67,   135,    68,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    92,    -1,
      67,   135,    68,    94,    -1,    67,   135,    68,    63,    64,
      -1,    67,   135,    68,    63,   108,    64,    -1,    94,    -1,
      95,    73,    94,    -1,    95,    78,    94,    -1,    95,    79,
      94,    -1,    95,    -1,    96,    74,    95,    -1,    96,    75,
      95,    -1,    96,    -1,    97,    10,    96,    -1,    97,    11,
      96,    -1,    97,    -1,    98,    80,    97,    -1,    98,    81,
      97,    -1,    98,    12,    97,    -1,    98,    13,    97,    -1,
      98,    -1,    99,    14,    98,    -1,    99,    15,    98,    -1,
      99,    -1,   100,    72,    99,    -1,   100,    -1,   101,    82,
     100,    -1,   101,    -1,   102,    83,   101,    -1,   102,    -1,
     103,    16,   102,    -1,   103,    -1,   104,    17,   103,    -1,
     104,    -1,   104,    84,   108,    85,   105,    -1,   105,    -1,
      92,   107,   106,    -1,    66,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,   106,    -1,   108,    71,
     106,    -1,   142,    -1,   105,    -1,   111,    86,    -1,   111,
     112,    86,    -1,   111,     1,    86,    -1,   114,    -1,   114,
     111,    -1,   115,    -1,   115,   111,    -1,   126,    -1,   126,
     111,    -1,   113,    -1,   112,    71,   113,    -1,   127,    -1,
     127,    66,   138,    -1,    29,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    44,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    40,    -1,    41,    -1,    38,    -1,
      39,    -1,   116,    -1,   123,    -1,    28,    -1,    45,    67,
     108,    68,    -1,    45,    67,   111,    68,    -1,   117,     3,
      63,    64,    -1,   117,     3,    63,   118,    64,    -1,   117,
      63,    64,    -1,   117,    63,   118,    64,    -1,   117,     3,
      -1,    46,    -1,    47,    -1,   119,    -1,   118,   119,    -1,
     120,    86,    -1,   120,   121,    86,    -1,   115,   120,    -1,
     115,    -1,   126,   120,    -1,   126,    -1,   122,    -1,   121,
      71,   122,    -1,   127,    -1,    85,   109,    -1,   127,    85,
     109,    -1,    48,    63,   124,    64,    -1,    48,     3,    63,
     124,    64,    -1,    48,     3,    -1,   125,    -1,   124,    71,
     125,    -1,    -1,     3,    -1,     3,    66,   109,    -1,    42,
      -1,    43,    -1,   129,   128,    -1,   128,    -1,     3,    -1,
      67,   127,    68,    -1,   128,    69,   109,    70,    -1,   128,
      69,    70,    -1,   128,    67,   131,    68,    -1,   128,    67,
     134,    68,    -1,   128,    67,    68,    -1,    73,    -1,    73,
     130,    -1,    73,   129,    -1,    73,   130,   129,    -1,   126,
      -1,   130,   126,    -1,   132,    -1,   132,    71,    49,    -1,
     133,    -1,   132,    71,   133,    -1,   111,   127,    -1,   111,
     136,    -1,   111,    -1,     3,    -1,   134,    71,     3,    -1,
     120,    -1,   120,   136,    -1,   129,    -1,   137,    -1,   129,
     137,    -1,    67,   136,    68,    -1,    69,    70,    -1,    69,
     109,    70,    -1,   137,    69,    70,    -1,   137,    69,   109,
      70,    -1,    67,    68,    -1,    67,   131,    68,    -1,   137,
      67,    68,    -1,   137,    67,   131,    68,    -1,   106,    -1,
      63,   139,    64,    -1,    63,   139,    71,    64,    -1,   138,
      -1,   139,    71,   138,    -1,   141,    -1,   142,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,     3,    85,   140,
      -1,    50,   109,    85,   140,    -1,    51,    85,   140,    -1,
      63,    64,    -1,    63,   144,    64,    -1,    63,   143,    64,
      -1,    63,   143,   144,    64,    -1,   110,    -1,   143,   110,
      -1,   140,    -1,   144,   140,    -1,    86,    -1,   108,    86,
      -1,    52,    67,   108,    68,   140,    -1,    52,    67,   108,
      68,   140,    53,   140,    -1,    54,    67,   108,    68,   140,
      -1,    55,    67,   108,    68,   140,    -1,    56,   140,    55,
      67,   108,    68,    86,    -1,    57,    67,   145,   145,    68,
     140,    -1,    57,    67,   145,   145,   108,    68,   140,    -1,
      58,     3,    86,    -1,    59,    86,    -1,    60,    86,    -1,
      61,    86,    -1,    61,   108,    86,    -1,    62,   149,    67,
     108,    68,    -1,    62,   149,    67,   108,    85,   150,    68,
      86,    -1,    62,   149,    67,   108,    85,   150,    85,   150,
      68,    86,    -1,    62,   149,    67,   108,    85,   150,    85,
     150,    85,   153,    68,    86,    -1,    -1,   126,    -1,    -1,
     151,    -1,   152,    -1,   151,    71,   152,    -1,     5,    67,
     108,    68,    -1,    69,   108,    70,     5,    67,   108,    68,
      -1,    89,    -1,   153,    71,    89,    -1,   155,    -1,   154,
     155,    -1,   156,    -1,   110,    -1,   111,   127,   143,   142,
      -1,   111,   127,   142,    -1,   127,   143,   142,    -1,   127,
     142,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    36,    37,    40,    41,
      42,    46,    47,    48,    49,    50,    51,    52,    53,    57,
      58,    62,    63,    64,    65,    66,    67,    71,    72,    73,
      74,    75,    76,    80,    81,    82,    83,    87,    88,    89,
      90,    94,    95,    96,   100,   101,   102,   106,   107,   108,
     109,   110,   114,   115,   116,   120,   121,   125,   126,   130,
     131,   135,   136,   140,   141,   145,   146,   150,   151,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     169,   170,   171,   175,   179,   180,   181,   185,   186,   187,
     188,   189,   190,   194,   195,   199,   200,   204,   205,   206,
     207,   208,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   229,   230,   231,   232,
     233,   237,   238,   242,   243,   247,   248,   252,   253,   254,
     255,   259,   260,   264,   265,   266,   270,   271,   272,   276,
     277,   282,   283,   284,   288,   289,   293,   294,   298,   299,
     300,   301,   302,   303,   304,   308,   309,   310,   311,   315,
     316,   321,   322,   326,   327,   331,   332,   333,   337,   338,
     342,   343,   347,   348,   349,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   365,   366,   367,   371,   372,   376,
     377,   378,   379,   380,   381,   385,   386,   387,   391,   392,
     393,   394,   398,   399,   403,   404,   408,   409,   413,   414,
     415,   419,   420,   421,   422,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   437,   438,   441,   442,   446,   447,
     451,   452,   456,   457,   461,   462,   466,   467,   471,   472,
     473,   474
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
       0,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   109,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   122,   122,   122,   123,   123,   123,   124,
     124,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   138,   138,   139,   139,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   147,   147,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   156
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     6,     1,     1,     3,     1,     2,
       1,     1,     4,     3,     4,     3,     3,     2,     2,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     6,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     3,     3,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     5,     3,     4,
       2,     1,     1,     1,     2,     2,     3,     2,     1,     2,
       1,     1,     3,     1,     2,     3,     4,     5,     2,     1,
       3,     0,     1,     3,     1,     1,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     3,     2,     2,     2,     3,
       5,     8,    10,    12,     0,     1,     0,     1,     1,     3,
       4,     7,     1,     3,     1,     2,     1,     1,     4,     3,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   148,   113,    97,    98,    99,   100,   101,   103,   104,
     105,   106,   109,   110,   107,   108,   144,   145,   102,     0,
     121,   122,     0,     0,   155,   237,     0,    87,    89,   111,
       0,   112,    91,     0,   147,     0,     0,   234,   236,     0,
     138,   141,     0,   159,   157,   156,     0,    84,     0,    93,
      95,    88,    90,   120,     0,    92,     0,   202,     0,   241,
       0,     0,     0,   146,     1,   235,    10,     2,     5,     8,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    11,     6,    21,    33,     0,    37,    41,    44,    47,
      52,    55,    57,    59,    61,    63,    65,    67,    80,     0,
       0,    82,   141,   142,     0,   139,   149,   160,   158,    86,
       0,    85,     0,   239,     0,     0,   118,   128,     0,   123,
       0,   130,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   198,   206,     0,   204,   189,
     190,     0,     0,   191,   192,   193,   194,    95,   203,   240,
     168,   154,   167,     0,   161,   163,     0,     0,   151,    33,
      83,     0,     0,    25,     0,    22,    23,     2,     0,     0,
     170,     0,     9,     0,    17,    18,     0,     0,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    69,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,   115,     0,     0,   136,   141,    94,     0,
     184,    96,   238,   116,     0,   127,   119,   124,     0,   125,
       0,   131,   133,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   217,   218,     0,   225,     0,   207,
     200,     0,   199,   205,     0,     0,   165,   172,   166,   173,
     152,     0,   153,     0,     0,   150,     0,     3,     0,     7,
       0,   172,   171,     0,    16,    15,    13,     0,    19,     0,
      68,    38,    39,    40,    42,    43,    45,    46,    50,    51,
      48,    49,    53,    54,    56,    58,    60,    62,    64,     0,
      81,   137,   143,   140,     2,   187,     0,   117,   134,     0,
     126,     0,   195,     0,   197,     0,     0,     0,     0,     0,
     215,   219,     0,   201,   180,     0,     0,   176,     0,   174,
       0,     0,   162,   164,   169,    26,     0,     0,    34,    14,
       0,    12,     0,   185,     0,   132,   135,   196,     0,     0,
       0,     0,     0,     0,   181,   175,   177,   182,     0,   178,
       0,     0,    35,     0,    20,    66,   186,   188,   208,   210,
     211,     0,     0,     0,   220,   226,   183,   179,     4,    36,
       0,     0,   213,     0,     0,     0,     0,   227,   228,   209,
     212,   214,     0,     0,     0,   226,     0,     0,     0,   221,
       0,   229,   230,     0,     0,     0,     0,   222,   232,     0,
       0,     0,     0,   231,   223,   233
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    81,    82,    83,   277,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     190,   137,   161,    57,    58,    48,    49,    27,    28,    29,
      30,   118,   119,   120,   230,   231,    31,   104,   105,    32,
      33,    34,    35,    45,   325,   154,   155,   156,   171,   326,
     259,   221,   306,   138,   139,   101,   141,   142,   143,   144,
     145,   146,   248,   386,   387,   388,   409,    36,    37,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -230
static const yytype_int16 yypact[] =
{
    1458,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   -44,
    -230,  -230,    53,    35,   -28,  -230,    77,  1812,  1812,  -230,
      59,  -230,  1812,  1754,    34,    19,  1366,  -230,  -230,   818,
     -34,    36,   -13,  -230,  -230,   -28,    20,  -230,   -20,  -230,
    1591,  -230,  -230,    49,  1624,  -230,   439,  -230,    77,  -230,
    1754,  1504,   945,    34,  -230,  -230,  -230,  -230,  -230,  -230,
    1162,  1191,  1191,   360,   868,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,   133,   237,   438,  1206,  -230,    68,    93,   231,
      56,   277,    79,    96,   129,   210,     0,  -230,  -230,    -7,
     164,  -230,    36,   193,    78,  -230,  -230,  -230,  -230,  -230,
      35,  -230,  1239,  -230,  1754,  1655,  -230,  1295,  1686,  -230,
      89,  1295,   170,  1206,   179,   222,   236,   238,   709,   242,
     266,   234,   235,   724,   252,  -230,  -230,    62,  -230,  -230,
      69,   518,   597,  -230,  -230,  -230,  -230,   256,  -230,  -230,
    -230,  -230,    31,   255,   253,  -230,   152,    30,  -230,  -230,
    -230,   258,   868,  -230,  1283,  -230,  -230,   -38,   326,   169,
     103,   263,  -230,   329,  -230,  -230,   330,   960,  1283,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    1206,  -230,  1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,
    1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,
    1283,  -230,  1206,  -230,   146,  1206,  -230,    36,  -230,   993,
    -230,  -230,  -230,  -230,  1717,  -230,  -230,  -230,  1206,  -230,
      83,  -230,   250,  -230,   709,   251,   709,  1283,  1283,  1283,
     282,   739,   257,  -230,  -230,  -230,   136,  -230,   271,  -230,
    -230,   630,  -230,  -230,  1412,  1037,  -230,    76,  -230,   217,
    -230,  1790,  -230,   336,   278,  -230,   273,  -230,   279,  -230,
    1545,   218,  -230,  1316,  -230,  -230,  -230,   183,  -230,   226,
    -230,  -230,  -230,  -230,    68,    68,    93,    93,   231,   231,
     231,   231,    56,    56,   277,    79,    96,   129,   210,    88,
    -230,  -230,  -230,  -230,   278,  -230,   150,  -230,  -230,     8,
    -230,  1206,  -230,   709,  -230,   185,   189,   195,   280,   739,
    -230,  -230,  1283,  -230,  -230,   276,   284,  -230,   285,   217,
     582,  1070,  -230,  -230,  -230,  -230,   347,   916,  -230,  -230,
    1206,  -230,  1206,  -230,  1085,  -230,  -230,  -230,   709,   709,
     709,  1283,  1114,   -22,  -230,  -230,  -230,  -230,   286,  -230,
     288,   292,  -230,   154,  -230,  -230,  -230,  -230,   306,  -230,
    -230,   200,   709,   202,  -230,    14,  -230,  -230,  -230,  -230,
     709,   287,  -230,   709,   295,  1283,   -43,   299,  -230,  -230,
    -230,  -230,  1283,   230,   289,    14,    14,   207,   366,  -230,
     -15,  -230,  -230,   305,   290,   233,  1283,  -230,   133,   208,
     209,   291,   233,  -230,  -230,   133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -181,  -230,  -230,   -12,  -230,   -65,   112,   113,
      48,   111,   173,   168,   172,   174,   171,  -230,   -49,  -105,
    -230,   -39,  -102,    16,     4,  -230,   274,  -230,     3,  -230,
    -230,   268,  -109,   -30,  -230,    72,  -230,   283,   192,    43,
     -21,   -27,   -18,  -230,   -58,  -230,   125,  -230,   225,  -122,
     -56,  -209,  -230,   -23,  -230,   -32,    21,   272,  -229,  -230,
    -230,  -230,  -230,    33,  -230,    42,  -230,  -230,   390,  -230
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -83
static const yytype_int16 yytable[] =
{
      99,    59,    42,   153,    26,    50,    44,   220,    63,   227,
     305,     1,   319,   160,    16,    17,    25,   209,   113,   384,
     191,   235,     1,    39,   140,   394,   267,   108,   149,   102,
     258,    51,    52,   264,     1,   169,    55,   147,     1,   103,
      26,   140,   395,   100,   170,    24,   374,   234,   272,   212,
     159,   110,    25,   404,    60,   106,    40,   117,   163,   165,
     166,   211,    53,   375,   212,   152,   111,    43,   199,   200,
     405,   114,   278,   159,   160,    23,   148,   117,    46,     1,
       1,    24,   222,   385,   210,   280,    23,   225,   107,   147,
     352,   233,     1,   228,   246,   168,   140,   121,   254,   232,
     255,    61,    23,    62,    24,   240,   109,   300,    24,   140,
     140,   159,   115,   302,   220,   227,    41,   121,   117,   253,
     117,   117,    54,   169,   117,   169,   308,   281,   282,   283,
     148,   256,   170,   212,   257,   367,   201,   202,   172,   279,
     -82,   192,   216,   254,    23,   255,   193,   194,   249,   217,
      24,   205,   271,   328,   309,   -82,    23,   148,   121,   212,
     121,   121,    24,    47,   121,   117,   160,   195,   196,   310,
     270,   299,   255,   342,   228,   229,    24,   247,   206,   160,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   315,   316,
     317,   329,   140,   159,   140,   121,   160,   212,   338,   346,
     301,   312,   207,   314,   343,   329,   159,   217,   379,   140,
     262,   344,   321,   263,   408,   212,   208,   117,   253,   360,
      63,   415,   213,    42,    66,   364,   257,   269,    69,   220,
     212,   197,   198,   159,   173,   174,   175,   288,   289,   290,
     291,   339,   271,   348,   340,   234,   212,   349,   152,   215,
     212,   159,   160,   350,   236,   152,   212,   121,   381,   242,
     383,   212,   358,   212,   152,   402,   411,   413,   212,   412,
     212,   140,   160,   353,   330,   270,   331,   255,   232,   237,
     347,   203,   204,   365,    16,    17,   341,   212,   363,   159,
     398,   212,   176,   238,   177,   239,   178,   284,   285,   241,
     286,   287,   371,   373,   292,   293,   140,   140,   140,   159,
     243,   244,   112,   260,   261,   368,   369,   370,   265,   268,
     159,   273,   274,   275,   152,   311,   313,   318,   322,   334,
     140,   335,   267,   320,   354,   336,   393,   351,   140,   382,
     361,   140,   355,   397,   376,   356,   378,   389,   377,   380,
     391,    66,   392,   167,    68,    69,    70,   410,    71,    72,
     396,   403,   406,   390,   295,   399,   407,   414,   294,   296,
     298,   345,   297,   224,   218,   214,   333,   266,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   303,
     123,   124,   125,   251,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    73,   135,   168,    65,    74,   400,     0,
       0,     0,    75,    76,    77,    78,    79,    80,   401,     0,
      66,     0,   122,    68,    69,    70,   136,    71,    72,     0,
       0,     0,     0,     0,     0,     0,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,   123,
     124,   125,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    73,   135,   189,     0,    74,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,     0,    66,
       0,   122,    68,    69,    70,   136,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,   123,   124,
     125,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,    73,   250,     0,     0,    74,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,     0,    66,     0,
     122,    68,    69,    70,   136,    71,    72,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    66,     0,   122,    68,    69,    70,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,   123,   124,   125,
     357,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      73,   252,     0,     0,    74,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
     123,   124,   125,   136,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    73,   323,     0,     0,    74,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,     0,     0,
      66,     0,   122,    68,    69,    70,   136,    71,    72,     0,
       0,     0,     0,     0,     0,    66,     0,    67,    68,    69,
      70,     0,    71,    72,     0,     0,     0,     0,     0,     0,
      66,     0,    67,    68,    69,    70,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
     124,   125,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    73,     0,     0,     0,    74,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    73,     0,     0,
       0,    74,     0,     0,     0,   136,    75,    76,    77,    78,
      79,    80,    73,     0,     0,     0,    74,     0,     0,     0,
     245,    75,    76,    77,    78,    79,    80,     0,     0,    66,
       0,    67,    68,    69,    70,   136,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,    66,
       0,    67,    68,    69,    70,     0,    71,    72,     0,     0,
       0,    73,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    66,     0,   304,
      68,    69,    70,     0,    71,    72,     0,     0,     0,     0,
       0,    73,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    66,     0,    67,    68,
      69,    70,     0,    71,    72,     0,     0,     0,     0,     0,
       0,    66,     0,    67,    68,    69,    70,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
     362,   168,     0,    74,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    66,     0,   304,    68,    69,    70,
       0,    71,    72,     0,     0,     0,     0,     0,   157,     0,
       0,     0,    74,     0,     0,   158,     0,    75,    76,    77,
      78,    79,    80,   157,     0,     0,     0,    74,   276,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    66,     0,
      67,    68,    69,    70,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,   168,     0,
      74,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    66,     0,    67,    68,    69,    70,     0,    71,    72,
       0,     0,     0,     0,     0,     0,    66,     0,    67,    68,
      69,    70,     0,    71,    72,     0,     0,     0,     0,     0,
     157,     0,     0,     0,    74,     0,     0,   327,     0,    75,
      76,    77,    78,    79,    80,    66,     0,    67,    68,    69,
      70,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,     0,     0,    74,     0,     0,
     359,     0,    75,    76,    77,    78,    79,    80,   219,   366,
       0,     0,    74,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    66,     0,    67,    68,    69,    70,     0,
      71,    72,     0,     0,     0,     0,     0,    73,     0,     0,
       0,    74,   372,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    66,     0,    67,    68,    69,    70,     0,    71,
      72,     0,     0,     0,     0,     0,     0,    66,     0,    67,
      68,    69,    70,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,     0,     0,     0,   162,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      66,     0,    67,    68,    69,    70,     0,    71,    72,     0,
       0,     0,     0,     0,   157,     0,     0,     0,   164,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,   157,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    66,     0,    67,    68,    69,    70,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,     0,     0,    74,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    66,     0,    67,
      68,    69,    70,     2,    71,    72,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,    64,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   337,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,    24,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   254,
     324,   255,     0,     0,     0,    24,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    24,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   151,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,   324,   255,     0,     0,     0,    24,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,    56,     0,     0,   112,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   116,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,   223,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     226,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   332,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22
};

static const yytype_int16 yycheck[] =
{
      39,    33,    23,    61,     0,    26,    24,   112,    35,   118,
     219,     3,   241,    62,    42,    43,     0,    17,    50,     5,
      85,   123,     3,    67,    56,    68,    64,    45,    60,    63,
     152,    27,    28,     3,     3,    74,    32,    58,     3,     3,
      36,    73,    85,    39,    74,    73,    68,    85,   170,    71,
      62,    71,    36,    68,    33,    68,     3,    54,    70,    71,
      72,    68,     3,    85,    71,    61,    86,    24,    12,    13,
      85,    50,   177,    85,   123,    67,    60,    74,     1,     3,
       3,    73,   114,    69,    84,   190,    67,   117,    45,   110,
     319,   121,     3,    85,   133,    65,   128,    54,    67,   120,
      69,    67,    67,    69,    73,   128,    86,   212,    73,   141,
     142,   123,    63,   215,   219,   224,    63,    74,   115,   142,
     117,   118,    63,   162,   121,   164,   228,   192,   193,   194,
     114,   152,   162,    71,   152,   344,    80,    81,     5,   178,
      71,    73,    64,    67,    67,    69,    78,    79,    86,    71,
      73,    72,   170,   255,    71,    86,    67,   141,   115,    71,
     117,   118,    73,    86,   121,   162,   215,    74,    75,    86,
      67,   210,    69,    85,    85,    86,    73,   134,    82,   228,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   237,   238,
     239,   257,   234,   215,   236,   162,   255,    71,   273,   311,
      64,   234,    83,   236,    64,   271,   228,    71,    64,   251,
      68,    71,    86,    71,   405,    71,    16,   224,   251,   331,
     257,   412,    68,   254,     1,   340,   254,    68,     5,   344,
      71,    10,    11,   255,     7,     8,     9,   199,   200,   201,
     202,    68,   270,    68,    71,    85,    71,    68,   254,    66,
      71,   273,   311,    68,    85,   261,    71,   224,    68,     3,
      68,    71,   330,    71,   270,    68,    68,    68,    71,    71,
      71,   313,   331,   322,    67,    67,    69,    69,   309,    67,
     313,    14,    15,   342,    42,    43,    70,    71,   337,   311,
      70,    71,    65,    67,    67,    67,    69,   195,   196,    67,
     197,   198,   351,   352,   203,   204,   348,   349,   350,   331,
      86,    86,    66,    68,    71,   348,   349,   350,    70,     3,
     342,    68,     3,     3,   330,    85,    85,    55,    67,     3,
     372,    68,    64,    86,    68,    66,   385,    67,   380,   372,
       3,   383,    68,   392,    68,    70,    64,   380,    70,    53,
     383,     1,    67,     3,     4,     5,     6,   406,     8,     9,
      71,     5,    67,    86,   206,    86,    86,    86,   205,   207,
     209,   309,   208,   115,   110,   102,   261,   162,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   217,
      50,    51,    52,   141,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    36,    67,   395,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,   396,    -1,
       1,    -1,     3,     4,     5,     6,    86,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    66,    -1,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    86,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    86,     8,     9,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      68,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    86,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    86,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    86,    72,    73,    74,    75,
      76,    77,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      86,    72,    73,    74,    75,    76,    77,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    86,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    72,    73,    74,
      75,    76,    77,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,
      73,    74,    75,    76,    77,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    72,    73,    74,    75,    76,    77,    63,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,     1,    -1,     3,
       4,     5,     6,    28,     8,     9,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    73,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    63,    -1,    -1,    66,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    64,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    64,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      64,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48
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
     142,   143,   144,   145,   146,   147,   148,   127,   110,   142,
       3,    68,   111,   131,   132,   133,   134,    63,    70,    92,
     105,   109,    67,    92,    67,    92,    92,     3,    65,   108,
     120,   135,     5,     7,     8,     9,    65,    67,    69,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    66,
     107,    94,    73,    78,    79,    74,    75,    10,    11,    12,
      13,    80,    81,    14,    15,    72,    82,    83,    16,    17,
      84,    68,    71,    68,   124,    66,    64,    71,   113,    63,
     106,   138,   142,    64,   118,   120,    64,   119,    85,    86,
     121,   122,   127,   120,    85,   109,    85,    67,    67,    67,
     140,    67,     3,    86,    86,    86,   108,   126,   149,    86,
      64,   144,    64,   140,    67,    69,   127,   129,   136,   137,
      68,    71,    68,    71,     3,    70,   135,    64,     3,    68,
      67,   129,   136,    68,     3,     3,    68,    91,   106,   108,
     106,    94,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    97,    98,    98,    99,   100,   101,   102,   103,   108,
     106,    64,   109,   125,     3,   138,   139,    64,   109,    71,
      86,    85,   140,    85,   140,   108,   108,   108,    55,   145,
      86,    86,    67,    64,    68,   131,   136,    70,   109,   137,
      67,    69,    49,   133,     3,    68,    66,    63,    94,    68,
      71,    70,    85,    64,    71,   122,   109,   140,    68,    68,
      68,    67,   145,   108,    68,    68,    70,    68,   131,    70,
     109,     3,    64,   108,   106,   105,    64,   138,   140,   140,
     140,   108,    68,   108,    68,    85,    68,    70,    64,    64,
      53,    68,   140,    68,     5,    69,   150,   151,   152,   140,
      86,   140,    67,   108,    68,    85,    71,   108,    70,    86,
     150,   152,    68,     5,    68,    85,    67,    86,    89,   153,
     108,    68,    71,    68,    86,    89
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
        case 9:

/* Line 1455 of yacc.c  */
#line 41 "ansi-c.y"
    {  ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 180 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); parse_declaration((yyval.a)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 181 "ansi-c.y"
    { ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 185 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 186 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 187 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 188 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 189 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 190 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 194 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 195 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 199 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 200 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 204 "ansi-c.y"
    { (yyval.a) = new_word(TYPEDEF); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 205 "ansi-c.y"
    { (yyval.a) = new_word(EXTERN); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 206 "ansi-c.y"
    { (yyval.a) = new_word(STATIC); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 207 "ansi-c.y"
    { (yyval.a) = new_word(AUTO); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 208 "ansi-c.y"
    { (yyval.a) = new_word(REGISTER); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 212 "ansi-c.y"
    { (yyval.a) = new_word(VOID); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 213 "ansi-c.y"
    { (yyval.a) = new_word(CHAR); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 214 "ansi-c.y"
    { (yyval.a) = new_word(SHORT); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 215 "ansi-c.y"
    { (yyval.a) = new_word(INT); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 216 "ansi-c.y"
    { (yyval.a) = new_word(LONG); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 217 "ansi-c.y"
    { (yyval.a) = new_word(FLOAT); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 218 "ansi-c.y"
    { (yyval.a) = new_word(DOUBLE); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 219 "ansi-c.y"
    { (yyval.a) = new_word(SIGNED); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 220 "ansi-c.y"
    { (yyval.a) = new_word(UNSIGNED); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 221 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 222 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 223 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 224 "ansi-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 225 "ansi-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 229 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), (yyvsp[(2) - (4)].id), NULL); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 230 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), (yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 231 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (3)].a), NULL, NULL); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 232 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 233 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].id), NULL); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 237 "ansi-c.y"
    { (yyval.a) = new_word(STRUCT); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 238 "ansi-c.y"
    { (yyval.a) = new_word(UNION); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 242 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 243 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 248 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 252 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 253 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 254 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 255 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 259 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 260 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 264 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 265 "ansi-c.y"
    { ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 266 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 270 "ansi-c.y"
    { (yyval.a) = new_enum(NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 271 "ansi-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 272 "ansi-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (2)].id), NULL); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 276 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 277 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_ENUMERATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 282 "ansi-c.y"
    { /*for last comma*/ ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 283 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 284 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (3)].id)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 288 "ansi-c.y"
    { (yyval.a) = new_word(CONST); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 289 "ansi-c.y"
    { (yyval.a) = new_word(VOLATILE); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 293 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 294 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 298 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 299 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 300 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 301 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 302 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 303 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 304 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 308 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER,NULL, NULL); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 309 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 310 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (2)].a); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 311 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 315 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 316 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_QUALIFIER, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 365 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_ASSIGNMENT_EXPRESSION, NULL, NULL); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 366 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 367 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (4)].a); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 371 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 372 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INITIALIZER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 437 "ansi-c.y"
    {/*NULL*/;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 441 "ansi-c.y"
    {;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 447 "ansi-c.y"
    {  ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 451 "ansi-c.y"
    { ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 452 "ansi-c.y"
    { ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 456 "ansi-c.y"
    { ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 457 "ansi-c.y"
    { ;}
    break;



/* Line 1455 of yacc.c  */
#line 2718 "ansi-c.tab.c"
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
#line 478 "ansi-c.y"



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

