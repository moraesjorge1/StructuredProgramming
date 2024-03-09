#include<stdio.h>

    int main () {
        int n;
        scanf("%d", &n);
        int vetor[n - 1], notas, menor_nota = 10, i, j;
        for (i = 0; i <= n - 1; i++){
            scanf("%d", &vetor[i]);
            if(vetor[i] < 0)
                continue;
            if (vetor[i] < menor_nota)
                    menor_nota = vetor[i];
            
        }
        printf("%d", menor_nota);
             
        return 0;
    }