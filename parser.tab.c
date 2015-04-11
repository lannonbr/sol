/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C

      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

#include "sol.h"
#include "ast.h"

#include <string.h>

#define YYSTYPE void *


/* Line 371 of yacc.c  */
#line 78 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
/* Put the tokens into the symbol table, so that GDB and other debuggers
   know about them.  */
enum yytokentype {
    IF = 258,
    THEN = 259,
    ELSE = 260,
    WHILE = 261,
    FOR = 262,
    IN = 263,
    DO = 264,
    FUNC = 265,
    RETURN = 266,
    BREAK = 267,
    CONTINUE = 268,
    END = 269,
    NONE = 270,
    IDENT = 271,
    INT = 272,
    FLOAT = 273,
    STRING = 274,
    PLUS = 275,
    MINUS = 276,
    STAR = 277,
    SLASH = 278,
    PERCENT = 279,
    DSTAR = 280,
    BAND = 281,
    BOR = 282,
    BXOR = 283,
    BNOT = 284,
    LAND = 285,
    LOR = 286,
    LNOT = 287,
    ASSIGN = 288,
    ASSIGNPLUS = 289,
    ASSIGNMINUS = 290,
    ASSIGNSTAR = 291,
    ASSIGNSLASH = 292,
    ASSIGNDSTAR = 293,
    ASSIGNBAND = 294,
    ASSIGNBOR = 295,
    ASSIGNBXOR = 296,
    EQUAL = 297,
    LESS = 298,
    GREATER = 299,
    LESSEQ = 300,
    GREATEREQ = 301,
    RSHIFT = 302,
    LSHIFT = 303,
    LBRACE = 304,
    RBRACE = 305,
    LPAREN = 306,
    RPAREN = 307,
    LBRACKET = 308,
    RBRACKET = 309,
    DOT = 310,
    COLON = 311,
    SEMICOLON = 312,
    COMMA = 313,
    POUND = 314
};
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE {
	int first_line;
	int first_column;
	int last_line;
	int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (stmt_node **program);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 215 "parser.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc {
	yytype_int16 yyss_alloc;
	YYSTYPE yyvs_alloc;
	YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   707

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] = {
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
	55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] = {
	0,     0,     3,     5,     8,     9,    11,    17,    25,    31,
	39,    42,    44,    46,    48,    51,    55,    59,    63,    67,
	71,    75,    79,    83,    87,    91,    95,    99,   103,   107,
	111,   115,   119,   123,   125,   129,   133,   135,   138,   140,
	144,   148,   152,   156,   160,   162,   166,   170,   172,   176,
	180,   184,   186,   190,   192,   196,   200,   204,   208,   212,
	214,   217,   219,   222,   224,   229,   236,   238,   246,   253,
	255,   260,   264,   266,   271,   275,   277,   279,   281,   284,
	286,   288,   290,   292,   296,   300,   302,   306,   307,   309,
	312,   315,   316,   318,   321,   324,   325,   327,   330,   333,
	339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] = {
	61,     0,    -1,    62,    -1,    62,    63,    -1,    -1,    64,
	-1,     3,    64,     4,    62,    14,    -1,     3,    64,     4,
	62,     5,    62,    14,    -1,     6,    64,     9,    62,    14,
	-1,     7,    16,     8,    64,     9,    62,    14,    -1,    11,
	64,    -1,    11,    -1,    12,    -1,    13,    -1,    63,    57,
	-1,    16,    33,    64,    -1,    16,    34,    64,    -1,    16,
	35,    64,    -1,    16,    36,    64,    -1,    16,    37,    64,
	-1,    16,    38,    64,    -1,    16,    39,    64,    -1,    16,
	40,    64,    -1,    16,    41,    64,    -1,    77,    33,    64,
	-1,    77,    34,    64,    -1,    77,    35,    64,    -1,    77,
	36,    64,    -1,    77,    37,    64,    -1,    77,    38,    64,
	-1,    77,    39,    64,    -1,    77,    40,    64,    -1,    77,
	41,    64,    -1,    65,    -1,    65,    30,    66,    -1,    65,
	31,    66,    -1,    66,    -1,    32,    66,    -1,    67,    -1,
	68,    42,    67,    -1,    68,    43,    67,    -1,    68,    44,
	67,    -1,    68,    45,    67,    -1,    68,    46,    67,    -1,
	68,    -1,    68,    20,    69,    -1,    68,    21,    69,    -1,
	69,    -1,    69,    22,    70,    -1,    69,    23,    70,    -1,
	69,    24,    70,    -1,    70,    -1,    70,    25,    70,    -1,
	71,    -1,    71,    26,    71,    -1,    71,    27,    71,    -1,
	71,    28,    71,    -1,    71,    48,    71,    -1,    71,    47,
	71,    -1,    72,    -1,    29,    72,    -1,    73,    -1,    59,
	73,    -1,    74,    -1,    74,    51,    82,    52,    -1,    74,
	56,    16,    51,    82,    52,    -1,    75,    -1,    10,    16,
	51,    83,    52,    62,    14,    -1,    10,    51,    83,    52,
	62,    14,    -1,    76,    -1,    64,    53,    64,    54,    -1,
	64,    55,    16,    -1,    78,    -1,    64,    53,    64,    54,
	-1,    64,    55,    16,    -1,    16,    -1,    79,    -1,    17,
	-1,    21,    17,    -1,    18,    -1,    19,    -1,    15,    -1,
	80,    -1,    53,    82,    54,    -1,    49,    84,    50,    -1,
	81,    -1,    51,    64,    52,    -1,    -1,    64,    -1,    82,
	58,    -1,    82,    64,    -1,    -1,    16,    -1,    83,    58,
	-1,    83,    16,    -1,    -1,    85,    -1,    84,    58,    -1,
	84,    85,    -1,    53,    64,    54,    33,    64,    -1,    16,
	33,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] = {
	0,    33,    33,    37,    48,    58,    59,    60,    61,    62,
	63,    64,    65,    66,    67,    71,    72,    79,    86,    93,
	100,   107,   114,   121,   128,   141,   154,   167,   180,   193,
	206,   219,   232,   245,   249,   250,   251,   255,   256,   260,
	261,   262,   263,   264,   265,   269,   270,   271,   275,   276,
	277,   278,   282,   283,   287,   288,   289,   290,   291,   292,
	296,   297,   301,   302,   306,   307,   324,   328,   336,   344,
	348,   349,   360,   364,   365,   379,   380,   384,   385,   386,
	387,   388,   389,   393,   394,   395,   399,   403,   404,   409,
	410,   422,   423,   428,   429,   441,   442,   447,   448,   460,
	465
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] = {
	"$end", "error", "$undefined", "IF", "THEN", "ELSE", "WHILE", "FOR",
	"IN", "DO", "FUNC", "RETURN", "BREAK", "CONTINUE", "END", "NONE",
	"IDENT", "INT", "FLOAT", "STRING", "PLUS", "MINUS", "STAR", "SLASH",
	"PERCENT", "DSTAR", "BAND", "BOR", "BXOR", "BNOT", "LAND", "LOR", "LNOT",
	"ASSIGN", "ASSIGNPLUS", "ASSIGNMINUS", "ASSIGNSTAR", "ASSIGNSLASH",
	"ASSIGNDSTAR", "ASSIGNBAND", "ASSIGNBOR", "ASSIGNBXOR", "EQUAL", "LESS",
	"GREATER", "LESSEQ", "GREATEREQ", "RSHIFT", "LSHIFT", "LBRACE", "RBRACE",
	"LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "DOT", "COLON", "SEMICOLON",
	"COMMA", "POUND", "$accept", "program", "stmt_list", "stmt", "expr",
	"logic_expr", "ulogic_expr", "rel_expr", "term_expr", "factor_expr",
	"power_expr", "binary_expr", "ubinary_expr", "ulen_expr", "call_expr",
	"funcdecl_expr", "index_expr", "ex_index_expr", "ref_expr", "lit_expr",
	"gen_expr", "paren_expr", "expr_list", "ident_list", "assoc_list",
	"assoc_item", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] = {
	0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
	265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
	275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
	285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
	295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
	305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] = {
	0,    60,    61,    62,    62,    63,    63,    63,    63,    63,
	63,    63,    63,    63,    63,    64,    64,    64,    64,    64,
	64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
	64,    64,    64,    64,    65,    65,    65,    66,    66,    67,
	67,    67,    67,    67,    67,    68,    68,    68,    69,    69,
	69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
	72,    72,    73,    73,    74,    74,    74,    75,    75,    75,
	76,    76,    76,    77,    77,    78,    78,    79,    79,    79,
	79,    79,    79,    80,    80,    80,    81,    82,    82,    82,
	82,    83,    83,    83,    83,    84,    84,    84,    84,    85,
	85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] = {
	0,     2,     1,     2,     0,     1,     5,     7,     5,     7,
	2,     1,     1,     1,     2,     3,     3,     3,     3,     3,
	3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
	3,     3,     3,     1,     3,     3,     1,     2,     1,     3,
	3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
	3,     1,     3,     1,     3,     3,     3,     3,     3,     1,
	2,     1,     2,     1,     4,     6,     1,     7,     6,     1,
	4,     3,     1,     4,     3,     1,     1,     1,     2,     1,
	1,     1,     1,     3,     3,     1,     3,     0,     1,     2,
	2,     0,     1,     2,     2,     0,     1,     2,     2,     5,
	3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] = {
	4,     0,     2,     1,     0,     0,     0,     0,    11,    12,
	13,    81,    75,    77,    79,    80,     0,     0,     0,    95,
	0,    87,     0,     3,     5,    33,    36,    38,    44,    47,
	51,    53,    59,    61,    63,    66,    69,     0,    72,    76,
	82,    85,     0,     0,     0,     0,    91,    10,     0,     0,
	0,     0,     0,     0,     0,     0,     0,    78,     0,    60,
	37,     0,     0,     0,    96,     0,    88,     0,    62,    14,
	0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
	0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
	87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
	0,     4,     4,     0,    91,    92,     0,    15,    16,    17,
	18,    19,    20,    21,    22,    23,     0,     0,    84,    97,
	98,    86,    83,    89,    90,     0,    71,    34,    35,    45,
	46,    39,    40,    41,    42,    43,    48,    49,    50,    52,
	54,    55,    56,    58,    57,     0,     0,    24,    25,    26,
	27,    28,    29,    30,    31,    32,     0,     0,     0,     0,
	94,     4,    93,   100,     0,    70,    64,    87,     4,     6,
	8,     4,     4,     0,     0,     0,     0,     0,     0,    68,
	99,    65,     7,     9,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] = {
	-1,     1,     2,    23,    58,    25,    26,    27,    28,    29,
	30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
	40,    41,    67,   106,    63,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] = {
	-98,    14,   378,   -98,   504,   504,    46,    -8,   504,   -98,
	-98,   -98,   175,   -98,   -98,   -98,    13,   504,   504,    19,
	504,   504,   504,   -17,    56,     7,   -98,   -98,    62,   127,
	45,   105,   -98,   -98,   -15,   -98,   -98,   226,   -98,   -98,
	-98,   -98,     3,     2,    76,    22,    69,    56,   504,   504,
	504,   504,   504,   504,   504,   504,   504,   -98,    56,   544,
	-21,    70,   504,    60,   -98,    47,    56,   396,   580,   -98,
	504,    73,   504,   504,   504,   504,   504,   504,   504,   504,
	504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
	504,   101,   504,   504,   504,   504,   504,   504,   504,   504,
	504,   -98,   -98,   504,    69,   -98,    28,    56,    56,    56,
	56,    56,    56,    56,    56,    56,   504,   194,   -98,   -98,
	-98,   -98,   -98,   -98,    56,   197,   277,   -98,   -98,   127,
	127,   104,   104,   104,   104,   104,    45,    45,    45,   652,
	616,   616,   616,   616,   616,   441,    78,    56,    56,    56,
	56,    56,    56,    56,    56,    56,    10,   109,    24,    29,
	-98,   -98,   -98,    56,   103,   328,   -98,   504,   -98,   -98,
	-98,   -98,   -98,   174,   504,   459,   225,   276,   327,   -98,
	56,   -98,   -98,   -98,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] = {
	-98,   -98,   -97,   -98,    -2,   -98,    -6,    68,   -98,    65,
	136,   111,   120,   134,   -98,   -98,   -98,   -98,   -98,   -98,
	-98,   -98,   -89,    38,   -98,    98
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -75
static const yytype_int16 yytable[] = {
	24,   145,    42,    43,   156,   157,    47,   101,    45,   -36,
	-36,   102,    60,     4,     3,   168,     5,     6,    65,    66,
	7,     8,     9,    10,   169,    11,    12,    13,    14,    15,
	57,    16,   -36,   171,   -36,    61,    90,    72,    73,    17,
	69,    91,    18,    46,   160,   160,   107,   108,   109,   110,
	111,   112,   113,   114,   115,    70,    70,    71,    71,    19,
	117,    20,    44,    21,   173,   124,   127,   128,   125,    22,
	84,   176,    62,   104,   177,   178,    61,    70,   175,    71,
	161,   172,    74,    75,   103,   105,   162,   162,    66,   126,
	147,   148,   149,   150,   151,   152,   153,   154,   155,   121,
	70,   158,    71,   116,    76,    77,    78,    79,    80,    70,
	118,    71,     4,    62,   163,     5,     6,   146,   119,     7,
	8,     9,    10,   170,    11,    12,    13,    14,    15,   167,
	16,    85,    86,    87,   -38,   -38,   174,    59,    17,   129,
	130,    18,   159,   124,   131,   132,   133,   134,   135,    81,
	82,    83,    88,    89,    24,    24,    68,   -38,    19,   -38,
	20,   120,    21,     0,     0,    66,     0,     0,    22,     0,
	0,    24,   180,   124,    24,    24,    24,     4,     0,     0,
	5,     6,     0,     0,     7,     8,     9,    10,   179,    11,
	12,    13,    14,    15,     0,    16,   140,   141,   142,   143,
	144,     0,     0,    17,     0,     0,    18,     0,    48,    49,
	50,    51,    52,    53,    54,    55,    56,   136,   137,   138,
	139,     0,     0,    19,     0,    20,     0,    21,     4,     0,
	0,     5,     6,    22,     0,     7,     8,     9,    10,   182,
	11,    12,    13,    14,    15,     0,    16,    70,   164,    71,
	70,   165,    71,     0,    17,     0,     0,    18,     0,    92,
	93,    94,    95,    96,    97,    98,    99,   100,     0,     0,
	0,     0,     0,     0,    19,     0,    20,     0,    21,     4,
	0,     0,     5,     6,    22,     0,     7,     8,     9,    10,
	183,    11,    12,    13,    14,    15,     0,    16,     0,     0,
	0,     0,     0,     0,     0,    17,     0,     0,    18,     0,
	-74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
	0,     0,     0,     0,     0,    19,     0,    20,     0,    21,
	4,     0,     0,     5,     6,    22,     0,     7,     8,     9,
	10,   184,    11,    12,    13,    14,    15,     0,    16,     0,
	0,     0,     0,     0,     0,     0,    17,     0,     0,    18,
	0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
	0,     0,     0,     0,     0,     0,    19,     0,    20,     0,
	21,     4,     0,     0,     5,     6,    22,     0,     7,     8,
	9,    10,     0,    11,    12,    13,    14,    15,     0,    16,
	0,     0,     0,     0,     0,     0,     7,    17,     0,     0,
	18,    11,    12,    13,    14,    15,     0,    16,     0,     0,
	0,     0,     0,     0,     0,    17,     0,    19,    18,    20,
	0,    21,     0,     0,     0,     0,     0,    22,     0,     0,
	0,     0,     0,     0,     0,    19,     0,    20,     0,    21,
	122,     7,     0,     0,   123,    22,    11,    12,    13,    14,
	15,     0,    16,     0,     0,     0,     0,     0,     0,     7,
	17,     0,     0,    18,    11,    12,    13,    14,    15,     0,
	16,     0,     0,     0,     0,     0,     0,     0,    17,     0,
	19,    18,    20,   166,    21,     0,     0,     0,     0,   123,
	22,     0,     0,     0,     0,     0,     0,     0,    19,     0,
	20,   181,    21,     0,     7,     0,     0,   123,    22,    11,
	12,    13,    14,    15,     0,    16,     0,     0,     0,     0,
	0,     0,     0,    17,     0,     0,    18,     0,     0,     0,
	0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
	0,     0,     0,    19,     0,    20,     0,    21,     0,     0,
	0,     0,     0,    22,   -59,   -59,   -59,   -59,   -59,   -59,
	-59,   -59,   -59,     0,   -59,   -59,     0,     0,     0,     0,
	0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
	-59,   -59,   -59,     0,     0,     0,     0,   -59,     0,   -59,
	-61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
	-61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
	0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
	0,     0,     0,   -61,     0,   -61,   -53,   -53,   -53,   -53,
	-53,   -53,    85,    86,    87,     0,   -53,   -53,     0,     0,
	0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
	-53,   -53,   -53,    88,    89,     0,     0,     0,     0,   -53,
	0,   -53,   -51,   -51,   -51,   -51,   -51,    84,     0,     0,
	0,     0,   -51,   -51,     0,     0,     0,     0,     0,     0,
	0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,     0,
	0,     0,     0,     0,     0,   -51,     0,   -51
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] = {
	2,    90,     4,     5,   101,   102,     8,     4,    16,    30,
	31,     9,    18,     3,     0,     5,     6,     7,    20,    21,
	10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
	17,    21,    53,     9,    55,    16,    51,    30,    31,    29,
	57,    56,    32,    51,    16,    16,    48,    49,    50,    51,
	52,    53,    54,    55,    56,    53,    53,    55,    55,    49,
	62,    51,    16,    53,   161,    67,    72,    73,    70,    59,
	25,   168,    53,    51,   171,   172,    16,    53,   167,    55,
	52,    52,    20,    21,     8,    16,    58,    58,    90,    16,
	92,    93,    94,    95,    96,    97,    98,    99,   100,    52,
	53,   103,    55,    33,    42,    43,    44,    45,    46,    53,
	50,    55,     3,    53,   116,     6,     7,    16,    58,    10,
	11,    12,    13,    14,    15,    16,    17,    18,    19,    51,
	21,    26,    27,    28,    30,    31,    33,    17,    29,    74,
	75,    32,   104,   145,    76,    77,    78,    79,    80,    22,
	23,    24,    47,    48,   156,   157,    22,    53,    49,    55,
	51,    63,    53,    -1,    -1,   167,    -1,    -1,    59,    -1,
	-1,   173,   174,   175,   176,   177,   178,     3,    -1,    -1,
	6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
	16,    17,    18,    19,    -1,    21,    85,    86,    87,    88,
	89,    -1,    -1,    29,    -1,    -1,    32,    -1,    33,    34,
	35,    36,    37,    38,    39,    40,    41,    81,    82,    83,
	84,    -1,    -1,    49,    -1,    51,    -1,    53,     3,    -1,
	-1,     6,     7,    59,    -1,    10,    11,    12,    13,    14,
	15,    16,    17,    18,    19,    -1,    21,    53,    54,    55,
	53,    54,    55,    -1,    29,    -1,    -1,    32,    -1,    33,
	34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
	-1,    -1,    -1,    -1,    49,    -1,    51,    -1,    53,     3,
	-1,    -1,     6,     7,    59,    -1,    10,    11,    12,    13,
	14,    15,    16,    17,    18,    19,    -1,    21,    -1,    -1,
	-1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
	33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
	-1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    53,
	3,    -1,    -1,     6,     7,    59,    -1,    10,    11,    12,
	13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
	-1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
	-1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
	-1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
	53,     3,    -1,    -1,     6,     7,    59,    -1,    10,    11,
	12,    13,    -1,    15,    16,    17,    18,    19,    -1,    21,
	-1,    -1,    -1,    -1,    -1,    -1,    10,    29,    -1,    -1,
	32,    15,    16,    17,    18,    19,    -1,    21,    -1,    -1,
	-1,    -1,    -1,    -1,    -1,    29,    -1,    49,    32,    51,
	-1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
	-1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    53,
	54,    10,    -1,    -1,    58,    59,    15,    16,    17,    18,
	19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    10,
	29,    -1,    -1,    32,    15,    16,    17,    18,    19,    -1,
	21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
	49,    32,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
	59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
	51,    52,    53,    -1,    10,    -1,    -1,    58,    59,    15,
	16,    17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
	-1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
	-1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
	-1,    -1,    -1,    49,    -1,    51,    -1,    53,    -1,    -1,
	-1,    -1,    -1,    59,    20,    21,    22,    23,    24,    25,
	26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    -1,
	-1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
	46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,
	20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
	30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
	-1,    -1,    42,    43,    44,    45,    46,    47,    48,    -1,
	-1,    -1,    -1,    53,    -1,    55,    20,    21,    22,    23,
	24,    25,    26,    27,    28,    -1,    30,    31,    -1,    -1,
	-1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
	44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,
	-1,    55,    20,    21,    22,    23,    24,    25,    -1,    -1,
	-1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
	-1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    -1,
	-1,    -1,    -1,    -1,    -1,    53,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] = {
	0,    61,    62,     0,     3,     6,     7,    10,    11,    12,
	13,    15,    16,    17,    18,    19,    21,    29,    32,    49,
	51,    53,    59,    63,    64,    65,    66,    67,    68,    69,
	70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
	80,    81,    64,    64,    16,    16,    51,    64,    33,    34,
	35,    36,    37,    38,    39,    40,    41,    17,    64,    72,
	66,    16,    53,    84,    85,    64,    64,    82,    73,    57,
	53,    55,    30,    31,    20,    21,    42,    43,    44,    45,
	46,    22,    23,    24,    25,    26,    27,    28,    47,    48,
	51,    56,    33,    34,    35,    36,    37,    38,    39,    40,
	41,     4,     9,     8,    51,    16,    83,    64,    64,    64,
	64,    64,    64,    64,    64,    64,    33,    64,    50,    58,
	85,    52,    54,    58,    64,    64,    16,    66,    66,    69,
	69,    67,    67,    67,    67,    67,    70,    70,    70,    70,
	71,    71,    71,    71,    71,    82,    16,    64,    64,    64,
	64,    64,    64,    64,    64,    64,    62,    62,    64,    83,
	16,    52,    58,    64,    54,    54,    52,    51,     5,    14,
	14,     9,    52,    62,    33,    82,    62,    62,    62,    14,
	64,    52,    14,    14,    14
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
/* This is here to suppress warnings from the GCC cpp's
   -Wunused-macros.  Normally we don't worry about that warning, but
   some users do, and we want to make it easy for users to remove
   YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (&yylloc, program, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
FILE *yyo;
YYLTYPE const * const yylocp;
#endif
{
	unsigned res = 0;
	int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
	if (0 <= yylocp->first_line) {
		res += fprintf (yyo, "%d", yylocp->first_line);
		if (0 <= yylocp->first_column) {
			res += fprintf (yyo, ".%d", yylocp->first_column);
		}
	}
	if (0 <= yylocp->last_line) {
		if (yylocp->first_line < yylocp->last_line) {
			res += fprintf (yyo, "-%d", yylocp->last_line);
			if (0 <= end_col) {
				res += fprintf (yyo, ".%d", end_col);
			}
		} else if (0 <= end_col && yylocp->first_column < end_col) {
			res += fprintf (yyo, "-%d", end_col);
		}
	}
	return res;
}

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
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
		  Type, Value, Location, program); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, stmt_node **program)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, program)
FILE *yyoutput;
int yytype;
YYSTYPE const * const yyvaluep;
YYLTYPE const * const yylocationp;
stmt_node **program;
#endif
{
	FILE *yyo = yyoutput;
	YYUSE (yyo);
	if (!yyvaluep) {
		return;
	}
	YYUSE (yylocationp);
	YYUSE (program);
# ifdef YYPRINT
	if (yytype < YYNTOKENS) {
		YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
	}
# else
	YYUSE (yyoutput);
# endif
	YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, stmt_node **program)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, program)
FILE *yyoutput;
int yytype;
YYSTYPE const * const yyvaluep;
YYLTYPE const * const yylocationp;
stmt_node **program;
#endif
{
	if (yytype < YYNTOKENS) {
		YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
	} else {
		YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);
	}

	YY_LOCATION_PRINT (yyoutput, *yylocationp);
	YYFPRINTF (yyoutput, ": ");
	yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, program);
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
	for (; yybottom <= yytop; yybottom++) {
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, stmt_node **program)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, program)
YYSTYPE *yyvsp;
YYLTYPE *yylsp;
int yyrule;
stmt_node **program;
#endif
{
	int yynrhs = yyr2[yyrule];
	int yyi;
	unsigned long int yylno = yyrline[yyrule];
	YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	           yyrule - 1, yylno);
	/* The symbols being reduced.  */
	for (yyi = 0; yyi < yynrhs; yyi++) {
		YYFPRINTF (stderr, "   $%d = ", yyi + 1);
		yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		                 &(yyvsp[(yyi + 1) - (yynrhs)])
		                 , &(yylsp[(yyi + 1) - (yynrhs)])		       , program);
		YYFPRINTF (stderr, "\n");
	}
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, program); \
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
	for (yylen = 0; yystr[yylen]; yylen++) {
		continue;
	}
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

	while ((*yyd++ = *yys++) != '\0') {
		continue;
	}

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
yytnamerr (char *yyres, const char *yystr) {
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		char const *yyp = yystr;

		for (;;)
			switch (*++yyp) {
				case '\'':
				case ',':
					goto do_not_strip_quotes;

				case '\\':
					if (*++yyp != '\\') {
						goto do_not_strip_quotes;
					}
					/* Fall through.  */
				default:
					if (yyres) {
						yyres[yyn] = *yyp;
					}
					yyn++;
					break;

				case '"':
					if (yyres) {
						yyres[yyn] = '\0';
					}
					return yyn;
			}
do_not_strip_quotes:
		;
	}

	if (! yyres) {
		return yystrlen (yystr);
	}

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
                yytype_int16 *yyssp, int yytoken) {
	YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
	YYSIZE_T yysize = yysize0;
	enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	/* Internationalized format string. */
	const char *yyformat = YY_NULL;
	/* Arguments of yyformat. */
	char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	/* Number of reported tokens (one for the "unexpected", one per
	   "expected"). */
	int yycount = 0;

	/* There are many possibilities here to consider:
	   - Assume YYFAIL is not used.  It's too flawed to consider.  See
	     <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
	     for details.  YYERROR is fine as it does not invoke this
	     function.
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
	if (yytoken != YYEMPTY) {
		int yyn = yypact[*yyssp];
		yyarg[yycount++] = yytname[yytoken];
		if (!yypact_value_is_default (yyn)) {
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
				        && !yytable_value_is_error (yytable[yyx + yyn])) {
					if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM) {
						yycount = 1;
						yysize = yysize0;
						break;
					}
					yyarg[yycount++] = yytname[yyx];
					{
						YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
						if (! (yysize <= yysize1
						        && yysize1 <= YYSTACK_ALLOC_MAXIMUM)) {
							return 2;
						}
						yysize = yysize1;
					}
				}
		}
	}

	switch (yycount) {
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
		if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)) {
			return 2;
		}
		yysize = yysize1;
	}

	if (*yymsg_alloc < yysize) {
		*yymsg_alloc = 2 * yysize;
		if (! (yysize <= *yymsg_alloc
		        && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM)) {
			*yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
		}
		return 1;
	}

	/* Avoid sprintf, as that infringes on the user's name space.
	   Don't have undefined behavior even if the translation
	   produced a string with the wrong number of "%s"s.  */
	{
		char *yyp = *yymsg;
		int yyi = 0;
		while ((*yyp = *yyformat) != '\0')
			if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
				yyp += yytnamerr (yyp, yyarg[yyi++]);
				yyformat += 2;
			} else {
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, stmt_node **program)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, program)
const char *yymsg;
int yytype;
YYSTYPE *yyvaluep;
YYLTYPE *yylocationp;
stmt_node **program;
#endif
{
	YYUSE (yyvaluep);
	YYUSE (yylocationp);
	YYUSE (program);

	if (!yymsg) {
		yymsg = "Deleting";
	}
	YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

	YYUSE (yytype);
}




