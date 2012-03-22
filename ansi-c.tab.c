
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
     RETURN = 316
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
#line 183 "ansi-c.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 195 "ansi-c.tab.c"

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
#define YYLAST   1638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNRULES -- Number of states.  */
#define YYNSTATES  371

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    78,    71,     2,
      66,    67,    72,    73,    70,    74,    64,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    85,
      79,    65,    80,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    82,    63,    75,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    16,    18,    20,    24,    26,
      31,    35,    40,    44,    48,    51,    54,    56,    60,    62,
      65,    68,    71,    74,    79,    81,    83,    85,    87,    89,
      91,    93,    98,   100,   104,   108,   112,   114,   118,   122,
     124,   128,   132,   134,   138,   142,   146,   150,   152,   156,
     160,   162,   166,   168,   172,   174,   178,   180,   184,   186,
     190,   192,   198,   200,   204,   206,   208,   210,   212,   214,
     216,   218,   220,   222,   224,   226,   228,   232,   234,   236,
     239,   243,   247,   249,   252,   254,   257,   259,   262,   264,
     268,   270,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     313,   318,   324,   329,   332,   334,   336,   338,   341,   344,
     348,   351,   353,   356,   358,   360,   364,   366,   369,   373,
     378,   384,   387,   389,   393,   394,   396,   400,   402,   404,
     407,   409,   411,   415,   420,   424,   429,   434,   438,   440,
     443,   446,   450,   452,   455,   457,   461,   463,   467,   470,
     473,   475,   477,   481,   483,   486,   488,   490,   493,   497,
     500,   504,   508,   513,   516,   520,   524,   529,   531,   535,
     540,   542,   546,   548,   550,   552,   554,   556,   558,   562,
     567,   571,   574,   578,   582,   587,   589,   592,   594,   597,
     599,   602,   608,   616,   622,   628,   636,   643,   651,   655,
     658,   661,   664,   668,   670,   673,   675,   677,   682,   686,
     690
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     147,     0,    -1,     3,    -1,    62,     3,    63,    -1,    62,
      64,     3,    65,     3,    63,    -1,     4,    -1,     5,    -1,
      66,   106,    67,    -1,    87,    -1,    88,    68,   106,    69,
      -1,    88,    66,    67,    -1,    88,    66,    89,    67,    -1,
      88,    64,     3,    -1,    88,     7,     3,    -1,    88,     8,
      -1,    88,     9,    -1,   104,    -1,    89,    70,   104,    -1,
      88,    -1,     8,    90,    -1,     9,    90,    -1,    91,    92,
      -1,     6,    90,    -1,     6,    66,   133,    67,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    90,    -1,    66,   133,    67,    92,    -1,    92,    -1,
      93,    72,    92,    -1,    93,    77,    92,    -1,    93,    78,
      92,    -1,    93,    -1,    94,    73,    93,    -1,    94,    74,
      93,    -1,    94,    -1,    95,    10,    94,    -1,    95,    11,
      94,    -1,    95,    -1,    96,    79,    95,    -1,    96,    80,
      95,    -1,    96,    12,    95,    -1,    96,    13,    95,    -1,
      96,    -1,    97,    14,    96,    -1,    97,    15,    96,    -1,
      97,    -1,    98,    71,    97,    -1,    98,    -1,    99,    81,
      98,    -1,    99,    -1,   100,    82,    99,    -1,   100,    -1,
     101,    16,   100,    -1,   101,    -1,   102,    17,   101,    -1,
     102,    -1,   102,    83,   106,    84,   103,    -1,   103,    -1,
      90,   105,   104,    -1,    65,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,   104,    -1,   106,    70,
     104,    -1,   140,    -1,   103,    -1,   109,    85,    -1,   109,
     110,    85,    -1,   109,     1,    85,    -1,   112,    -1,   112,
     109,    -1,   113,    -1,   113,   109,    -1,   124,    -1,   124,
     109,    -1,   111,    -1,   110,    70,   111,    -1,   125,    -1,
     125,    65,   136,    -1,    29,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    44,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    40,    -1,    41,    -1,    38,    -1,
      39,    -1,   114,    -1,   121,    -1,    28,    -1,    45,    66,
     106,    67,    -1,    45,    66,   109,    67,    -1,   115,     3,
      62,   116,    63,    -1,   115,    62,   116,    63,    -1,   115,
       3,    -1,    46,    -1,    47,    -1,   117,    -1,   116,   117,
      -1,   118,    85,    -1,   118,   119,    85,    -1,   113,   118,
      -1,   113,    -1,   124,   118,    -1,   124,    -1,   120,    -1,
     119,    70,   120,    -1,   125,    -1,    84,   107,    -1,   125,
      84,   107,    -1,    48,    62,   122,    63,    -1,    48,     3,
      62,   122,    63,    -1,    48,     3,    -1,   123,    -1,   122,
      70,   123,    -1,    -1,     3,    -1,     3,    65,   107,    -1,
      42,    -1,    43,    -1,   127,   126,    -1,   126,    -1,     3,
      -1,    66,   125,    67,    -1,   126,    68,   107,    69,    -1,
     126,    68,    69,    -1,   126,    66,   129,    67,    -1,   126,
      66,   132,    67,    -1,   126,    66,    67,    -1,    72,    -1,
      72,   128,    -1,    72,   127,    -1,    72,   128,   127,    -1,
     124,    -1,   128,   124,    -1,   130,    -1,   130,    70,    49,
      -1,   131,    -1,   130,    70,   131,    -1,   109,   125,    -1,
     109,   134,    -1,   109,    -1,     3,    -1,   132,    70,     3,
      -1,   118,    -1,   118,   134,    -1,   127,    -1,   135,    -1,
     127,   135,    -1,    66,   134,    67,    -1,    68,    69,    -1,
      68,   107,    69,    -1,   135,    68,    69,    -1,   135,    68,
     107,    69,    -1,    66,    67,    -1,    66,   129,    67,    -1,
     135,    66,    67,    -1,   135,    66,   129,    67,    -1,   104,
      -1,    62,   137,    63,    -1,    62,   137,    70,    63,    -1,
     136,    -1,   137,    70,   136,    -1,   139,    -1,   140,    -1,
     143,    -1,   144,    -1,   145,    -1,   146,    -1,     3,    84,
     138,    -1,    50,   107,    84,   138,    -1,    51,    84,   138,
      -1,    62,    63,    -1,    62,   142,    63,    -1,    62,   141,
      63,    -1,    62,   141,   142,    63,    -1,   108,    -1,   141,
     108,    -1,   138,    -1,   142,   138,    -1,    85,    -1,   106,
      85,    -1,    52,    66,   106,    67,   138,    -1,    52,    66,
     106,    67,   138,    53,   138,    -1,    54,    66,   106,    67,
     138,    -1,    55,    66,   106,    67,   138,    -1,    56,   138,
      55,    66,   106,    67,    85,    -1,    57,    66,   143,   143,
      67,   138,    -1,    57,    66,   143,   143,   106,    67,   138,
      -1,    58,     3,    85,    -1,    59,    85,    -1,    60,    85,
      -1,    61,    85,    -1,    61,   106,    85,    -1,   148,    -1,
     147,   148,    -1,   149,    -1,   108,    -1,   109,   125,   141,
     140,    -1,   109,   125,   140,    -1,   125,   141,   140,    -1,
     125,   140,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    36,    37,    41,    42,
      43,    44,    45,    46,    47,    48,    52,    53,    57,    58,
      59,    60,    61,    62,    66,    67,    68,    69,    70,    71,
      75,    76,    80,    81,    82,    83,    87,    88,    89,    93,
      94,    95,    99,   100,   101,   102,   103,   107,   108,   109,
     113,   114,   118,   119,   123,   124,   128,   129,   133,   134,
     138,   139,   143,   144,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   162,   163,   164,   168,   172,
     173,   174,   178,   179,   180,   181,   182,   183,   187,   188,
     192,   193,   197,   198,   199,   200,   201,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   222,   223,   224,   228,   229,   233,   234,   238,   239,
     243,   244,   245,   246,   250,   251,   255,   256,   257,   261,
     262,   263,   267,   268,   273,   274,   275,   279,   280,   284,
     285,   289,   290,   291,   292,   293,   294,   295,   299,   300,
     301,   302,   306,   307,   312,   313,   317,   318,   322,   323,
     324,   328,   329,   333,   334,   338,   339,   340,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   356,   357,   358,
     362,   363,   367,   368,   369,   370,   371,   372,   376,   377,
     378,   382,   383,   384,   385,   389,   390,   394,   395,   399,
     400,   404,   405,   406,   410,   411,   412,   413,   417,   418,
     419,   420,   421,   425,   426,   430,   431,   435,   436,   437,
     438
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
  "CONTINUE", "BREAK", "RETURN", "'{'", "'}'", "'.'", "'='", "'('", "')'",
  "'['", "']'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
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
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
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
     315,   316,   123,   125,    46,    61,    40,    41,    91,    93,
      44,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    58,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    96,    96,    97,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   107,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   118,   118,   119,   119,   120,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   138,   138,   139,   139,
     139,   140,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   144,   145,   145,   145,   145,   146,   146,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     6,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       3,     3,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     4,     2,     1,     1,     1,     2,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     0,     1,     3,     1,     1,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     4,     3,     3,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   141,   108,    92,    93,    94,    95,    96,    98,    99,
     100,   101,   104,   105,   102,   103,   137,   138,    97,     0,
     114,   115,     0,     0,   148,   216,     0,    82,    84,   106,
       0,   107,    86,     0,   140,     0,     0,   213,   215,     0,
     131,   134,     0,   152,   150,   149,     0,    79,     0,    88,
      90,    83,    85,   113,     0,    87,     0,   195,     0,   220,
       0,     0,     0,   139,     1,   214,     2,     5,     6,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
       8,    18,    30,     0,    32,    36,    39,    42,    47,    50,
      52,    54,    56,    58,    60,    62,    75,     0,     0,    77,
     134,   135,     0,   132,   142,   153,   151,    81,     0,    80,
       0,   218,     0,     0,   121,     0,   116,     0,   123,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,   199,     0,   197,   182,   183,     0,     0,   184,
     185,   186,   187,    90,   196,   219,   161,   147,   160,     0,
     154,   156,     0,     0,   144,    30,    78,     0,     0,    22,
       0,    19,    20,     2,     0,     0,   163,     0,     0,    14,
      15,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    64,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,     0,   110,     0,
       0,   129,   134,    89,     0,   177,    91,   217,     0,   120,
     112,   117,     0,   118,     0,   124,   126,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   209,   210,   211,
       0,   200,   193,     0,   192,   198,     0,     0,   158,   165,
     159,   166,   145,     0,   146,     0,     0,   143,     0,     3,
       0,     7,     0,   165,   164,     0,    13,    12,    10,     0,
      16,     0,    63,    33,    34,    35,    37,    38,    40,    41,
      45,    46,    43,    44,    48,    49,    51,    53,    55,    57,
      59,     0,    76,   130,   136,   133,     2,   180,     0,   111,
     127,     0,   119,     0,   188,     0,   190,     0,     0,     0,
       0,     0,   208,   212,   194,   173,     0,     0,   169,     0,
     167,     0,     0,   155,   157,   162,    23,     0,    31,    11,
       0,     9,     0,   178,     0,   125,   128,   189,     0,     0,
       0,     0,     0,   174,   168,   170,   175,     0,   171,     0,
       0,    17,    61,   179,   181,   201,   203,   204,     0,     0,
       0,   176,   172,     4,     0,     0,   206,     0,   202,   205,
     207
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    80,    81,   269,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,   185,
     133,   157,    57,    58,    48,    49,    27,    28,    29,    30,
     115,   116,   117,   224,   225,    31,   102,   103,    32,    33,
      34,    35,    45,   316,   150,   151,   152,   167,   317,   251,
     216,   298,   134,   135,   136,   137,   138,   139,   140,   141,
     142,    36,    37,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -216
