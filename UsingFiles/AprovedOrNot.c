#include<stdio.h>

int main(){


    FILE *file;
    file = fopen("arquivo.txt", "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }

    char nome[50];
    float nota1, nota2;
    float MEDIA;

    
    while(fscanf(file, " %[^;]%*c %f; %f;", nome, &nota1, &nota2) == 3)
    {
        printf("%s %.1f %.1f ", nome, nota1, nota2);
            MEDIA = (nota1 + nota2) / 2;
        printf(" %.1f", MEDIA);
        if (MEDIA >= 5)
        printf(" aprovado\n");
        if (MEDIA < 5)
        printf(" reprovado\n");
    }
 
    return 0;
}