/*----------.
| yyparse.  |
`----------*/

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
yyparse (stmt_node **program)
#else
int
yyparse (program)
stmt_node **program;
#endif
#endif
{
	/* The lookahead symbol.  */
	int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
	/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
	/* Default value used for initialization, for pacifying older GCCs
	   or non-GCC compilers.  */
	static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
	static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
	    = { 1, 1, 1, 1 }
# endif
	      ;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

	/* The semantic value of the lookahead symbol.  */
	YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

	/* Location data for the lookahead symbol.  */
	YYLTYPE yylloc = yyloc_default;


	/* Number of syntax errors so far.  */
	int yynerrs;

	int yystate;
	/* Number of tokens to shift before error messages enabled.  */
	int yyerrstatus;

	/* The stacks and their tools:
	   `yyss': related to states.
	   `yyvs': related to semantic values.
	   `yyls': related to locations.

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

	/* The location stack.  */
	YYLTYPE yylsa[YYINITDEPTH];
	YYLTYPE *yyls;
	YYLTYPE *yylsp;

	/* The locations where the error started and ended.  */
	YYLTYPE yyerror_range[3];

	YYSIZE_T yystacksize;

	int yyn;
	int yyresult;
	/* Lookahead token as an internal (translated) token number.  */
	int yytoken = 0;
	/* The variables used to return semantic value and location from the
	   action routines.  */
	YYSTYPE yyval;
	YYLTYPE yyloc;

#if YYERROR_VERBOSE
	/* Buffer for error messages, and its allocated size.  */
	char yymsgbuf[128];
	char *yymsg = yymsgbuf;
	YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

	/* The number of symbols on the RHS of the reduced rule.
	   Keep to zero when no symbol should be popped.  */
	int yylen = 0;

	yyssp = yyss = yyssa;
	yyvsp = yyvs = yyvsa;
	yylsp = yyls = yylsa;
	yystacksize = YYINITDEPTH;

	YYDPRINTF ((stderr, "Starting parse\n"));

	yystate = 0;
	yyerrstatus = 0;
	yynerrs = 0;
	yychar = YYEMPTY; /* Cause a token to be read.  */
	yylsp[0] = yylloc;
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

	if (yyss + yystacksize - 1 <= yyssp) {
		/* Get the current used size of the three stacks, in elements.  */
		YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
		{
			/* Give user a chance to reallocate the stack.  Use copies of
			   these so that the &'s don't force the real ones into
			   memory.  */
			YYSTYPE *yyvs1 = yyvs;
			yytype_int16 *yyss1 = yyss;
			YYLTYPE *yyls1 = yyls;

			/* Each stack pointer address is followed by the size of the
			   data in use in that stack, in bytes.  This used to be a
			   conditional around just the two extra args, but that might
			   be undefined if yyoverflow is a macro.  */
			yyoverflow (YY_("memory exhausted"),
			            &yyss1, yysize * sizeof (*yyssp),
			            &yyvs1, yysize * sizeof (*yyvsp),
			            &yyls1, yysize * sizeof (*yylsp),
			            &yystacksize);

			yyls = yyls1;
			yyss = yyss1;
			yyvs = yyvs1;
		}
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
		goto yyexhaustedlab;
# else
		/* Extend the stack our own way.  */
		if (YYMAXDEPTH <= yystacksize) {
			goto yyexhaustedlab;
		}
		yystacksize *= 2;
		if (YYMAXDEPTH < yystacksize) {
			yystacksize = YYMAXDEPTH;
		}

		{
			yytype_int16 *yyss1 = yyss;
			union yyalloc *yyptr =
					    (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
			if (! yyptr) {
				goto yyexhaustedlab;
			}
			YYSTACK_RELOCATE (yyss_alloc, yyss);
			YYSTACK_RELOCATE (yyvs_alloc, yyvs);
			YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
			if (yyss1 != yyssa) {
				YYSTACK_FREE (yyss1);
			}
		}
# endif
#endif /* no yyoverflow */

		yyssp = yyss + yysize - 1;
		yyvsp = yyvs + yysize - 1;
		yylsp = yyls + yysize - 1;

		YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		            (unsigned long int) yystacksize));

		if (yyss + yystacksize - 1 <= yyssp) {
			YYABORT;
		}
	}

	YYDPRINTF ((stderr, "Entering state %d\n", yystate));

	if (yystate == YYFINAL) {
		YYACCEPT;
	}

	goto yybackup;

	/*-----------.
	| yybackup.  |
	`-----------*/
