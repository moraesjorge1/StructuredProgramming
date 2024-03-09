#include <stdio.h>
 
int main()
{
    long dec, div, modulo;
    int i, j = 0;
    char hexa[100];
 
    scanf("%ld", &dec);
 
    div = dec;
 
    while(div != 0)
    {
        modulo = div % 16;
        if (modulo < 10)
            hexa[j] = 48 + modulo;
        else
            hexa[j] = 55 + modulo;
        div = div / 16;
        j++;
    }
 
    
    for (i = j; i >= 0; i--)
            printf("%c", hexa[i]);
    
    return 0;
}
