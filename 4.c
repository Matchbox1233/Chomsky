 %{
    #include <stdio.h>
    int szamok=0;
    %}

    %option noyywrap

    %%
    [[:digit:]]+  //legalább egy számjegy egymás után
    {
        szamok++;
    }

    [[:alpha:]][[:print:]]*   
    %%

    int main(void)
    {
        yylex();
        printf("%d számot talált a lexer: \n",szamok);
        return 0;
    }