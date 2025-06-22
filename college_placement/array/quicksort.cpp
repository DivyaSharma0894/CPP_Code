%{
    #include<stdio.h>
    int letter=0,words=0;line=0,num=0;
    %
}
%%
\n {word++;line++;}
[  \t] word++;
[A-Z] letter++;
[a-z] letter++;
[0-9] num++;
%%
void main(void){
    file *fp;
    char[50]=f;
    scanf("%s",f);
    yyin=fopen(f,"r");
    yylex();
}
int yywrap(){
    return(1);
}