yybackup:

	/* Do appropriate processing given the current state.  Read a
	   lookahead token if we need one and don't already have one.  */

	/* First try to decide what to do without reference to lookahead token.  */
	yyn = yypact[yystate];
	if (yypact_value_is_default (yyn)) {
		goto yydefault;
	}

	/* Not known => get a lookahead token if don't already have one.  */

	/* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
	if (yychar == YYEMPTY) {
		YYDPRINTF ((stderr, "Reading a token: "));
		yychar = YYLEX;
	}

	if (yychar <= YYEOF) {
		yychar = yytoken = YYEOF;
		YYDPRINTF ((stderr, "Now at end of input.\n"));
	} else {
		yytoken = YYTRANSLATE (yychar);
		YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	}

	/* If the proper action on seeing token YYTOKEN is to reduce or to
	   detect an error, take that action.  */
	yyn += yytoken;
	if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken) {
		goto yydefault;
	}
	yyn = yytable[yyn];
	if (yyn <= 0) {
		if (yytable_value_is_error (yyn)) {
			goto yyerrlab;
		}
		yyn = -yyn;
		goto yyreduce;
	}

	/* Count tokens shifted since error; after three, turn off error
	   status.  */
	if (yyerrstatus) {
		yyerrstatus--;
	}

	/* Shift the lookahead token.  */
	YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

	/* Discard the shifted token.  */
	yychar = YYEMPTY;

	yystate = yyn;
	YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
	*++yyvsp = yylval;
	YY_IGNORE_MAYBE_UNINITIALIZED_END
	*++yylsp = yylloc;
	goto yynewstate;


	/*-----------------------------------------------------------.
	| yydefault -- do the default action for the current state.  |
	`-----------------------------------------------------------*/
