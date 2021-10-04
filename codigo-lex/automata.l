%option noyywrap
%option main


%{
#include <stdio.h>

%}

%%
b* printf("Aceptado\n"); exit(0);
(b+ab*ab*a)|(ab*ab*ab+) printf("Aceptado\n"); exit(0);
("aaa")* printf("Aceptado\n"); exit(0);
a*|(aa)* printf("rechazado\n"); exit(0);
%%
