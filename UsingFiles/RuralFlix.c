#include<stdio.h>

int main(){

    char arquivo[20];
    scanf("%s", arquivo);

    FILE *file;
    file = fopen(arquivo, "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }
    int n, nv, na;
    fscanf(file, "%d %d %d", &n, &nv, &na);

    int video, usuario, nota;
    int i, contador[1000] = {0}, mais_vezes = 0, mais_visto = 0;

    for (i = 0; i < na; i++)
    {
        fscanf(file, "%d %d %d", &usuario, &video, &nota);
        contador[video]++;
    }
    for(i = 0; i < 1000; i++)
    {
        if (contador[i] > mais_vezes)
        {
        mais_vezes = contador[i];
        mais_visto = i;
        }

    }
        printf("%d", mais_visto);
    
    return 0;
}