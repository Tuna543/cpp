addheaders   "#include<stdio.h>"|"#include<bits/stdc++.h>"
chief     "main"

out "printf"
in "scanf"
firstbracket  [()]
secondbracket  [""]
thirdbracket  [[]]

integer "int"
rational "float"
big_rational "double"
big "long long int"
character "char"
str "string"
flag "bool"

shift "switch"
isit "if"
elseisit "else if"
finalis "else"
exp "pow"
halt     "break"
escape  "continue"
none "default"
shiftcase "case"
expanse "size"
nothing "void"
persistent "const"
giveback    "return"

numbers    [0-9]
alphabets   [a-zA-Z]
com	[,]
full	[;]
add         [+]
sub         [-]
mul         [*]
div        [/]
eq       "=="
as       [=]
gg          [>]
ge         ">="
ll          [<]
le         "<="
dd        "%d"
ff       "%f"
lld     "%lld"
declare "define"
nl "\n"
take       "&""alphabets"+"numbers"*

run       ("for")("(")
repeat       ("while")("(")
do-repeat ("do while")("(")
arr       "alphabets"+("[")"numbers"+("]")

inc   "++"
dec   "--"
incc   "+="
decc   "-="
mula   "*="
diva   "/="
mod         "%"
ne    "!="
land         "&&"
lor          "||"
not         "!"
%{
	

%}
%%

"addheaders"                              printf("#include<stdio.h>");
"chief"                                printf("main");


"none"                                printf("default");
"in"                         printf("scanf");
"out"                         printf("printf");
"{"						printf("{");
"}"						printf("}");
"("						printf("(");
")"						printf(")");
"["						printf("[");
"]"						printf("]");

"integer"                             printf("int");
"rational"                             printf("float");
"big_rational"                             printf("double");
"big"                             printf("long long int");
"character"                             printf("char");
"str"                             printf("string");
"flag"                             printf("bool");

"shift"                              printf("switch");
"isit"                            printf("if");
"elseisit"                        printf("else if");
"finalis"                           printf("else");
"exp"                           printf("pow");
"halt"                              printf("break");
"escape"                              printf("continue");
"none"                              printf("default");
"shiftcase"                              printf("case");
"expanse"                              printf("size");
"nothing"                              printf("void");
"persistent"                              printf("const");
"giveback"                              printf("return");


"com"                              printf(",");
"full"                                printf(";");
"add"                                 printf("+");
"sub"                                 printf("-");
"mul"                                 printf("*");
"div"                                 printf("/");
"not"                                 printf("!");
"eq"                               printf("=="); 
"as"                               printf("=");
"gg"                                  printf(">");
"ge"                                 printf(">=");
"ll"                                  printf("<");
"le"                                 printf("<=");
"ne"                            printf("!=");

"dd"                                 printf("%d");
"ff"                               printf("%f");
"lld"                             printf("%lld");
"declare"                            printf("define");
"nl"                                    printf("\n");





"run"                                printf("for");
"repeat"                                   printf("while");

[-]{numbers}+                           printf("a Negative numbers\n");
"inc"                           printf("++");
"dec"                           printf("--");
"incc"                           printf("+=");
"decc"                           printf("-=");
"mula"                           printf("*=");
"diva"                           printf("/=");
"mod"                                 printf("%%");
"land"                                 printf("&&");
"lor"                                  printf("||");



%%
int yywrap()
{
	 return 1;
}
int main()
{
    yyin = freopen( "input1.txt", "r",stdin);
	yyout = freopen("output1.txt", "w",stdout);
	yylex();
	fclose(yyin);
	fclose(yyout);
	
}