static const yytype_int16 yypact[] =
{
    1304,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   -51,
    -216,  -216,     9,    13,   -17,  -216,    21,  1590,  1590,  -216,
      42,  -216,  1590,  1533,    75,    18,  1212,  -216,  -216,   757,
     -18,    62,     3,  -216,  -216,   -17,    64,  -216,   -29,  -216,
    1435,  -216,  -216,    43,   378,  -216,   399,  -216,    21,  -216,
    1533,  1350,   852,    75,  -216,  -216,  -216,  -216,  -216,  1043,
    1089,  1089,   325,   806,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,   241,   270,  1117,  -216,   105,   -21,    84,    46,   182,
      60,    79,    94,   189,    26,  -216,  -216,    98,   167,  -216,
      62,   163,    49,  -216,  -216,  -216,  -216,  -216,    13,  -216,
    1132,  -216,  1533,   378,   378,  1467,  -216,    73,   378,   152,
    1117,   154,   177,   181,   193,   653,   195,   251,   185,   197,
     668,  -216,  -216,   -13,  -216,  -216,    63,   473,   547,  -216,
    -216,  -216,  -216,   222,  -216,  -216,  -216,  -216,    66,   233,
     236,  -216,   102,    37,  -216,  -216,  -216,   239,   806,  -216,
    1163,  -216,  -216,   -33,   309,   136,   107,   246,   311,  -216,
    -216,   312,   880,  1163,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  1117,  -216,  1117,  1117,  1117,
    1117,  1117,  1117,  1117,  1117,  1117,  1117,  1117,  1117,  1117,
    1117,  1117,  1117,  1117,  1117,  1163,  -216,  1117,  -216,    91,
    1117,  -216,    62,  -216,   895,  -216,  -216,  -216,  1497,  -216,
    -216,  -216,  1117,  -216,    77,  -216,   232,  -216,   653,   234,
     653,  1163,  1163,  1163,   262,   683,   235,  -216,  -216,  -216,
      81,  -216,  -216,   579,  -216,  -216,  1258,   926,  -216,    34,
    -216,   124,  -216,  1568,  -216,   316,   259,  -216,   257,  -216,
     260,  -216,  1390,   161,  -216,  1117,  -216,  -216,  -216,   188,
    -216,   208,  -216,  -216,  -216,  -216,   105,   105,   -21,   -21,
      84,    84,    84,    84,    46,    46,   182,    60,    79,    94,
     189,    -7,  -216,  -216,  -216,  -216,   259,  -216,   100,  -216,
    -216,    14,  -216,  1117,  -216,   653,  -216,   196,   201,   205,
     261,   683,  -216,  -216,  -216,  -216,   265,   269,  -216,   268,
     124,   533,   969,  -216,  -216,  -216,  -216,   323,  -216,  -216,
    1117,  -216,  1117,  -216,  1000,  -216,  -216,  -216,   653,   653,
     653,  1163,  1015,  -216,  -216,  -216,  -216,   271,  -216,   272,
     276,  -216,  -216,  -216,  -216,   287,  -216,  -216,   209,   653,
     216,  -216,  -216,  -216,   653,   258,  -216,   653,  -216,  -216,
    -216
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,    20,  -216,   -74,   108,   -76,    -9,
     103,   145,   146,   144,   147,   170,  -216,   -58,   -61,  -216,
     -38,   -66,    47,     0,  -216,   240,  -216,   -40,  -216,  -216,
     238,  -108,   -50,  -216,    48,  -216,   278,   178,   126,   -20,
     -24,   -11,  -216,   -56,  -216,   139,  -216,   237,  -100,  -203,
    -204,  -216,  -107,  -216,   -31,    17,   256,  -215,  -216,  -216,
    -216,  -216,   358,  -216
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -78
static const yytype_int16 yytable[] =
{
      26,    97,    59,    42,   156,   149,    50,   221,    99,   186,
     297,    63,    40,    44,   114,    39,     1,     1,   234,   111,
     311,     1,    46,   166,     1,    16,    17,    51,    52,   145,
     259,   245,    55,   114,   106,   165,    26,     1,   143,    98,
     256,   108,    99,   204,   100,    53,   320,    25,   250,   215,
      60,   228,   190,   191,   229,    24,   109,   207,   194,   195,
     320,   148,   156,   207,   219,   101,   264,   112,   227,     1,
     104,    41,   241,   114,   114,   114,     1,   332,   114,    23,
      23,   217,   155,    25,    23,    24,    24,    23,   143,   159,
     161,   162,   240,    24,   192,   193,   342,   226,   222,    99,
     246,   164,   247,   155,    54,   113,    47,   144,   166,   205,
     221,   270,   211,   273,   274,   275,   278,   279,   114,   212,
     165,   304,   165,   306,   272,   196,   197,    99,   248,    99,
     354,   200,   246,   -77,   247,   271,   245,   249,    24,    23,
     155,    61,    99,    62,   294,    24,   292,   301,   -77,   107,
      43,   207,   156,   215,   293,   263,   300,   222,   223,   144,
     201,   212,   302,   333,   156,   206,   313,   291,   207,   254,
     334,   105,   255,   262,    99,   247,   202,   187,   114,    24,
     118,   319,   188,   189,   144,   280,   281,   282,   283,   156,
     321,   328,   322,   307,   308,   309,   198,   199,   337,   118,
      99,    99,    99,   261,    99,   203,   207,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,    63,    42,   262,   210,   247,
     155,   355,   356,   357,   208,   249,   228,   336,   230,   118,
     118,   118,   155,   231,   118,   156,   148,   232,   168,   169,
     170,   263,   366,   148,   236,   329,   349,   368,   330,   233,
     370,   235,   148,   338,   156,   347,   207,   155,   339,   351,
     237,   207,   340,   215,   352,   207,   365,   331,   207,   207,
      99,   226,   238,   367,   118,   155,   207,   110,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   276,   277,
     252,   284,   285,   358,   360,   171,   253,   172,   257,   173,
      99,    99,   260,   265,   266,   267,   303,   310,   305,   325,
     312,   148,   259,   155,   326,   327,   350,   341,   163,    67,
      68,    69,   343,    70,    71,   184,   344,   345,   361,   363,
     364,   362,   155,   369,   118,   286,   288,   287,   213,   335,
     289,   218,   155,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   290,   120,   121,   122,   209,   123,
     124,   125,   126,   127,   128,   129,   130,    72,   131,   164,
     295,    73,   324,   243,    65,   258,    74,    75,    76,    77,
      78,    79,   119,    67,    68,    69,     2,    70,    71,     0,
     132,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,   120,
     121,   122,     0,   123,   124,   125,   126,   127,   128,   129,
     130,    72,   131,     0,     0,    73,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,   119,    67,    68,    69,
       0,    70,    71,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,   120,   121,   122,     0,   123,   124,   125,
     126,   127,   128,   129,   130,    72,   242,     0,     0,    73,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
     119,    67,    68,    69,     0,    70,    71,     0,   132,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   119,    67,    68,    69,     0,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,   122,
     346,   123,   124,   125,   126,   127,   128,   129,   130,    72,
     244,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   120,
     121,   122,   132,   123,   124,   125,   126,   127,   128,   129,
     130,    72,   314,     0,     0,    73,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,   119,    67,    68,    69,
       0,    70,    71,     0,   132,     0,     0,     0,     0,     0,
       0,    66,    67,    68,    69,     0,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    68,    69,
       0,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   121,   122,     0,   123,   124,   125,
     126,   127,   128,   129,   130,    72,     0,     0,     0,    73,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      72,     0,     0,     0,    73,     0,     0,     0,   132,    74,
      75,    76,    77,    78,    79,    72,     0,     0,     0,    73,
       0,     0,     0,   239,    74,    75,    76,    77,    78,    79,
      66,    67,    68,    69,     0,    70,    71,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,    66,
      67,    68,    69,     0,    70,    71,     0,     0,     0,    72,
       0,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,     2,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    66,    67,    68,    69,     0,
      70,    71,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,    73,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    66,    67,    68,    69,     0,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,   296,    67,
      68,    69,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,     0,     0,    73,     0,
       0,   154,     0,    74,    75,    76,    77,    78,    79,    66,
      67,    68,    69,     0,    70,    71,     0,     0,     0,     0,
       0,     0,   153,     0,     0,     0,    73,   268,     0,     0,
       0,    74,    75,    76,    77,    78,    79,   214,     0,   164,
       0,    73,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    66,    67,    68,    69,     0,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,     0,    73,     0,     0,   318,     0,    74,    75,    76,
      77,    78,    79,    66,    67,    68,    69,     0,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      68,    69,     0,    70,    71,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,    73,     0,     0,   348,     0,
      74,    75,    76,    77,    78,    79,    66,    67,    68,    69,
       0,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,   353,     0,     0,    73,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    72,     0,     0,
       0,    73,   359,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    66,    67,    68,    69,     0,    70,    71,     0,
       0,     0,     0,     0,     0,   153,     0,     0,     0,   158,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      66,    67,    68,    69,     0,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,    69,     0,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,   160,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    66,    67,    68,    69,
       0,    70,    71,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,   214,     0,     0,     0,    73,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,    64,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,    73,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,    24,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,   315,   247,     0,     0,     0,
      24,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,    24,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   262,   315,   247,     0,
       0,     0,    24,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,    56,     0,     0,
     110,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     220,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     299,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   323,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,    39,    33,    23,    62,    61,    26,   115,    39,    83,
     214,    35,     3,    24,    54,    66,     3,     3,   125,    50,
     235,     3,     1,    73,     3,    42,    43,    27,    28,    60,
      63,   138,    32,    73,    45,    73,    36,     3,    58,    39,
       3,    70,    73,    17,    62,     3,   249,     0,   148,   110,
      33,    84,    73,    74,   120,    72,    85,    70,    12,    13,
     263,    61,   120,    70,   114,     3,   166,    50,   118,     3,
      67,    62,    85,   113,   114,   115,     3,    84,   118,    66,
      66,   112,    62,    36,    66,    72,    72,    66,   108,    69,
      70,    71,   130,    72,    10,    11,   311,   117,    84,   130,
      66,    64,    68,    83,    62,    62,    85,    60,   158,    83,
     218,   172,    63,   187,   188,   189,   192,   193,   158,    70,
     158,   228,   160,   230,   185,    79,    80,   158,   148,   160,
     334,    71,    66,    70,    68,   173,   243,   148,    72,    66,
     120,    66,   173,    68,   210,    72,   207,    70,    85,    85,
      24,    70,   210,   214,    63,   166,   222,    84,    85,   112,
      81,    70,    85,    63,   222,    67,    85,   205,    70,    67,
      70,    45,    70,    66,   205,    68,    82,    72,   218,    72,
      54,   247,    77,    78,   137,   194,   195,   196,   197,   247,
      66,   265,    68,   231,   232,   233,    14,    15,   305,    73,
     231,   232,   233,    67,   235,    16,    70,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   249,   246,    66,    65,    68,
     210,   338,   339,   340,    67,   246,    84,   303,    84,   113,
     114,   115,   222,    66,   118,   303,   246,    66,     7,     8,
       9,   262,   359,   253,     3,    67,   322,   364,    70,    66,
     367,    66,   262,    67,   322,   321,    70,   247,    67,   330,
      85,    70,    67,   334,   332,    70,    67,    69,    70,    70,
     311,   301,    85,    67,   158,   265,    70,    65,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   190,   191,
      67,   198,   199,   341,   342,    64,    70,    66,    69,    68,
     341,   342,     3,    67,     3,     3,    84,    55,    84,     3,
      85,   321,    63,   303,    67,    65,     3,    66,     3,     4,
       5,     6,    67,     8,     9,    65,    67,    69,    67,    63,
      53,    69,   322,    85,   218,   200,   202,   201,   108,   301,
     203,   113,   332,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   204,    50,    51,    52,   100,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     212,    66,   253,   137,    36,   158,    71,    72,    73,    74,
      75,    76,     3,     4,     5,     6,    28,     8,     9,    -1,
      85,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,     3,     4,     5,     6,
      -1,     8,     9,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
       3,     4,     5,     6,    -1,     8,     9,    -1,    85,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      67,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    85,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,     3,     4,     5,     6,
      -1,     8,     9,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    85,    71,
      72,    73,    74,    75,    76,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    85,    71,    72,    73,    74,    75,    76,
       3,     4,     5,     6,    -1,     8,     9,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    71,    72,    73,    74,    75,    76,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    62,    -1,    64,
      -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      71,    72,    73,    74,    75,    76,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    62,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,     0,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    -1,
      -1,    -1,    72,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    62,    -1,    -1,
      65,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      63,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    66,    72,   108,   109,   112,   113,   114,
     115,   121,   124,   125,   126,   127,   147,   148,   149,    66,
       3,    62,   125,   124,   127,   128,     1,    85,   110,   111,
     125,   109,   109,     3,    62,   109,    62,   108,   109,   140,
     141,    66,    68,   126,     0,   148,     3,     4,     5,     6,
       8,     9,    62,    66,    71,    72,    73,    74,    75,    76,
      87,    88,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   106,   109,   140,
      62,     3,   122,   123,    67,   124,   127,    85,    70,    85,
      65,   140,   141,    62,   113,   116,   117,   118,   124,     3,
      50,    51,    52,    54,    55,    56,    57,    58,    59,    60,
      61,    63,    85,   106,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   125,   108,   140,     3,    67,   109,   129,
     130,   131,   132,    62,    69,    90,   103,   107,    66,    90,
      66,    90,    90,     3,    64,   106,   118,   133,     7,     8,
       9,    64,    66,    68,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    65,   105,    92,    72,    77,    78,
      73,    74,    10,    11,    12,    13,    79,    80,    14,    15,
      71,    81,    82,    16,    17,    83,    67,    70,    67,   122,
      65,    63,    70,   111,    62,   104,   136,   140,   116,   118,
      63,   117,    84,    85,   119,   120,   125,   118,    84,   107,
      84,    66,    66,    66,   138,    66,     3,    85,    85,    85,
     106,    85,    63,   142,    63,   138,    66,    68,   125,   127,
     134,   135,    67,    70,    67,    70,     3,    69,   133,    63,
       3,    67,    66,   127,   134,    67,     3,     3,    67,    89,
     104,   106,   104,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    97,    98,    99,   100,
     101,   106,   104,    63,   107,   123,     3,   136,   137,    63,
     107,    70,    85,    84,   138,    84,   138,   106,   106,   106,
      55,   143,    85,    85,    63,    67,   129,   134,    69,   107,
     135,    66,    68,    49,   131,     3,    67,    65,    92,    67,
      70,    69,    84,    63,    70,   120,   107,   138,    67,    67,
      67,    66,   143,    67,    67,    69,    67,   129,    69,   107,
       3,   104,   103,    63,   136,   138,   138,   138,   106,    67,
     106,    67,    69,    63,    53,    67,   138,    67,   138,    85,
     138
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
        case 80:

/* Line 1455 of yacc.c  */
#line 173 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); parse_declaration((yyval.a)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 174 "ansi-c.y"
    { ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 178 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 179 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 180 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 181 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 182 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 183 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATION_SPECIFIERS, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 187 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 188 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 192 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 193 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INIT_DECLARATOR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 197 "ansi-c.y"
    { (yyval.a) = new_word(TYPEDEF); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 198 "ansi-c.y"
    { (yyval.a) = new_word(EXTERN); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 199 "ansi-c.y"
    { (yyval.a) = new_word(STATIC); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 200 "ansi-c.y"
    { (yyval.a) = new_word(AUTO); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 201 "ansi-c.y"
    { (yyval.a) = new_word(REGISTER); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 205 "ansi-c.y"
    { (yyval.a) = new_word(VOID); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 206 "ansi-c.y"
    { (yyval.a) = new_word(CHAR); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 207 "ansi-c.y"
    { (yyval.a) = new_word(SHORT); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 208 "ansi-c.y"
    { (yyval.a) = new_word(INT); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 209 "ansi-c.y"
    { (yyval.a) = new_word(LONG); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 210 "ansi-c.y"
    { (yyval.a) = new_word(FLOAT); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 211 "ansi-c.y"
    { (yyval.a) = new_word(DOUBLE); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 212 "ansi-c.y"
    { (yyval.a) = new_word(SIGNED); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 213 "ansi-c.y"
    { (yyval.a) = new_word(UNSIGNED); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 214 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 215 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_SPECIFIER, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 216 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 217 "ansi-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 218 "ansi-c.y"
    { (yyval.a) = new_word(TYPEOF); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 222 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (5)].a), (yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 223 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (4)].a), NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 224 "ansi-c.y"
    { (yyval.a) = new_struct((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].id), NULL); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 228 "ansi-c.y"
    { (yyval.a) = new_word(STRUCT); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 229 "ansi-c.y"
    { (yyval.a) = new_word(UNION); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 233 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 234 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 239 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATION, (yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 243 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 244 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 245 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 246 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 250 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 251 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 255 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 256 "ansi-c.y"
    { ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 257 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_STRUCT_DECLARATOR, (yyvsp[(1) - (3)].a), NULL); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 261 "ansi-c.y"
    { (yyval.a) = new_enum(NULL, (yyvsp[(3) - (4)].a)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 262 "ansi-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 263 "ansi-c.y"
    { (yyval.a) = new_enum((yyvsp[(2) - (2)].id), NULL); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 267 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 268 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_ENUMERATOR_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 273 "ansi-c.y"
    { /*for last comma*/ ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 274 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 275 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (3)].id)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 279 "ansi-c.y"
    { (yyval.a) = new_word(CONST); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 280 "ansi-c.y"
    { (yyval.a) = new_word(VOLATILE); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 284 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 285 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_DECLARATOR, (yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 289 "ansi-c.y"
    { (yyval.a) = new_id((yyvsp[(1) - (1)].id)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 290 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 291 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 292 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 293 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 294 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (4)].a); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 295 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (3)].a); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 299 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER,NULL, NULL); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 300 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (2)].a), NULL); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 301 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (2)].a); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 302 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_POINTER, (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 306 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 307 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_TYPE_QUALIFIER, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 356 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_ASSIGNMENT_EXPRESSION, NULL, NULL); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 357 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 358 "ansi-c.y"
    { (yyval.a) = (yyvsp[(2) - (4)].a); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 362 "ansi-c.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 363 "ansi-c.y"
    { (yyval.a) = new_ast(NODE_INITIALIZER_LIST, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2570 "ansi-c.tab.c"
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
#line 441 "ansi-c.y"



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