yydefault:
	yyn = yydefact[yystate];
	if (yyn == 0) {
		goto yyerrlab;
	}
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

	/* Default location.  */
	YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
	YY_REDUCE_PRINT (yyn);
	switch (yyn) {
		case 2:
			/* Line 1787 of yacc.c  */
#line 33 "parser.y"
			{
				*program = AS_ST((yyvsp[(1) - (1)]));
			}
			break;

		case 3:
			/* Line 1787 of yacc.c  */
#line 37 "parser.y"
			{
				stmtlist_node *cur = AS_ST((yyvsp[(1) - (2)]))->stmtlist;
				while(cur->next) {
					cur = cur->next;
				}
				if(cur->stmt) {
					cur->next = NEW(stmtlist_node);
					cur = cur->next;
				}
				cur->stmt = (yyvsp[(2) - (2)]);
				cur->next = NULL;
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 4:
			/* Line 1787 of yacc.c  */
#line 48 "parser.y"
			{
				(yyval) = NEW_ST();
				AS_ST((yyval))->type = ST_LIST;
				AS_ST((yyval))->stmtlist = NEW(stmtlist_node);
				AS_ST((yyval))->stmtlist->stmt = NULL;
				AS_ST((yyval))->stmtlist->next = NULL;
			}
			break;

		case 5:
			/* Line 1787 of yacc.c  */
#line 58 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_EXPR;
				AS_ST((yyval))->expr = (yyvsp[(1) - (1)]);
			}
			break;

		case 6:
			/* Line 1787 of yacc.c  */
#line 59 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_IFELSE;
				AS_ST((yyval))->ifelse = NEW(ifelse_node);
				AS_ST((yyval))->ifelse->cond = (yyvsp[(2) - (5)]);
				AS_ST((yyval))->ifelse->iftrue = (yyvsp[(4) - (5)]);
				AS_ST((yyval))->ifelse->iffalse = NULL;
			}
			break;

		case 7:
			/* Line 1787 of yacc.c  */
