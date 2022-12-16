
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
#line 2 "finalfile.y"

#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>
extern yylineno;


    char variable[1000][1000];
    int store[1000];
	char store_str[1000][1000];  
	float store_float[1000]; 
	int type_of_id[1000];

	int last_point = 1,f=1;
	int casedefault=0,casevar=0;
    /*--------Function parm section----------*/
	char param[100][100];
	int cnt_func = 1;
    int func_here(char *s){
 		int i;
        for(i=1; i<cnt_func; i++){
            if(strcmp(param[i],s) == 0)return 1;
        }return 0;
	}

    int assign_func(char *s)
    {
        strcpy(param[cnt_func],s); cnt_func++;return 1;
    }


    int isdeclared(char *s){
        int i;
        for(i=1; i<last_point; i++){
            if(strcmp(variable[i],s) == 0)return 1;
        }return 0;
    }
    
    int assign(char *s)
    {
        if(isdeclared(s)==1)
            return 0;
        strcpy(variable[last_point],s); store[last_point]=0;last_point++;return 1;
    }

    int setval(char *s,int val)
    {
        if(isdeclared(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        store[ok]=val;
        return 1;
    }

    int getval(char *s)
    {

        int pos=-1;
        int i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
    }
    




/* Line 189 of yacc.c  */
#line 157 "finalfile.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     NUMBER = 258,
     VARIABLE = 259,
     INTEGER = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONGINT = 263,
     CHAR = 264,
     STRING = 265,
     BOOL = 266,
     SWITCH = 267,
     IF = 268,
     ELSEIF = 269,
     ELSE = 270,
     POW = 271,
     BREAK = 272,
     CONTINUE = 273,
     DEFAULT = 274,
     CASE = 275,
     SIZE = 276,
     VOID = 277,
     CNST = 278,
     RETURN = 279,
     COM = 280,
     FULL = 281,
     ADD = 282,
     SUB = 283,
     MUL = 284,
     DIV = 285,
     NOT = 286,
     EQ = 287,
     AS = 288,
     GG = 289,
     GE = 290,
     LL = 291,
     LE = 292,
     NE = 293,
     FOR = 294,
     WHILE = 295,
     INC = 296,
     DEC = 297,
     INCC = 298,
     DECC = 299,
     MULA = 300,
     DIVA = 301,
     MOD = 302,
     LAND = 303,
     LOR = 304,
     COLON = 305,
     ENDED = 306,
     VALUE = 307,
     HEADER = 308,
     START = 309,
     DEF = 310,
     IMPORT = 311,
     NL = 312,
     IFX = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 86 "finalfile.y"

    char *ch;
	char c;
    int dim;
    int me;
	double floating;



/* Line 214 of yacc.c  */
#line 261 "finalfile.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 273 "finalfile.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNRULES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    73,     2,     2,
      60,    61,    70,    68,    62,    69,    67,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      55,    56,    57,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    16,    17,    26,    30,    32,
      33,    35,    38,    40,    44,    46,    48,    50,    54,    56,
      59,    61,    63,    65,    68,    74,    79,    87,    99,   117,
     135,   149,   163,   171,   173,   174,   181,   188,   190,   192,
     196,   200,   204,   208,   212,   216,   220,   224,   228,   232
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,    76,    77,    54,    58,    79,    59,    -1,
      -1,    56,    36,    53,    34,    -1,    -1,    55,     4,    60,
      78,    61,    58,    79,    59,    -1,    78,    62,     4,    -1,
       4,    -1,    -1,     3,    -1,    79,    83,    -1,    80,    -1,
      81,    82,    51,    -1,     5,    -1,     6,    -1,    10,    -1,
      82,    62,     4,    -1,     4,    -1,    83,    84,    -1,    84,
      -1,    51,    -1,    80,    -1,    87,    51,    -1,    52,    60,
       4,    61,    51,    -1,     4,    63,    87,    51,    -1,    13,
      64,    87,    65,    58,    83,    59,    -1,    13,    64,    87,
      65,    58,    83,    59,    15,    58,    83,    59,    -1,    39,
      64,     4,    63,     3,    67,     4,    36,     3,    67,     4,
      43,     3,    65,    58,    83,    59,    -1,    39,    64,     4,
      63,     3,    67,     4,    34,     3,    67,     4,    44,     3,
      65,    58,    83,    59,    -1,    40,    64,     4,    36,     3,
      67,     4,    43,     3,    65,    58,    83,    59,    -1,    40,
      64,     4,    34,     3,    67,     4,    44,     3,    65,    58,
      83,    59,    -1,    12,    64,    85,    65,    58,    86,    59,
      -1,    87,    -1,    -1,    86,    87,    50,    58,    83,    59,
      -1,    86,    19,    50,    58,    83,    59,    -1,     3,    -1,
       4,    -1,    87,    68,    87,    -1,    87,    69,    87,    -1,
      87,    70,    87,    -1,    87,    71,    87,    -1,    87,    72,
      87,    -1,    87,    73,    87,    -1,    60,    87,    61,    -1,
      87,    36,    87,    -1,    87,    34,    87,    -1,    87,    37,
      87,    -1,    87,    35,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   114,   117,   118,   123,   131,   139,   153,
     154,   156,   158,   163,   168,   170,   172,   177,   185,   196,
     198,   203,   205,   207,   213,   226,   239,   244,   257,   266,
     277,   286,   296,   301,   309,   311,   320,   333,   335,   346,
     351,   356,   362,   375,   378,   381,   383,   386,   389,   392
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "INTEGER", "FLOAT",
  "DOUBLE", "LONGINT", "CHAR", "STRING", "BOOL", "SWITCH", "IF", "ELSEIF",
  "ELSE", "POW", "BREAK", "CONTINUE", "DEFAULT", "CASE", "SIZE", "VOID",
  "CNST", "RETURN", "COM", "FULL", "ADD", "SUB", "MUL", "DIV", "NOT", "EQ",
  "AS", "GG", "GE", "LL", "LE", "NE", "FOR", "WHILE", "INC", "DEC", "INCC",
  "DECC", "MULA", "DIVA", "MOD", "LAND", "LOR", "COLON", "ENDED", "VALUE",
  "HEADER", "START", "DEF", "IMPORT", "NL", "'{'", "'}'", "'('", "')'",
  "','", "'='", "'['", "']'", "IFX", "'.'", "'+'", "'-'", "'*'", "'/'",
  "'^'", "'%'", "$accept", "program", "import", "func", "param", "lines",
  "declare", "type", "id", "codes", "after", "Exp_case", "code",
  "expression", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   123,   125,
      40,    41,    44,    61,    91,    93,   313,    46,    43,    45,
      42,    47,    94,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    76,    76,    77,    78,    78,    79,
      79,    79,    79,    80,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     4,     0,     8,     3,     1,     0,
       1,     2,     1,     3,     1,     1,     1,     3,     1,     2,
       1,     1,     1,     2,     5,     4,     7,    11,    17,    17,
      13,    13,     7,     1,     0,     6,     6,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     4,     0,     9,     8,     0,    10,    14,    15,    16,
       0,    12,     0,     0,     0,    37,    38,     0,     0,     0,
       0,    21,     0,     2,     0,    22,    11,    20,     0,    18,
       0,     9,     7,     0,     0,     0,     0,     0,     0,    38,
       0,    19,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     0,    33,     0,
       0,     0,     0,    45,    47,    49,    46,    48,    39,    40,
      41,    42,    43,    44,    17,     6,    25,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,    32,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    35,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    30,     0,     0,     0,
       0,     0,     0,    29,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,    15,    20,    35,    22,    40,    36,
      37,    67,    99,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -37
static const yytype_int16 yypact[] =
{
     -19,   -22,    23,   -25,   -14,   -37,    40,    -7,    19,    -3,
       2,   -37,    61,    46,   -37,    11,   -37,   -37,   -37,   -37,
       3,   -37,    66,    20,    78,   -37,    22,    32,    33,    34,
      36,   -37,    26,   -37,     1,   -37,   243,   -37,   229,   -37,
     -16,    46,   -37,     1,     1,     1,    99,   100,   103,   -37,
     250,   -37,     1,     1,     1,     1,   -37,     1,     1,     1,
       1,     1,     1,   -37,   104,    28,   256,    44,   296,   278,
      49,    14,    52,   -37,   318,   296,   318,   296,   296,   296,
     296,   296,   296,   296,   -37,   -37,   -37,    56,    63,   122,
     129,   130,    83,   -37,   243,    72,    76,    79,   -37,    -1,
      71,   143,   146,   147,   102,   -37,   302,   140,    35,   112,
     115,   101,   106,   110,   154,   172,   173,   174,   243,   243,
     243,   119,   123,   117,   128,    89,   114,   132,   185,   190,
     137,   141,   -37,   -37,   -37,   156,   155,   243,   243,   198,
     199,   157,   175,   142,   160,   -37,   -37,   153,   161,   243,
     243,   200,   218,   -37,   -37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -37,   -37,   -37,   179,     4,   -37,   -37,   124,
     -36,   -37,   -37,   -33
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      51,    50,    25,    49,    25,    49,    25,    26,    17,    18,
      66,    68,    69,    19,     4,    27,    28,    21,   104,    74,
      75,    76,    77,     5,    78,    79,    80,    81,    82,    83,
       6,    25,    26,    17,    18,    63,    -5,     1,    19,     8,
      27,    28,    29,    30,     9,    21,    64,    10,    90,    16,
      91,    17,    18,    11,    31,    32,    19,    12,   105,    34,
      13,    34,    33,    34,    51,    14,   106,    29,    30,   114,
      39,   115,    23,    24,    25,    26,    17,    18,    41,    31,
      32,    19,    42,    27,    28,    43,    48,    85,    34,    51,
      51,    51,    25,    26,    17,    18,    44,    45,    46,    19,
      47,    27,    28,    70,    71,    51,    51,    72,    84,    87,
      29,    30,    89,    92,    93,    51,    51,    25,    26,    17,
      18,    94,    31,    32,    19,    95,    27,    28,    29,    30,
     107,    34,    96,    97,    98,    25,    26,    17,    18,   101,
      31,    32,    19,   102,    27,    28,   103,   108,   132,    34,
     109,   110,   111,    29,    30,   113,   116,   121,   117,   118,
      25,    26,    17,    18,   119,    31,    32,    19,   120,    27,
      28,    29,    30,   133,    34,   122,   123,   124,    25,    26,
      17,    18,   130,    31,    32,    19,   128,    27,    28,   135,
     129,   134,    34,   131,   136,   137,    29,    30,   140,   138,
     139,   143,   144,    25,    26,    17,    18,   147,    31,    32,
      19,   149,    27,    28,    29,    30,   145,    34,   100,   150,
      65,    25,    26,    17,    18,   148,    31,    32,    19,     0,
      27,    28,     0,     0,   146,    34,     0,     0,     0,    29,
      30,     0,   125,   126,   127,     0,    25,    26,    17,    18,
       0,    31,    32,    19,     0,    27,    28,    29,    30,   153,
      34,   141,   142,    52,    53,    54,    55,     0,     0,    31,
      32,     0,     0,   151,   152,     0,     0,   154,    34,     0,
      56,     0,    29,    30,    52,    53,    54,    55,     0,     0,
      52,    53,    54,    55,    31,    32,     0,    57,    58,    59,
      60,    61,    62,    34,     0,     0,     0,    86,     0,     0,
       0,    73,    52,    53,    54,    55,     0,     0,    57,    58,
      59,    60,    61,    62,    57,    58,    59,    60,    61,    62,
      52,    53,    54,    55,     0,     0,    52,    53,    54,    55,
       0,     0,     0,    88,     0,     0,    57,    58,    59,    60,
      61,    62,   112,    53,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    61,    62,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      61,    62
};

static const yytype_int16 yycheck[] =
{
      36,    34,     3,     4,     3,     4,     3,     4,     5,     6,
      43,    44,    45,    10,    36,    12,    13,    13,    19,    52,
      53,    54,    55,     0,    57,    58,    59,    60,    61,    62,
      55,     3,     4,     5,     6,    51,    55,    56,    10,    53,
      12,    13,    39,    40,     4,    41,    62,    54,    34,     3,
      36,     5,     6,    34,    51,    52,    10,    60,    59,    60,
      58,    60,    59,    60,   100,     4,    99,    39,    40,    34,
       4,    36,    61,    62,     3,     4,     5,     6,    58,    51,
      52,    10,     4,    12,    13,    63,    60,    59,    60,   125,
     126,   127,     3,     4,     5,     6,    64,    64,    64,    10,
      64,    12,    13,     4,     4,   141,   142,     4,     4,    65,
      39,    40,    63,    61,    58,   151,   152,     3,     4,     5,
       6,    58,    51,    52,    10,     3,    12,    13,    39,    40,
      59,    60,     3,     3,    51,     3,     4,     5,     6,    67,
      51,    52,    10,    67,    12,    13,    67,     4,    59,    60,
       4,     4,    50,    39,    40,    15,    44,     3,    43,    58,
       3,     4,     5,     6,    58,    51,    52,    10,    58,    12,
      13,    39,    40,    59,    60,     3,     3,     3,     3,     4,
       5,     6,    65,    51,    52,    10,    67,    12,    13,     4,
      67,    59,    60,    65,     4,    58,    39,    40,    43,    58,
      44,     3,     3,     3,     4,     5,     6,    65,    51,    52,
      10,    58,    12,    13,    39,    40,    59,    60,    94,    58,
      41,     3,     4,     5,     6,    65,    51,    52,    10,    -1,
      12,    13,    -1,    -1,    59,    60,    -1,    -1,    -1,    39,
      40,    -1,   118,   119,   120,    -1,     3,     4,     5,     6,
      -1,    51,    52,    10,    -1,    12,    13,    39,    40,    59,
      60,   137,   138,    34,    35,    36,    37,    -1,    -1,    51,
      52,    -1,    -1,   149,   150,    -1,    -1,    59,    60,    -1,
      51,    -1,    39,    40,    34,    35,    36,    37,    -1,    -1,
      34,    35,    36,    37,    51,    52,    -1,    68,    69,    70,
      71,    72,    73,    60,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    61,    34,    35,    36,    37,    -1,    -1,    68,    69,
      70,    71,    72,    73,    68,    69,    70,    71,    72,    73,
      34,    35,    36,    37,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    50,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    75,    76,    36,     0,    55,    77,    53,     4,
      54,    34,    60,    58,     4,    78,     3,     5,     6,    10,
      79,    80,    81,    61,    62,     3,     4,    12,    13,    39,
      40,    51,    52,    59,    60,    80,    83,    84,    87,     4,
      82,    58,     4,    63,    64,    64,    64,    64,    60,     4,
      87,    84,    34,    35,    36,    37,    51,    68,    69,    70,
      71,    72,    73,    51,    62,    79,    87,    85,    87,    87,
       4,     4,     4,    61,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,     4,    59,    51,    65,    65,    63,
      34,    36,    61,    58,    58,     3,     3,     3,    51,    86,
      83,    67,    67,    67,    19,    59,    87,    59,     4,     4,
       4,    50,    50,    15,    34,    36,    44,    43,    58,    58,
      58,     3,     3,     3,     3,    83,    83,    83,    67,    67,
      65,    65,    59,    59,    59,     4,     4,    58,    58,    44,
      43,    83,    83,     3,     3,    59,    59,    65,    65,    58,
      58,    83,    83,    59,    59
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
#line 113 "finalfile.y"
    {printf("\nProgram successfully ended\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 117 "finalfile.y"
    { printf("\nHeader File Found!\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 124 "finalfile.y"
    {
		printf("\nFUNC Declared!\n");		
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 132 "finalfile.y"
    {
   		 if(func_here((yyvsp[(3) - (3)].ch))==1)
      			  printf("\nparam already exists!");
   		 else
    			    assign_func((yyvsp[(3) - (3)].ch));
		;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 140 "finalfile.y"
    {
		   if(func_here((yyvsp[(1) - (1)].ch))==1)
      			 printf("\nparam already exists!");
   		 else
      				  assign_func((yyvsp[(1) - (1)].ch));
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 163 "finalfile.y"
    { printf("\nValid declaration!\n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 178 "finalfile.y"
    {
   		 if(isdeclared((yyvsp[(3) - (3)].ch))==1)
      			  printf("\nDouble Declaration!");
   		 else
    			    assign((yyvsp[(3) - (3)].ch));
		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 186 "finalfile.y"
    {
		   if(isdeclared((yyvsp[(1) - (1)].ch))==1)
      			  printf("\nDouble Declaration! \n");
   		 else
      				  assign((yyvsp[(1) - (1)].ch));
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 208 "finalfile.y"
    {
 		     (yyval.dim)=(yyvsp[(1) - (2)].me);
 		/*   printf("\nValue of expression: %d at line %d\n",$1,yylineno); */
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 214 "finalfile.y"
    {
			if(isdeclared((yyvsp[(3) - (5)].ch))==0)
			{
				printf("Can't print, Value is not declared.\n");
			}
			else 
			{
				printf("\nValue of the variable %s:  %d\t\n",(yyvsp[(3) - (5)].ch), store[getval((yyvsp[(3) - (5)].ch))]);
			}
 		   
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 227 "finalfile.y"
    {
 		    if(setval((yyvsp[(1) - (4)].ch),(yyvsp[(3) - (4)].me))==0)
  		 	{
  		    	(yyval.dim)=0;
				printf("\nNot declared\n");
   			}
    		else
    		{
      			(yyval.dim)=(yyvsp[(3) - (4)].me);
   			}
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 240 "finalfile.y"
    {
   			 printf("\nCondition is true in IF\n");
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 245 "finalfile.y"
    {
 		  f=f+1;
  		  int p=0;
  		  if((yyvsp[(3) - (11)].me))
   			 {
      			  printf("\nCondition is true in IF\n");
        			p=1;
    		 }
    		if(p==0)
      		  printf("\nCondition is false in IF\n");
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 258 "finalfile.y"
    {
 		    int i;
			for(i= (yyvsp[(5) - (17)].dim) ; i< (yyvsp[(9) - (17)].dim) ; i+=(yyvsp[(13) - (17)].dim))
			{
				printf("Value of i in for loop increasing %d\n",i);
			} printf("\n");	 			    
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 267 "finalfile.y"
    {
 		    int i;
			for(i= (yyvsp[(5) - (17)].dim) ; i>= (yyvsp[(9) - (17)].dim) ; i-=(yyvsp[(13) - (17)].dim))
			{
				printf("Value of i in for loop Decreasing %d\n",i);
			}printf("\n");		    
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 278 "finalfile.y"
    {
			int a = store[getval((yyvsp[(3) - (13)].ch))], inc = (yyvsp[(9) - (13)].dim);
			while((a+=inc)< (yyvsp[(5) - (13)].dim))
			{
				printf("While loop here increasing; value of variable %s : %d\n", (yyvsp[(3) - (13)].ch), a);
			}
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 287 "finalfile.y"
    {
			int a = store[getval((yyvsp[(3) - (13)].ch))], inc = (yyvsp[(9) - (13)].dim);
			while((a-=inc)> (yyvsp[(5) - (13)].dim))
			{
				printf("While loop here decreasing; value of variable %s : %d\n", (yyvsp[(3) - (13)].ch), a);
			}
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 302 "finalfile.y"
    {
    		casedefault = 0;
    		casevar = (yyvsp[(1) - (1)].me);
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 312 "finalfile.y"
    {
    		if((yyvsp[(2) - (6)].me) == casevar)
    			{
        			printf("\nExecuted %d\n",(yyvsp[(2) - (6)].me));
        			casedefault = 1;
   			 }
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 321 "finalfile.y"
    {
  		  if(casedefault == 0)
   			 {
    			    casedefault = 1;
     			   printf("\nDefault Block executed\n");
    			}
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 333 "finalfile.y"
    { (yyval.me) = (yyvsp[(1) - (1)].dim);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 336 "finalfile.y"
    {
  		  if( isdeclared((yyvsp[(1) - (1)].ch)) == 0)
   			 {
    			    (yyval.me)=0;
     			   printf("\nNot declaredd!\n");
   			 }
    		else
       			 (yyval.me)=store[getval((yyvsp[(1) - (1)].ch))];
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 347 "finalfile.y"
    { 	
			(yyval.me) = (yyvsp[(1) - (3)].me) + (yyvsp[(3) - (3)].me); /*printf("\nAddition value %d\n",$$);*/
		 ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 352 "finalfile.y"
    {
  			(yyval.me) = (yyvsp[(1) - (3)].me) - (yyvsp[(3) - (3)].me); /*printf("\nSubtraction value %d\n",$$);*/
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 357 "finalfile.y"
    {
 			   (yyval.me) = (yyvsp[(1) - (3)].me) * (yyvsp[(3) - (3)].me);
 			   /*printf("\nMultiplication value %d\n",$$);*/
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 363 "finalfile.y"
    { 	if((yyvsp[(3) - (3)].me))
 			   {
  			      (yyval.me) = (yyvsp[(1) - (3)].me) / (yyvsp[(3) - (3)].me);
     				   /*printf("\nDivision value %d\n",$$);*/
  			  }
   			 else
    			{
      				 (yyval.me) = 0;
       				 printf("\nDivision by zero\t");
    			}
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 376 "finalfile.y"
    { 	(yyval.me)=pow((yyvsp[(1) - (3)].me),(yyvsp[(3) - (3)].me)); /*printf("\nPower value %d\n",$$);*/;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 379 "finalfile.y"
    {	 (yyval.me)=(yyvsp[(1) - (3)].me) % (yyvsp[(3) - (3)].me); /*printf("\nRemainder value %d\n",$$);*/;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 382 "finalfile.y"
    { (yyval.me) = (yyvsp[(2) - (3)].me) ;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 384 "finalfile.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) < (yyvsp[(3) - (3)].me); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 387 "finalfile.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) > (yyvsp[(3) - (3)].me); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 390 "finalfile.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) <= (yyvsp[(3) - (3)].me); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 393 "finalfile.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) >= (yyvsp[(3) - (3)].me); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1988 "finalfile.tab.c"
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
#line 398 "finalfile.y"




int yyerror(char *s)
{
    printf( "%s\n %d", s, yylineno);
}









