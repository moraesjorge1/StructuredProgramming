#include<stdio.h>

void verifica_parenteses (char exp[1000]);

int main(){
    int cases, i;
    char exp[1000];
        scanf("%s", exp);
        verifica_parenteses(exp);
    return 0;
}
void verifica_parenteses (char exp[1000])
{   
    int j, abre = 0, fecha = 0;
    
    if (exp[0] == ')')
    {
        printf("incorrect\n");
        return;
    }
    
    for (j = 0; exp[j] != '\0'; j++)
    {
        if (exp[j] == '(')
        abre++;
        if (exp[j] == ')')
        fecha++;   
    }
        if (abre - fecha == 0)
        printf("correct\n");
        else printf("incorrect\n");
}