#line 60 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_IFELSE;
				AS_ST((yyval))->ifelse = NEW(ifelse_node);
				AS_ST((yyval))->ifelse->cond = (yyvsp[(2) - (7)]);
				AS_ST((yyval))->ifelse->iftrue = (yyvsp[(4) - (7)]);
				AS_ST((yyval))->ifelse->iffalse = (yyvsp[(6) - (7)]);
			}
			break;

		case 8:
			/* Line 1787 of yacc.c  */
#line 61 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_LOOP;
				AS_ST((yyval))->loop = NEW(loop_node);
				AS_ST((yyval))->loop->cond = (yyvsp[(2) - (5)]);
				AS_ST((yyval))->loop->loop = (yyvsp[(4) - (5)]);
			}
			break;

		case 9:
			/* Line 1787 of yacc.c  */
#line 62 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_ITER;
				AS_ST((yyval))->iter = NEW(iter_node);
				AS_ST((yyval))->iter->var = (yyvsp[(2) - (7)]);
				AS_ST((yyval))->iter->iter = (yyvsp[(4) - (7)]);
				AS_ST((yyval))->iter->loop = (yyvsp[(6) - (7)]);
			}
			break;

		case 10:
			/* Line 1787 of yacc.c  */
#line 63 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_RET;
				AS_ST((yyval))->ret = NEW(ret_node);
				AS_ST((yyval))->ret->ret = (yyvsp[(2) - (2)]);
			}
			break;

		case 11:
			/* Line 1787 of yacc.c  */
