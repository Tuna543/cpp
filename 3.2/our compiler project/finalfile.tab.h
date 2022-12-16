
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 86 "finalfile.y"

    char *ch;
	char c;
    int dim;
    int me;
	double floating;



/* Line 1676 of yacc.c  */
#line 120 "finalfile.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


