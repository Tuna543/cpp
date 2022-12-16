%{
#include "finalfile.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int varindex(char *var);
extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern FILE *yyout;
yylineno=1;

%}

IDENTIFIER [a-zA-Z][a-zA-Z0-9]*[_]?[a-zA-Z0-9]*
DIGIT [0-9]
header					"import"[ ]*+[^\n]+[.h][ ]*



%%
['](.*|\n)*[']  printf("\nComment detected\n");


[[]        return '['; 
[]]        return ']'; 
[{]        return '{'; 
[}]        return '}'; 
[(]        return '('; 
[)]        return ')';
[;]        { return ENDED;}

"main"             return START;
"Def"            return DEF;
"value"                         return VALUE;
"integer"                             return INTEGER;
"rational"                             return FLOAT;
"big_rational"                             return DOUBLE;
"big"                             return LONGINT;
"character"                             return CHAR;
"string"                             return STRING;
"flag"                             return BOOL;

"shift"                              return SWITCH;
"isit"                            return IF;
"elseisit"                        return ELSEIF;
"finalis"                           return ELSE;
"exp"                           return POW;
"halt"                              return BREAK;
"escape"                              return CONTINUE;
"none"                              return DEFAULT;
"shiftcase"                              return CASE;
"expanse"                              return SIZE;
"nothing"                              return VOID;
"persistent"                              return CNST;
"giveback"                              return RETURN;

"^"     						return '^'; 
"%"      						return '%'; 
":"                             return COLON;
","                              return ',';
"."                                return '.';
"+"                                 return '+';
"-"                                 return '-';
"++"								return INC;
"--"								return DEC;
"+="								return INCC;
"-="								return DECC;
"*"                                 return '*';
"/"                                 return '/';
"!"                                 return NOT;
"=="                               return EQ; 
"="                               return '=';
">"                                  return GG;
">="                                 return GE;
"<"                                  return LL;
"<="                                 return LE;
"!="                            return NE;






"run"                                return FOR;
"repeat"                                   return WHILE;

"inc"                           return INC;
"dec"                           return DEC;
"incc"                           return INCC;
"decc"                           return DECC;
"mula"                           return MULA;
"diva"                           return DIVA;
"mod"                                 return MOD;
"land"                                 return LAND;
"lor"                                  return LOR;

"#include" { return IMPORT; }
{IDENTIFIER}".h" { return HEADER; }

[\n]    {yylineno++;}

{IDENTIFIER} {
			yylval.ch = strdup(yytext);
 			return VARIABLE;
 			}

"-"?{DIGIT}+ {
	yylval.dim=atoi(yytext);
	return NUMBER;
	}

"-"?{DIGIT}+?"."{DIGIT}+ {
	yylval.dim=atoi(yytext);
	return NUMBER;
	}



%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = freopen("in.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();

}
