#include<stdio.h>

int buscar (int x, int tam, int vetor[100]);

int main(){
    int x;
    int tam;
    int i, j; 
    int vetor[100];
    scanf("%d", &x);
    scanf("%d", &tam);
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
        printf("%d", buscar(x, tam, vetor));
        
    return 0;
}
int buscar (int x, int tam, int vetor[100])
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (vetor[i] == x)
        return i;
    }
        return -1;
}