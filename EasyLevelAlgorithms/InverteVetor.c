#include <stdio.h>
 
int main()
{
    int n, i, s = 0;
    int j, k;
    scanf("%d", &n);
    int vetor[n];
    int inverte[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (k = n - 1; k >= 0; k--)
    {
        inverte[k] = vetor[s];
        s++;
    }
    for (j = 0; j < n; j++)
    {
        printf("%d ", inverte[j]);
    }

    return 0;
}