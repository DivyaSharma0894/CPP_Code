%{
    #include<stdio.h>
    intv=0,c=0;
    %
}
%%
[A|a|E|e|I|i|O|o|U|u] v++;
[a-z A-Z (^A|a|E|e|I|i|O|o|U|u)] c++;
%%
void main(void){
    File *fp;
    char f[50];
    scanf(%s,f);
    yyin=fopen(f,"r")
    return 0;
}
int yywrap(){
    return(1);
}