#line 64 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_RET;
				AS_ST((yyval))->ret = NEW(ret_node);
				AS_ST((yyval))->ret->ret = NULL;
			}
			break;

		case 12:
			/* Line 1787 of yacc.c  */
#line 65 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_BREAK;
			}
			break;

		case 13:
			/* Line 1787 of yacc.c  */
#line 66 "parser.y"
			{
				(yyval) = NEW_ST();
				SET_LOC(AS_ST((yyval)), (yyloc));
				AS_ST((yyval))->type = ST_CONT;
			}
			break;

		case 14:
			/* Line 1787 of yacc.c  */
#line 67 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 15:
			/* Line 1787 of yacc.c  */
#line 71 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->assign->value = (yyvsp[(3) - (3)]);
			}
			break;

		case 16:
			/* Line 1787 of yacc.c  */
#line 72 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_ADD, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 17:
			/* Line 1787 of yacc.c  */
#line 79 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_SUB, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 18:
			/* Line 1787 of yacc.c  */
#line 86 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_MUL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 19:
			/* Line 1787 of yacc.c  */
#line 93 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_DIV, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 20:
			/* Line 1787 of yacc.c  */
#line 100 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_POW, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 21:
			/* Line 1787 of yacc.c  */
#line 107 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_BAND, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 22:
			/* Line 1787 of yacc.c  */
#line 114 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_BOR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 23:
			/* Line 1787 of yacc.c  */
#line 121 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_ASSIGN;
				AS_EX((yyval))->assign = NEW(assign_node);
				AS_EX((yyval))->assign->ident = (yyvsp[(1) - (3)]);
				MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_BXOR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
			}
			break;

		case 24:
			/* Line 1787 of yacc.c  */
#line 128 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				AS_EX((yyval))->setindex->value = (yyvsp[(3) - (3)]);
				//ex_free(AS_EX($1));
			}
			break;

		case 25:
			/* Line 1787 of yacc.c  */
#line 141 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_ADD, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 26:
			/* Line 1787 of yacc.c  */
#line 154 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_SUB, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 27:
			/* Line 1787 of yacc.c  */
#line 167 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_MUL, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 28:
			/* Line 1787 of yacc.c  */
#line 180 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_DIV, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 29:
			/* Line 1787 of yacc.c  */
#line 193 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_POW, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 30:
			/* Line 1787 of yacc.c  */
#line 206 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_BAND, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 31:
			/* Line 1787 of yacc.c  */
#line 219 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_BOR, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 32:
			/* Line 1787 of yacc.c  */
#line 232 "parser.y"
			{
				if(AS_EX((yyvsp[(1) - (3)]))->type != EX_INDEX) {
					yyerror("Assigning to non-indexing expression");
					YYABORT;
				}
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_SETINDEX;
				AS_EX((yyval))->setindex = NEW(setindex_node);
				AS_EX((yyval))->setindex->expr = AS_EX((yyvsp[(1) - (3)]))->index->expr;
				AS_EX((yyval))->setindex->index = AS_EX((yyvsp[(1) - (3)]))->index->index;
				MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_BXOR, AS_EX((yyvsp[(1) - (3)]))->index->expr, AS_EX((yyvsp[(1) - (3)]))->index->index, (yyvsp[(3) - (3)]));
				//ex_free(AS_EX($1));
			}
			break;

		case 33:
			/* Line 1787 of yacc.c  */
#line 245 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 34:
			/* Line 1787 of yacc.c  */
#line 249 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_LAND;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 35:
			/* Line 1787 of yacc.c  */
#line 250 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_LOR;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 36:
			/* Line 1787 of yacc.c  */
#line 251 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 37:
			/* Line 1787 of yacc.c  */
#line 255 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_UNOP;
				AS_EX((yyval))->unop = NEW(unop_node);
				AS_EX((yyval))->unop->type = OP_LNOT;
				AS_EX((yyval))->unop->expr = (yyvsp[(2) - (2)]);
			}
			break;

		case 38:
			/* Line 1787 of yacc.c  */
#line 256 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 39:
			/* Line 1787 of yacc.c  */
#line 260 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_EQUAL;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 40:
			/* Line 1787 of yacc.c  */
#line 261 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_LESS;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 41:
			/* Line 1787 of yacc.c  */
#line 262 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_GREATER;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 42:
			/* Line 1787 of yacc.c  */
#line 263 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_LESSEQ;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 43:
			/* Line 1787 of yacc.c  */
#line 264 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_GREATEREQ;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 44:
			/* Line 1787 of yacc.c  */
#line 265 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 45:
			/* Line 1787 of yacc.c  */
#line 269 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_ADD;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 46:
			/* Line 1787 of yacc.c  */
#line 270 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_SUB;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 47:
			/* Line 1787 of yacc.c  */
#line 271 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 48:
			/* Line 1787 of yacc.c  */
#line 275 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_MUL;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 49:
			/* Line 1787 of yacc.c  */
#line 276 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_DIV;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 50:
			/* Line 1787 of yacc.c  */
#line 277 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_MOD;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 51:
			/* Line 1787 of yacc.c  */
#line 278 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 52:
			/* Line 1787 of yacc.c  */
#line 282 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_POW;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 53:
			/* Line 1787 of yacc.c  */
#line 283 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 54:
			/* Line 1787 of yacc.c  */
#line 287 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_BAND;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 55:
			/* Line 1787 of yacc.c  */
#line 288 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_BOR;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 56:
			/* Line 1787 of yacc.c  */
#line 289 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_BXOR;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 57:
			/* Line 1787 of yacc.c  */
#line 290 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_LSHIFT;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 58:
			/* Line 1787 of yacc.c  */
#line 291 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_BINOP;
				AS_EX((yyval))->binop = NEW(binop_node);
				AS_EX((yyval))->binop->type = OP_RSHIFT;
				AS_EX((yyval))->binop->left = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->binop->right = (yyvsp[(3) - (3)]);
			}
			break;

		case 59:
			/* Line 1787 of yacc.c  */
#line 292 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 60:
			/* Line 1787 of yacc.c  */
#line 296 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_UNOP;
				AS_EX((yyval))->unop = NEW(unop_node);
				AS_EX((yyval))->unop->type = OP_BNOT;
				AS_EX((yyval))->unop->expr = (yyvsp[(2) - (2)]);
			}
			break;

		case 61:
			/* Line 1787 of yacc.c  */
#line 297 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 62:
			/* Line 1787 of yacc.c  */
#line 301 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_UNOP;
				AS_EX((yyval))->unop = NEW(unop_node);
				AS_EX((yyval))->unop->type = OP_LEN;
				AS_EX((yyval))->unop->expr = (yyvsp[(2) - (2)]);
			}
			break;

		case 63:
			/* Line 1787 of yacc.c  */
#line 302 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 64:
			/* Line 1787 of yacc.c  */
#line 306 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_CALL;
				AS_EX((yyval))->call = NEW(call_node);
				AS_EX((yyval))->call->expr = (yyvsp[(1) - (4)]);
				AS_EX((yyval))->call->args = (yyvsp[(3) - (4)]);
			}
			break;

		case 65:
			/* Line 1787 of yacc.c  */
