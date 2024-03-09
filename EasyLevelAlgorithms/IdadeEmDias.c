#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int ano = n / 365;
    int meses = (n - 365 * (ano)) / 30;
    int dias = (n - 365 * (ano) - 30 * (meses));
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);


    
    return 0;
}