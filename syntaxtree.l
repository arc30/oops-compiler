%{
	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>

	int number;
	char varname;
	
%}
	
%%
	
[0-9]+ {number = atoi(yytext); yylval = (Node*) new NumberNode(number); return NUM;}
[a-z]	{varname = *yytext; yylval = (Node*) new IdentifierNode(varname);	return ID;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return ASSGN;}
[ \t\n] {}
[();] {return *yytext;}
"begin" {return BEG;}
"end"	{return END;}
"read" {return READ;}
"write" {return WRITE;}

. {yyerror("unknown character\n");exit(1);}
	
%%
	
	int yywrap(void) 
	{
	return 1;
	}
	
