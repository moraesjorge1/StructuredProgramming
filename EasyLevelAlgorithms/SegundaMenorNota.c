#include <stdio.h>

int main(void)
{
    int notas[200];
    int n, i, menor = 11, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);
        if (notas[i] < 0)
        notas[i] = 1;
        if (notas[i] < menor)
        menor = notas[i];
    }
    int seg_menor = 10;
    for (i = 0; i < n; i++)
    {
        if (notas[i] > menor && notas[i] < seg_menor)
        seg_menor = notas[i];
    }
     printf("%d", seg_menor);

    
    return 0;
}