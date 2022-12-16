
%{
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
    


%}

%union
{
    char *ch;
	char c;
    int dim;
    int me;
	double floating;
}
%error-verbose
%token <dim>  NUMBER
%token <ch>  VARIABLE
%type  <me>  expression
%type  <dim>  after
%type  <dim> codes
%type  <dim> ENDED
%type  <me> param
 
%token INTEGER FLOAT DOUBLE LONGINT CHAR STRING BOOL SWITCH IF ELSEIF ELSE POW BREAK CONTINUE DEFAULT CASE SIZE VOID CNST RETURN COM FULL ADD SUB MUL DIV NOT EQ AS GG GE LL LE NE FOR WHILE INC DEC INCC
DECC MULA DIVA MOD LAND LOR COLON ENDED VALUE HEADER START DEF IMPORT NL

%nonassoc IF
%nonassoc ELSE
%left LL GG 
%left ADD SUB
%left MUL DIV

%%
program:
        import func START '{' lines '}'  {printf("\nProgram successfully ended\n");}
        | /* NULL */
        ;

import: IMPORT LL HEADER GG { printf("\nHeader File Found!\n"); }
		| /*empty*/
		;



func: DEF VARIABLE '(' param ')' '{' lines '}'
	{
		printf("\nFUNC Declared!\n");		
	};



param	:
	param ',' VARIABLE
		{
   		 if(func_here($3)==1)
      			  printf("\nparam already exists!");
   		 else
    			    assign_func($3);
		}

	| VARIABLE
		{
		   if(func_here($1)==1)
      			 printf("\nparam already exists!");
   		 else
      				  assign_func($1);
		}
	;



/* function ends */


lines	: /* empty */
    |NUMBER

	| lines codes

	| declare
	;


declare	:
	type id ENDED      	{ printf("\nValid declaration!\n"); } 
	;


type	:
	INTEGER 

	| FLOAT

	| STRING
	;


id	:
	id ',' VARIABLE
		{
   		 if(isdeclared($3)==1)
      			  printf("\nDouble Declaration!");
   		 else
    			    assign($3);
		}

	| VARIABLE
		{
		   if(isdeclared($1)==1)
      			  printf("\nDouble Declaration! \n");
   		 else
      				  assign($1);
		}
	;


codes: 
	codes after

	| after
	;


after	:
	ENDED

	| declare

	| expression ENDED
		{
 		     $$=$1;
 		/*   printf("\nValue of expression: %d at line %d\n",$1,yylineno); */
		}

	| VALUE '(' VARIABLE ')' ENDED
		{
			if(isdeclared($3)==0)
			{
				printf("Can't print, Value is not declared.\n");
			}
			else 
			{
				printf("\nValue of the variable %s:  %d\t\n",$3, store[getval($3)]);
			}
 		   
		}

	| VARIABLE '=' expression ENDED
		{
 		    if(setval($1,$3)==0)
  		 	{
  		    	$$=0;
				printf("\nNot declared\n");
   			}
    		else
    		{
      			$$=$3;
   			}
		}

	| IF '[' expression ']' '{' codes '}' %prec IFX
		{
   			 printf("\nIf condition is true\n");
		}

	| IF '[' expression ']' '{' codes '}' ELSE '{' codes '}' %prec IFX
		{
 		  f=f+1;
  		  int p=0;
  		  if($3)
   			 {
      			  printf("\nIf condition\n");
        			p=1;
    		 }
    		if(p==0)
      		  printf("\nElse Condition\n");
		}

	| FOR '[' VARIABLE '=' NUMBER '.' VARIABLE LL NUMBER '.' VARIABLE INCC NUMBER']' '{' codes'}'
		{
 		    int i;
			for(i= $5 ; i< $9 ; i+=$13)
			{
				printf("Value of i in for loop increasing %d\n",i);
			} printf("\n");	 			    
		}
		
	| FOR '[' VARIABLE '=' NUMBER '.' VARIABLE GG NUMBER '.' VARIABLE DECC NUMBER ']' '{' codes'}'
		{
 		    int i;
			for(i= $5 ; i>= $9 ; i-=$13)
			{
				printf("Value of i in for loop Decreasing %d\n",i);
			}printf("\n");		    
		}
	   
		    
	
	| WHILE '[' VARIABLE LL NUMBER '.' VARIABLE INCC NUMBER ']' '{' codes '}'
		{
			int a = store[getval($3)], inc = $9;
			while((a+=inc)< $5)
			{
				printf("While loop here increasing; value of variable %s : %d\n", $3, a);
			}
		}

	| WHILE '[' VARIABLE GG NUMBER '.' VARIABLE DECC NUMBER ']' '{' codes '}'
		{
			int a = store[getval($3)], inc = $9;
			while((a-=inc)> $5)
			{
				printf("While loop here decreasing; value of variable %s : %d\n", $3, a);
			}
		}
	

	| SWITCH '[' Exp_case ']' '{' code '}'
	;


Exp_case :
	expression
		{
    		casedefault = 0;
    		casevar = $1;
		}
	;


code: /* empty */

	| code expression COLON '{' codes'}'
		{
    		if($2 == casevar)
    			{
        			printf("\nExecuted %d\n",$2);
        			casedefault = 1;
   			 }
		}

	| code DEFAULT COLON '{' codes '}'
		{
  		  if(casedefault == 0)
   			 {
    			    casedefault = 1;
     			   printf("\nDefault Block executed\n");
    			}
		}
	;



expression:
	NUMBER		   		  { $$ = $1;}

	| VARIABLE
		{
  		  if( isdeclared($1) == 0)
   			 {
    			    $$=0;
     			   printf("\nNot declaredd!\n");
   			 }
    		else
       			 $$=store[getval($1)];
		}
	
	| expression '+' expression	  	
		 { 	
			$$ = $1 + $3; /*printf("\nAddition value %d\n",$$);*/
		 }

	| expression '-' expression	 	  
		{
  			$$ = $1 - $3; /*printf("\nSubtraction value %d\n",$$);*/
		}

	| expression '*' expression
		{
 			   $$ = $1 * $3;
 			   /*printf("\nMultiplication value %d\n",$$);*/
		}

	| expression '/' expression	 	  
		{ 	if($3)
 			   {
  			      $$ = $1 / $3;
     				   /*printf("\nDivision value %d\n",$$);*/
  			  }
   			 else
    			{
      				 $$ = 0;
       				 printf("\nDivision by zero\t");
    			}
		}

	| expression '^' expression 		
		{ 	$$=pow($1,$3); /*printf("\nPower value %d\n",$$);*/}

	| expression '%' expression 		
		{	 $$=$1 % $3; /*printf("\nRemainder value %d\n",$$);*/}

	| '(' expression ')'		  
    		 { $$ = $2 ;}
	| expression LL expression	
		{ $$ = $1 < $3; }

	| expression GG expression	
		{ $$ = $1 > $3; }

	| expression LE expression  
		{ $$ = $1 <= $3; }

	| expression GE expression   
 		 { $$ = $1 >= $3; };




%%



int yyerror(char *s)
{
    printf( "%s\n %d", s, yylineno);
}








