/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include "sol.h"
#include "ast.h"

#include <string.h>

#define YYSTYPE void *


#line 76 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    THEN = 259,
    ELSE = 260,
    WHILE = 261,
    FOR = 262,
    IN = 263,
    DO = 264,
    FUNC = 265,
    LAMBDA = 266,
    RETURN = 267,
    BREAK = 268,
    CONTINUE = 269,
    END = 270,
    NONE = 271,
    IDENT = 272,
    INT = 273,
    FLOAT = 274,
    STRING = 275,
    PLUS = 276,
    MINUS = 277,
    STAR = 278,
    SLASH = 279,
    PERCENT = 280,
    DSTAR = 281,
    BAND = 282,
    BOR = 283,
    BXOR = 284,
    BNOT = 285,
    LAND = 286,
    LOR = 287,
    LNOT = 288,
    ASSIGN = 289,
    ASSIGNPLUS = 290,
    ASSIGNMINUS = 291,
    ASSIGNSTAR = 292,
    ASSIGNSLASH = 293,
    ASSIGNDSTAR = 294,
    ASSIGNBAND = 295,
    ASSIGNBOR = 296,
    ASSIGNBXOR = 297,
    EQUAL = 298,
    NEQUAL = 299,
    LESS = 300,
    GREATER = 301,
    LESSEQ = 302,
    GREATEREQ = 303,
    RSHIFT = 304,
    LSHIFT = 305,
    LBRACE = 306,
    RBRACE = 307,
    LPAREN = 308,
    RPAREN = 309,
    LBRACKET = 310,
    RBRACKET = 311,
    DOT = 312,
    COLON = 313,
    SEMICOLON = 314,
    COMMA = 315,
    POUND = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (stmt_node **program);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "parser.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   775

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    37,    48,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    71,    72,    79,    86,    93,
     100,   107,   114,   121,   128,   141,   154,   167,   180,   193,
     206,   219,   232,   245,   249,   250,   251,   255,   256,   260,
     261,   262,   263,   264,   265,   266,   270,   271,   272,   276,
     277,   278,   279,   283,   284,   288,   289,   290,   291,   292,
     293,   297,   298,   302,   303,   307,   308,   325,   329,   337,
     345,   356,   360,   361,   372,   376,   377,   391,   392,   396,
     397,   398,   399,   400,   401,   405,   406,   407,   411,   415,
     416,   421,   422,   434,   435,   440,   441,   453,   454,   459,
     460,   472,   477
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "THEN", "ELSE", "WHILE", "FOR",
  "IN", "DO", "FUNC", "LAMBDA", "RETURN", "BREAK", "CONTINUE", "END",
  "NONE", "IDENT", "INT", "FLOAT", "STRING", "PLUS", "MINUS", "STAR",
  "SLASH", "PERCENT", "DSTAR", "BAND", "BOR", "BXOR", "BNOT", "LAND",
  "LOR", "LNOT", "ASSIGN", "ASSIGNPLUS", "ASSIGNMINUS", "ASSIGNSTAR",
  "ASSIGNSLASH", "ASSIGNDSTAR", "ASSIGNBAND", "ASSIGNBOR", "ASSIGNBXOR",
  "EQUAL", "NEQUAL", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "RSHIFT",
  "LSHIFT", "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "DOT", "COLON", "SEMICOLON", "COMMA", "POUND", "$accept", "program",
  "stmt_list", "stmt", "expr", "logic_expr", "ulogic_expr", "rel_expr",
  "term_expr", "factor_expr", "power_expr", "binary_expr", "ubinary_expr",
  "ulen_expr", "call_expr", "funcdecl_expr", "index_expr", "ex_index_expr",
  "ref_expr", "lit_expr", "gen_expr", "paren_expr", "expr_list",
  "ident_list", "assoc_list", "assoc_item", YY_NULLPTR
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
     315,   316
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -77

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -101,    10,   446,  -101,   566,   566,    -4,     8,    15,   566,
    -101,  -101,  -101,    -7,  -101,  -101,  -101,    66,   566,   566,
      -8,   566,   566,   566,    27,   -31,   -15,  -101,  -101,    94,
     206,    62,    -6,  -101,  -101,   105,  -101,  -101,    71,  -101,
    -101,  -101,  -101,    14,     2,    82,    39,    85,    85,   -31,
     566,   566,   566,   566,   566,   566,   566,   566,   566,  -101,
     -31,   607,   -17,    69,   566,    20,  -101,   107,   -31,   470,
     644,  -101,   566,    97,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   106,   566,   566,   566,   566,   566,
     566,   566,   566,   566,  -101,  -101,   566,    85,  -101,    19,
      22,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     566,   202,  -101,  -101,  -101,  -101,  -101,  -101,   -31,   205,
     182,  -101,  -101,   206,   206,   119,   119,   119,   119,   119,
     119,    62,    62,    62,   718,   681,   681,   681,   681,   681,
     494,    90,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   114,   181,     3,    29,  -101,  -101,  -101,   566,   -31,
      88,   235,  -101,   566,  -101,  -101,  -101,  -101,  -101,   234,
      30,   566,   540,   287,   340,   393,  -101,  -101,   -31,  -101,
    -101,  -101,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,    11,
      12,    13,    83,    77,    79,    81,    82,     0,     0,     0,
      97,     0,    89,     0,     3,     5,    33,    36,    38,    45,
      48,    52,    54,    60,    62,    64,    67,    71,     0,    74,
      78,    84,    87,     0,     0,     0,     0,    93,    93,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,    61,    37,     0,     0,     0,    98,     0,    90,     0,
      63,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     4,     0,    93,    94,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,    86,    99,   100,    88,    85,    91,    92,     0,
      73,    34,    35,    46,    47,    39,    40,    41,    42,    43,
      44,    49,    50,    51,    53,    55,    56,    57,    59,    58,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,    96,     4,    95,     0,   102,
       0,    72,    65,    89,     4,     6,     8,     4,     4,     0,
       0,     0,     0,     0,     0,     0,    69,    70,   101,    66,
       7,     9,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -100,  -101,    -2,  -101,   -11,    74,  -101,   -35,
     141,   116,   117,   122,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,   -92,   -42,  -101,    81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    24,    60,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    69,   109,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   150,    43,    44,   161,   162,   110,    49,    62,    63,
       3,   105,   177,    45,   -36,   -36,    74,    75,   104,    67,
      68,    88,    89,    90,    72,    46,    73,    50,    51,    52,
      53,    54,    55,    56,    57,    58,   165,    63,   -36,   165,
     -36,   133,   134,    91,    92,   187,   165,    64,   111,   112,
     113,   114,   115,   116,   117,   118,   119,    72,    72,    73,
      73,    47,   121,   131,   132,   164,   179,   128,    48,    72,
     129,    73,   122,   166,   183,    64,   168,   184,   185,   167,
     123,   182,   167,   178,    59,    72,    71,    73,    87,   167,
     106,    68,   107,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   108,   120,   163,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   130,    76,    77,     4,   169,   174,
       5,     6,   181,   151,     7,     8,     9,    10,    11,   175,
      12,    13,    14,    15,    16,    61,    17,    78,    79,    80,
      81,    82,    83,   173,    18,    70,   124,    19,   128,     0,
     -38,   -38,   135,   136,   137,   138,   139,   140,    93,    25,
      25,   125,    72,    94,    73,    20,   180,    21,     0,    22,
       0,    68,     0,     0,   -38,    23,   -38,    25,     0,   188,
     128,    25,    25,    25,     4,     0,     0,     5,     6,     0,
       0,     7,     8,     9,    10,    11,   176,    12,    13,    14,
      15,    16,     0,    17,   145,   146,   147,   148,   149,     0,
       0,    18,     0,     0,    19,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   141,   142,   143,   144,    84,
      85,    86,    20,     0,    21,     0,    22,     4,     0,     0,
       5,     6,    23,     0,     7,     8,     9,    10,    11,   186,
      12,    13,    14,    15,    16,     0,    17,    72,   170,    73,
      72,   171,    73,     0,    18,     0,     0,    19,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,     0,    22,
       4,     0,     0,     5,     6,    23,     0,     7,     8,     9,
      10,    11,   190,    12,    13,    14,    15,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,     0,    22,     4,     0,     0,     5,     6,    23,     0,
       7,     8,     9,    10,    11,   191,    12,    13,    14,    15,
      16,     0,    17,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    21,     0,    22,     4,     0,     0,     5,
       6,    23,     0,     7,     8,     9,    10,    11,   192,    12,
      13,    14,    15,    16,     0,    17,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,     0,    22,     4,
       0,     0,     5,     6,    23,     0,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,    17,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       7,     8,     0,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,     0,     0,     0,    20,     0,    21,
      18,    22,     0,    19,     7,     8,     0,    23,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,     0,     0,
       0,    20,     0,    21,    18,    22,   126,    19,     0,     0,
     127,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,   172,    22,
       7,     8,     0,     0,   127,    23,    12,    13,    14,    15,
      16,     0,    17,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,    19,     0,     0,     7,     8,     0,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
       0,    20,     0,    21,   189,    22,    18,     0,     0,    19,
     127,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    21,
       0,    22,     0,     0,     0,     0,     0,    23,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,     0,   -60,     0,   -60,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,   -62,
       0,   -62,   -54,   -54,   -54,   -54,   -54,   -54,    88,    89,
      90,     0,   -54,   -54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
      91,    92,     0,     0,     0,     0,   -54,     0,   -54,   -52,
     -52,   -52,   -52,   -52,    87,     0,     0,     0,     0,   -52,
     -52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,   -52,     0,   -52
};