#line 307 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_CALL;
				AS_EX((yyval))->call = NEW(call_node);
				AS_EX((yyval))->call->expr = NEW_EX();
				AS_EX((yyval))->call->expr->type = EX_INDEX;
				AS_EX((yyval))->call->expr->index = NEW(index_node);
				AS_EX((yyval))->call->expr->index->expr = (yyvsp[(1) - (6)]);
				AS_EX((yyval))->call->expr->index->index = NEW_EX();
				AS_EX((yyval))->call->expr->index->index->type = EX_LIT;
				AS_EX((yyval))->call->expr->index->index->lit = NEW(lit_node);
				AS_EX((yyval))->call->expr->index->index->lit->type = LIT_STRING;
				AS_EX((yyval))->call->expr->index->index->lit->str = (yyvsp[(3) - (6)]);
				AS_EX((yyval))->call->args = NEW(exprlist_node);
				AS_EX((yyval))->call->args->expr = (yyvsp[(1) - (6)]);
				AS_EX((yyval))->call->args->next = (yyvsp[(5) - (6)]);
			}
			break;

		case 66:
			/* Line 1787 of yacc.c  */
#line 324 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 67:
			/* Line 1787 of yacc.c  */
#line 328 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_FUNCDECL;
				AS_EX((yyval))->funcdecl = NEW(funcdecl_node);
				AS_EX((yyval))->funcdecl->name = (yyvsp[(2) - (7)]);
				AS_EX((yyval))->funcdecl->args = (yyvsp[(4) - (7)]);
				AS_EX((yyval))->funcdecl->body = (yyvsp[(6) - (7)]);
			}
			break;

		case 68:
			/* Line 1787 of yacc.c  */
#line 336 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_FUNCDECL;
				AS_EX((yyval))->funcdecl = NEW(funcdecl_node);
				AS_EX((yyval))->funcdecl->name = NULL;
				AS_EX((yyval))->funcdecl->args = (yyvsp[(3) - (6)]);
				AS_EX((yyval))->funcdecl->body = (yyvsp[(5) - (6)]);
			}
			break;

		case 69:
			/* Line 1787 of yacc.c  */
#line 344 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 70:
			/* Line 1787 of yacc.c  */
#line 348 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_INDEX;
				AS_EX((yyval))->index = NEW(index_node);
				AS_EX((yyval))->index->expr = (yyvsp[(1) - (4)]);
				AS_EX((yyval))->index->index = (yyvsp[(3) - (4)]);
			}
			break;

		case 71:
			/* Line 1787 of yacc.c  */
#line 349 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_INDEX;
				AS_EX((yyval))->index = NEW(index_node);
				AS_EX((yyval))->index->expr = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->index->index = NEW_EX();
				AS_EX((yyval))->index->index->type = EX_LIT;
				AS_EX((yyval))->index->index->lit = NEW(lit_node);
				AS_EX((yyval))->index->index->lit->type = LIT_STRING;
				AS_EX((yyval))->index->index->lit->str = (yyvsp[(3) - (3)]);
			}
			break;

		case 72:
			/* Line 1787 of yacc.c  */
#line 360 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 73:
			/* Line 1787 of yacc.c  */
#line 364 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_INDEX;
				AS_EX((yyval))->index = NEW(index_node);
				AS_EX((yyval))->index->expr = (yyvsp[(1) - (4)]);
				AS_EX((yyval))->index->index = (yyvsp[(3) - (4)]);
			}
			break;

		case 74:
			/* Line 1787 of yacc.c  */
#line 365 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_INDEX;
				AS_EX((yyval))->index = NEW(index_node);
				AS_EX((yyval))->index->expr = (yyvsp[(1) - (3)]);
				AS_EX((yyval))->index->index = NEW_EX();
				AS_EX((yyval))->index->index->type = EX_LIT;
				AS_EX((yyval))->index->index->lit = NEW(lit_node);
				AS_EX((yyval))->index->index->lit->type = LIT_STRING;
				AS_EX((yyval))->index->index->lit->str = (yyvsp[(3) - (3)]);
			}
			break;

		case 75:
			/* Line 1787 of yacc.c  */
#line 379 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_REF;
				AS_EX((yyval))->ref = NEW(ref_node);
				AS_EX((yyval))->ref->ident = (yyvsp[(1) - (1)]);
			}
			break;

		case 76:
			/* Line 1787 of yacc.c  */
#line 380 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 77:
			/* Line 1787 of yacc.c  */
#line 384 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_LIT;
				AS_EX((yyval))->lit = NEW(lit_node);
				AS_EX((yyval))->lit->type = LIT_INT;
				AS_EX((yyval))->lit->ival = *AS((yyvsp[(1) - (1)]), long);
				free((yyvsp[(1) - (1)]));
			}
			break;

		case 78:
			/* Line 1787 of yacc.c  */
#line 385 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_LIT;
				AS_EX((yyval))->lit = NEW(lit_node);
				AS_EX((yyval))->lit->type = LIT_INT;
				AS_EX((yyval))->lit->ival = -(*AS((yyvsp[(2) - (2)]), long));
				free((yyvsp[(2) - (2)]));
			}
			break;

		case 79:
			/* Line 1787 of yacc.c  */
#line 386 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_LIT;
				AS_EX((yyval))->lit = NEW(lit_node);
				AS_EX((yyval))->lit->type = LIT_FLOAT;
				AS_EX((yyval))->lit->fval = *AS((yyvsp[(1) - (1)]), double);
				free((yyvsp[(1) - (1)]));
			}
			break;

		case 80:
			/* Line 1787 of yacc.c  */
#line 387 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_LIT;
				AS_EX((yyval))->lit = NEW(lit_node);
				AS_EX((yyval))->lit->type = LIT_STRING;
				AS_EX((yyval))->lit->str = (yyvsp[(1) - (1)]);
			}
			break;

		case 81:
			/* Line 1787 of yacc.c  */
#line 388 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_LIT;
				AS_EX((yyval))->lit = NEW(lit_node);
				AS_EX((yyval))->lit->type = LIT_NONE;
			}
			break;

		case 82:
			/* Line 1787 of yacc.c  */
#line 389 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 83:
			/* Line 1787 of yacc.c  */
#line 393 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_LISTGEN;
				AS_EX((yyval))->listgen = NEW(listgen_node);
				AS_EX((yyval))->listgen->list = (yyvsp[(2) - (3)]);
			}
			break;

		case 84:
			/* Line 1787 of yacc.c  */
#line 394 "parser.y"
			{
				(yyval) = NEW_EX();
				AS_EX((yyval))->type = EX_MAPGEN;
				AS_EX((yyval))->mapgen = NEW(mapgen_node);
				AS_EX((yyval))->mapgen->map = (yyvsp[(2) - (3)]);
			}
			break;

		case 85:
			/* Line 1787 of yacc.c  */
#line 395 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (1)]);
			}
			break;

		case 86:
			/* Line 1787 of yacc.c  */
#line 399 "parser.y"
			{
				(yyval) = (yyvsp[(2) - (3)]);
			}
			break;

		case 87:
			/* Line 1787 of yacc.c  */
#line 403 "parser.y"
			{
				(yyval) = NULL;
			}
			break;

		case 88:
			/* Line 1787 of yacc.c  */
#line 404 "parser.y"
			{
				(yyval) = NEW(exprlist_node);
				AS((yyval), exprlist_node)->expr = (yyvsp[(1) - (1)]);
				AS((yyval), exprlist_node)->next = NULL;
			}
			break;

		case 89:
			/* Line 1787 of yacc.c  */
#line 409 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 90:
			/* Line 1787 of yacc.c  */
