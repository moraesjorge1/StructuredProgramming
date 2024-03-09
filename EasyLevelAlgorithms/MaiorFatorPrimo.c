#include <stdio.h>

int main(void)
{
    long long int n = 600851475143; 
    int i, maior = 0;
    for(i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
        n = n / i;
        if (i > maior);
        maior = i;
        }
    }
    printf("%d", maior);
    return 0;
}