static const yytype_int16 yycheck[] =
{
       2,    93,     4,     5,   104,   105,    48,     9,    19,    17,
       0,     9,     9,    17,    31,    32,    31,    32,     4,    21,
      22,    27,    28,    29,    55,    17,    57,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    17,    17,    55,    17,
      57,    76,    77,    49,    50,    15,    17,    55,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    55,    55,    57,
      57,    53,    64,    74,    75,   107,   166,    69,    53,    55,
      72,    57,    52,    54,   174,    55,    54,   177,   178,    60,
      60,   173,    60,    54,    18,    55,    59,    57,    26,    60,
       8,    93,    53,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    17,    34,   106,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    17,    21,    22,     3,   120,     5,
       6,     7,    34,    17,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    18,    22,    43,    44,    45,
      46,    47,    48,    53,    30,    23,    65,    33,   150,    -1,
      31,    32,    78,    79,    80,    81,    82,    83,    53,   161,
     162,    54,    55,    58,    57,    51,   168,    53,    -1,    55,
      -1,   173,    -1,    -1,    55,    61,    57,   179,    -1,   181,
     182,   183,   184,   185,     3,    -1,    -1,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    88,    89,    90,    91,    92,    -1,
      -1,    30,    -1,    -1,    33,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    84,    85,    86,    87,    23,
      24,    25,    51,    -1,    53,    -1,    55,     3,    -1,    -1,
       6,     7,    61,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    55,    56,    57,
      55,    56,    57,    -1,    30,    -1,    -1,    33,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    55,
       3,    -1,    -1,     6,     7,    61,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    55,     3,    -1,    -1,     6,     7,    61,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    55,     3,    -1,    -1,     6,
       7,    61,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    55,     3,
      -1,    -1,     6,     7,    61,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    -1,    -1,    51,    -1,    53,
      30,    55,    -1,    33,    10,    11,    -1,    61,    -1,    -1,
      16,    17,    18,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    51,    -1,    53,    30,    55,    56,    33,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      10,    11,    -1,    -1,    60,    61,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    51,    -1,    53,    54,    55,    30,    -1,    -1,    33,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    55,    -1,    57,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    55,
      -1,    57,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    55,    -1,    57,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    64,     0,     3,     6,     7,    10,    11,    12,
      13,    14,    16,    17,    18,    19,    20,    22,    30,    33,
      51,    53,    55,    61,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    66,    66,    17,    17,    53,    53,    66,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    18,
      66,    74,    68,    17,    55,    86,    87,    66,    66,    84,
      75,    59,    55,    57,    31,    32,    21,    22,    43,    44,
      45,    46,    47,    48,    23,    24,    25,    26,    27,    28,
      29,    49,    50,    53,    58,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     4,     9,     8,    53,    17,    85,
      85,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      34,    66,    52,    60,    87,    54,    56,    60,    66,    66,
      17,    68,    68,    71,    71,    69,    69,    69,    69,    69,
      69,    72,    72,    72,    72,    73,    73,    73,    73,    73,
      84,    17,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    64,    64,    66,    85,    17,    54,    60,    54,    66,
      56,    56,    54,    53,     5,    15,    15,     9,    54,    64,
      66,    34,    84,    64,    64,    64,    15,    15,    66,    54,
      15,    15,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    83,    84,
      84,    84,    84,    85,    85,    85,    85,    86,    86,    86,
      86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     5,     7,     5,     7,
       2,     1,     1,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     2,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       1,     2,     1,     2,     1,     4,     6,     1,     7,     6,
       6,     1,     4,     3,     1,     4,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     3,     1,     3,     0,
       1,     2,     2,     0,     1,     2,     2,     0,     1,     2,
       2,     5,     3
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
      yyerror (&yylloc, program, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
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
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, program); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, stmt_node **program)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (program);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, stmt_node **program)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, program);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, stmt_node **program)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , program);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, program); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, stmt_node **program)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (program);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (stmt_node **program)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 33 "parser.y" /* yacc.c:1646  */
    { *program = AS_ST((yyvsp[0])); }
