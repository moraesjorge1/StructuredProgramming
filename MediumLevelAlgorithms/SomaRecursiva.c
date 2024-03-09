#include<stdio.h>

int soma (int vetor[50], int tam);

int main(){
    int casos;
    scanf("%d", &casos);
    int tam;
    int i, j; 
    int vetor[50];
    for (i = 0; i < casos; i++)
    {
        scanf("%d", &tam);
        for (j = 0; j < tam; j++)
        {
            vetor[j] = 0;
        }
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &vetor[j]);  
        }
        printf("%d\n", soma(vetor, tam));
    }


    return 0;
}
int soma (int vetor[50], int tam)
{
    int somatorio = 0;
    int i;
    for (i = 0; i < tam; i++)
    {
        somatorio = somatorio + vetor[i];
    }
    return somatorio;
}