#line 410 "parser.y"
			{
				exprlist_node *cur = (yyvsp[(1) - (2)]);
				while(cur->next) {
					cur = cur->next;
				}
				cur->next = NEW(exprlist_node);
				cur = cur->next;
				cur->expr = (yyvsp[(2) - (2)]);
				cur->next = NULL;
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 91:
			/* Line 1787 of yacc.c  */
#line 422 "parser.y"
			{
				(yyval) = NULL;
			}
			break;

		case 92:
			/* Line 1787 of yacc.c  */
#line 423 "parser.y"
			{
				(yyval) = NEW(identlist_node);
				AS((yyval), identlist_node)->ident = (yyvsp[(1) - (1)]);
				AS((yyval), identlist_node)->next = NULL;
			}
			break;

		case 93:
			/* Line 1787 of yacc.c  */
#line 428 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 94:
			/* Line 1787 of yacc.c  */
#line 429 "parser.y"
			{
				identlist_node *cur = (yyvsp[(1) - (2)]);
				while(cur->next) {
					cur = cur->next;
				}
				cur->next = NEW(identlist_node);
				cur = cur->next;
				cur->ident = (yyvsp[(2) - (2)]);
				cur->next = NULL;
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 95:
			/* Line 1787 of yacc.c  */
#line 441 "parser.y"
			{
				(yyval) = NULL;
			}
			break;

		case 96:
			/* Line 1787 of yacc.c  */
#line 442 "parser.y"
			{
				(yyval) = NEW(assoclist_node);
				AS((yyval), assoclist_node)->item = (yyvsp[(1) - (1)]);
				AS((yyval), assoclist_node)->next = NULL;
			}
			break;

		case 97:
			/* Line 1787 of yacc.c  */
#line 447 "parser.y"
			{
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 98:
			/* Line 1787 of yacc.c  */
#line 448 "parser.y"
			{
				assoclist_node *cur = (yyvsp[(1) - (2)]);
				while(cur->next) {
					cur = cur->next;
				}
				cur->next = NEW(assoclist_node);
				cur = cur->next;
				cur->item = (yyvsp[(2) - (2)]);
				cur->next = NULL;
				(yyval) = (yyvsp[(1) - (2)]);
			}
			break;

		case 99:
			/* Line 1787 of yacc.c  */
#line 460 "parser.y"
			{
				(yyval) = NEW(associtem_node);
				AS((yyval), associtem_node)->key = (yyvsp[(2) - (5)]);
				AS((yyval), associtem_node)->value = (yyvsp[(5) - (5)]);
			}
			break;

		case 100:
			/* Line 1787 of yacc.c  */
#line 465 "parser.y"
			{
				(yyval) = NEW(associtem_node);
				AS((yyval), associtem_node)->key = NEW_EX();
				AS((yyval), associtem_node)->key->type = EX_LIT;
				AS((yyval), associtem_node)->key->lit = NEW(lit_node);
				AS((yyval), associtem_node)->key->lit->type = LIT_STRING;
				AS((yyval), associtem_node)->key->lit->str = (yyvsp[(1) - (3)]);
				AS((yyval), associtem_node)->value = (yyvsp[(3) - (3)]);
			}
			break;


			/* Line 1787 of yacc.c  */
#line 2678 "parser.tab.c"
		default:
			break;
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
	*++yylsp = yyloc;

	/* Now `shift' the result of the reduction.  Determine what state
	   that goes to, based on the state we popped back to and the rule
	   number reduced by.  */

	yyn = yyr1[yyn];

	yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
	if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp) {
		yystate = yytable[yystate];
	} else {
		yystate = yydefgoto[yyn - YYNTOKENS];
	}

	goto yynewstate;


	/*------------------------------------.
	| yyerrlab -- here on detecting error |
	`------------------------------------*/
yyerrlab:
	/* Make sure we have latest lookahead translation.  See comments at
	   user semantic actions for why this is necessary.  */
	yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

	/* If not already recovering from an error, report this error.  */
	if (!yyerrstatus) {
		++yynerrs;
#if ! YYERROR_VERBOSE
		yyerror (&yylloc, program, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
		{
			char const *yymsgp = YY_("syntax error");
			int yysyntax_error_status;
			yysyntax_error_status = YYSYNTAX_ERROR;
			if (yysyntax_error_status == 0) {
				yymsgp = yymsg;
			} else if (yysyntax_error_status == 1) {
				if (yymsg != yymsgbuf) {
					YYSTACK_FREE (yymsg);
				}
				yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
				if (!yymsg) {
					yymsg = yymsgbuf;
					yymsg_alloc = sizeof yymsgbuf;
					yysyntax_error_status = 2;
				} else {
					yysyntax_error_status = YYSYNTAX_ERROR;
					yymsgp = yymsg;
				}
			}
			yyerror (&yylloc, program, yymsgp);
			if (yysyntax_error_status == 2) {
				goto yyexhaustedlab;
			}
		}
# undef YYSYNTAX_ERROR
#endif
	}

	yyerror_range[1] = yylloc;

	if (yyerrstatus == 3) {
		/* If just tried and failed to reuse lookahead token after an
		error, discard it.  */

		if (yychar <= YYEOF) {
			/* Return failure if at end of input.  */
			if (yychar == YYEOF) {
				YYABORT;
			}
		} else {
			yydestruct ("Error: discarding",
			            yytoken, &yylval, &yylloc, program);
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
	if (/*CONSTCOND*/ 0) {
		goto yyerrorlab;
	}

	yyerror_range[1] = yylsp[1-yylen];
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

	for (;;) {
		yyn = yypact[yystate];
		if (!yypact_value_is_default (yyn)) {
			yyn += YYTERROR;
			if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR) {
				yyn = yytable[yyn];
				if (0 < yyn) {
					break;
				}
			}
		}

		/* Pop the current state because it cannot handle the error token.  */
		if (yyssp == yyss) {
			YYABORT;
		}

		yyerror_range[1] = *yylsp;
		yydestruct ("Error: popping",
		            yystos[yystate], yyvsp, yylsp, program);
		YYPOPSTACK (1);
		yystate = *yyssp;
		YY_STACK_PRINT (yyss, yyssp);
	}

	YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
	*++yyvsp = yylval;
	YY_IGNORE_MAYBE_UNINITIALIZED_END

	yyerror_range[2] = yylloc;
	/* Using YYLLOC is tempting, but would change the location of
	   the lookahead.  YYLOC is available though.  */
	YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
	*++yylsp = yyloc;

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
	yyerror (&yylloc, program, YY_("memory exhausted"));
	yyresult = 2;
	/* Fall through.  */
#endif

yyreturn:
	if (yychar != YYEMPTY) {
		/* Make sure we have latest lookahead translation.  See comments at
		   user semantic actions for why this is necessary.  */
		yytoken = YYTRANSLATE (yychar);
		yydestruct ("Cleanup: discarding lookahead",
		            yytoken, &yylval, &yylloc, program);
	}
	/* Do not reclaim the symbols of the rule which action triggered
	   this YYABORT or YYACCEPT.  */
	YYPOPSTACK (yylen);
	YY_STACK_PRINT (yyss, yyssp);
	while (yyssp != yyss) {
		yydestruct ("Cleanup: popping",
		            yystos[*yyssp], yyvsp, yylsp, program);
		YYPOPSTACK (1);
	}
#ifndef yyoverflow
	if (yyss != yyssa) {
		YYSTACK_FREE (yyss);
	}
#endif
#if YYERROR_VERBOSE
	if (yymsg != yymsgbuf) {
		YYSTACK_FREE (yymsg);
	}
#endif
	/* Make sure YYID is used.  */
	return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 476 "parser.y"


// TODO