#line 1639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "parser.y" /* yacc.c:1646  */
    {
	stmtlist_node *cur = AS_ST((yyvsp[-1]))->stmtlist;
	while(cur->next) cur = cur->next;
	if(cur->stmt) {
        cur->next = NEW(stmtlist_node);
        cur = cur->next;
	}
    cur->stmt = (yyvsp[0]);
    cur->next = NULL;
    (yyval) = (yyvsp[-1]);
  }
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = NEW_ST();
    AS_ST((yyval))->type = ST_LIST;
    AS_ST((yyval))->stmtlist = NEW(stmtlist_node);
    AS_ST((yyval))->stmtlist->stmt = NULL;
    AS_ST((yyval))->stmtlist->next = NULL;
}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_EXPR; AS_ST((yyval))->expr = (yyvsp[0]); }
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_IFELSE; AS_ST((yyval))->ifelse = NEW(ifelse_node); AS_ST((yyval))->ifelse->cond = (yyvsp[-3]); AS_ST((yyval))->ifelse->iftrue = (yyvsp[-1]); AS_ST((yyval))->ifelse->iffalse = NULL; }
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_IFELSE; AS_ST((yyval))->ifelse = NEW(ifelse_node); AS_ST((yyval))->ifelse->cond = (yyvsp[-5]); AS_ST((yyval))->ifelse->iftrue = (yyvsp[-3]); AS_ST((yyval))->ifelse->iffalse = (yyvsp[-1]); }
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 61 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_LOOP; AS_ST((yyval))->loop = NEW(loop_node); AS_ST((yyval))->loop->cond = (yyvsp[-3]); AS_ST((yyval))->loop->loop = (yyvsp[-1]); }
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_ITER; AS_ST((yyval))->iter = NEW(iter_node); AS_ST((yyval))->iter->var = (yyvsp[-5]); AS_ST((yyval))->iter->iter = (yyvsp[-3]); AS_ST((yyval))->iter->loop = (yyvsp[-1]); }
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_RET; AS_ST((yyval))->ret = NEW(ret_node); AS_ST((yyval))->ret->ret = (yyvsp[0]); }
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_RET; AS_ST((yyval))->ret = NEW(ret_node); AS_ST((yyval))->ret->ret = NULL; }
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_BREAK; }
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_ST(); SET_LOC(AS_ST((yyval)), (yyloc)); AS_ST((yyval))->type = ST_CONT; }
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_ASSIGN; AS_EX((yyval))->assign = NEW(assign_node); AS_EX((yyval))->assign->ident = (yyvsp[-2]); AS_EX((yyval))->assign->value = (yyvsp[0]); }
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_ADD, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_SUB, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_MUL, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
    MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_DIV, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_POW, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 107 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_BAND, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 114 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_BOR, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_ASSIGN;
	AS_EX((yyval))->assign = NEW(assign_node);
	AS_EX((yyval))->assign->ident = (yyvsp[-2]);
	MAKE_REF_BINOP(AS_EX((yyval))->assign->value, OP_BXOR, (yyvsp[-2]), (yyvsp[0]));
  }
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 128 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    AS_EX((yyval))->setindex->value = (yyvsp[0]);
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_ADD, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_SUB, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 167 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_MUL, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 180 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_DIV, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 193 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_POW, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 206 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_BAND, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 219 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_BOR, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 232 "parser.y" /* yacc.c:1646  */
    {
    if(AS_EX((yyvsp[-2]))->type != EX_INDEX) {
        yyerror("Assigning to non-indexing expression");
        YYABORT;
    }
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_SETINDEX;
    AS_EX((yyval))->setindex = NEW(setindex_node);
    AS_EX((yyval))->setindex->expr = ex_copy(AS_EX((yyvsp[-2]))->index->expr);
    AS_EX((yyval))->setindex->index = ex_copy(AS_EX((yyvsp[-2]))->index->index);
    MAKE_IDX_BINOP(AS_EX((yyval))->setindex->value, OP_BXOR, AS_EX((yyvsp[-2]))->index->expr, AS_EX((yyvsp[-2]))->index->index, (yyvsp[0]));
    ex_free(AS_EX((yyvsp[-2])));
}
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_LAND; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_LOR; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_UNOP; AS_EX((yyval))->unop = NEW(unop_node); AS_EX((yyval))->unop->type = OP_LNOT; AS_EX((yyval))->unop->expr = (yyvsp[0]); }
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_EQUAL; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_NEQUAL; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_LESS; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_GREATER; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_LESSEQ; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_GREATEREQ; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_ADD; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_SUB; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_MUL; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 277 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_DIV; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_MOD; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_POW; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_BAND; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_BOR; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_BXOR; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_LSHIFT; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_BINOP; AS_EX((yyval))->binop = NEW(binop_node); AS_EX((yyval))->binop->type = OP_RSHIFT; AS_EX((yyval))->binop->left = (yyvsp[-2]); AS_EX((yyval))->binop->right = (yyvsp[0]); }
#line 2153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_UNOP; AS_EX((yyval))->unop = NEW(unop_node); AS_EX((yyval))->unop->type = OP_BNOT; AS_EX((yyval))->unop->expr = (yyvsp[0]); }
#line 2165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_UNOP; AS_EX((yyval))->unop = NEW(unop_node); AS_EX((yyval))->unop->type = OP_LEN; AS_EX((yyval))->unop->expr = (yyvsp[0]); }
#line 2177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_CALL; AS_EX((yyval))->call = NEW(call_node); AS_EX((yyval))->call->expr = (yyvsp[-3]); AS_EX((yyval))->call->args = (yyvsp[-1]); }
#line 2189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 308 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_CALL;
	AS_EX((yyval))->call = NEW(call_node);
	AS_EX((yyval))->call->expr = NEW_EX();
	AS_EX((yyval))->call->expr->type = EX_INDEX;
	AS_EX((yyval))->call->expr->index = NEW(index_node);
	AS_EX((yyval))->call->expr->index->expr = (yyvsp[-5]);
	AS_EX((yyval))->call->expr->index->index = NEW_EX();
	AS_EX((yyval))->call->expr->index->index->type = EX_LIT;
	AS_EX((yyval))->call->expr->index->index->lit = NEW(lit_node);
	AS_EX((yyval))->call->expr->index->index->lit->type = LIT_STRING;
	AS_EX((yyval))->call->expr->index->index->lit->str = (yyvsp[-3]);
	AS_EX((yyval))->call->args = NEW(exprlist_node);
	AS_EX((yyval))->call->args->expr = ex_copy((yyvsp[-5]));
	AS_EX((yyval))->call->args->next = (yyvsp[-1]);
}
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_FUNCDECL;
	AS_EX((yyval))->funcdecl = NEW(funcdecl_node);
	AS_EX((yyval))->funcdecl->name = (yyvsp[-5]);
	AS_EX((yyval))->funcdecl->args = (yyvsp[-3]);
	AS_EX((yyval))->funcdecl->body = (yyvsp[-1]);
}
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 337 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_FUNCDECL;
	AS_EX((yyval))->funcdecl = NEW(funcdecl_node);
	AS_EX((yyval))->funcdecl->name = NULL;
	AS_EX((yyval))->funcdecl->args = (yyvsp[-3]);
	AS_EX((yyval))->funcdecl->body = (yyvsp[-1]);
}
#line 2243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 345 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW_EX();
	AS_EX((yyval))->type = EX_FUNCDECL;
	AS_EX((yyval))->funcdecl = NEW(funcdecl_node);
	AS_EX((yyval))->funcdecl->name = NULL;
	AS_EX((yyval))->funcdecl->args = (yyvsp[-3]);
	AS_EX((yyval))->funcdecl->body = NEW_ST();
	AS_EX((yyval))->funcdecl->body->type = ST_RET;
	AS_EX((yyval))->funcdecl->body->ret = NEW(ret_node);
	AS_EX((yyval))->funcdecl->body->ret->ret = (yyvsp[-1]);
}
#line 2259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_INDEX; AS_EX((yyval))->index = NEW(index_node); AS_EX((yyval))->index->expr = (yyvsp[-3]); AS_EX((yyval))->index->index = (yyvsp[-1]); }
#line 2271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 361 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_INDEX;
    AS_EX((yyval))->index = NEW(index_node);
    AS_EX((yyval))->index->expr = (yyvsp[-2]);
    AS_EX((yyval))->index->index = NEW_EX();
    AS_EX((yyval))->index->index->type = EX_LIT;
    AS_EX((yyval))->index->index->lit = NEW(lit_node);
    AS_EX((yyval))->index->index->lit->type = LIT_STRING;
    AS_EX((yyval))->index->index->lit->str = (yyvsp[0]);
}
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_INDEX; AS_EX((yyval))->index = NEW(index_node); AS_EX((yyval))->index->expr = (yyvsp[-3]); AS_EX((yyval))->index->index = (yyvsp[-1]); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 377 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = NEW_EX();
    AS_EX((yyval))->type = EX_INDEX;
    AS_EX((yyval))->index = NEW(index_node);
    AS_EX((yyval))->index->expr = (yyvsp[-2]);
    AS_EX((yyval))->index->index = NEW_EX();
    AS_EX((yyval))->index->index->type = EX_LIT;
    AS_EX((yyval))->index->index->lit = NEW(lit_node);
    AS_EX((yyval))->index->index->lit->type = LIT_STRING;
    AS_EX((yyval))->index->index->lit->str = (yyvsp[0]);
}
#line 2315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_REF; AS_EX((yyval))->ref = NEW(ref_node); AS_EX((yyval))->ref->ident = (yyvsp[0]); }
#line 2321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_LIT; AS_EX((yyval))->lit = NEW(lit_node); AS_EX((yyval))->lit->type = LIT_INT; AS_EX((yyval))->lit->ival = *AS((yyvsp[0]), long); free((yyvsp[0])); }
#line 2333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 397 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_LIT; AS_EX((yyval))->lit = NEW(lit_node); AS_EX((yyval))->lit->type = LIT_INT; AS_EX((yyval))->lit->ival = -(*AS((yyvsp[0]), long)); free((yyvsp[0])); }
#line 2339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 398 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_LIT; AS_EX((yyval))->lit = NEW(lit_node); AS_EX((yyval))->lit->type = LIT_FLOAT; AS_EX((yyval))->lit->fval = *AS((yyvsp[0]), double); free((yyvsp[0])); }
#line 2345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_LIT; AS_EX((yyval))->lit = NEW(lit_node); AS_EX((yyval))->lit->type = LIT_STRING; AS_EX((yyval))->lit->str = (yyvsp[0]); }
#line 2351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_LIT; AS_EX((yyval))->lit = NEW(lit_node); AS_EX((yyval))->lit->type = LIT_NONE; }
#line 2357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 405 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_LISTGEN; AS_EX((yyval))->listgen = NEW(listgen_node); AS_EX((yyval))->listgen->list = (yyvsp[-1]); }
#line 2369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval) = NEW_EX(); AS_EX((yyval))->type = EX_MAPGEN; AS_EX((yyval))->mapgen = NEW(mapgen_node); AS_EX((yyval))->mapgen->map = (yyvsp[-1]); }
#line 2375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 2393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW(exprlist_node);
	AS((yyval), exprlist_node)->expr = (yyvsp[0]);
	AS((yyval), exprlist_node)->next = NULL;
}
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 422 "parser.y" /* yacc.c:1646  */
    {
	exprlist_node *cur = (yyvsp[-1]);
	while(cur->next) cur = cur->next;
	cur->next = NEW(exprlist_node);
	cur = cur->next;
	cur->expr = (yyvsp[0]);
	cur->next = NULL;
	(yyval) = (yyvsp[-1]);
}
#line 2423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 434 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 2429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 435 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW(identlist_node);
	AS((yyval), identlist_node)->ident = (yyvsp[0]);
	AS((yyval), identlist_node)->next = NULL;
}
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 441 "parser.y" /* yacc.c:1646  */
    {
	identlist_node *cur = (yyvsp[-1]);
	while(cur->next) cur = cur->next;
	cur->next = NEW(identlist_node);
	cur = cur->next;
	cur->ident = (yyvsp[0]);
	cur->next = NULL;
	(yyval) = (yyvsp[-1]);
}
#line 2459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 2465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 454 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW(assoclist_node);
	AS((yyval), assoclist_node)->item = (yyvsp[0]);
	AS((yyval), assoclist_node)->next = NULL;
}
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 460 "parser.y" /* yacc.c:1646  */
    {
	assoclist_node *cur = (yyvsp[-1]);
	while(cur->next) cur = cur->next;
	cur->next = NEW(assoclist_node);
	cur = cur->next;
	cur->item = (yyvsp[0]);
	cur->next = NULL;
	(yyval) = (yyvsp[-1]);
}
#line 2495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 472 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW(associtem_node);
	AS((yyval), associtem_node)->key = (yyvsp[-3]);
	AS((yyval), associtem_node)->value = (yyvsp[0]);
}
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 477 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NEW(associtem_node);
	AS((yyval), associtem_node)->key = NEW_EX();
	AS((yyval), associtem_node)->key->type = EX_LIT;
	AS((yyval), associtem_node)->key->lit = NEW(lit_node);
	AS((yyval), associtem_node)->key->lit->type = LIT_STRING;
	AS((yyval), associtem_node)->key->lit->str = (yyvsp[-2]);
	AS((yyval), associtem_node)->value = (yyvsp[0]);
}
#line 2519 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2523 "parser.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, program, YY_("syntax error"));
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
        yyerror (&yylloc, program, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, program);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, program);
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
#line 488 "parser.y" /* yacc.c:1906  */


// TODO
