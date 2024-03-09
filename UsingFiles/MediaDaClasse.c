#include<stdio.h>

int main(){

    FILE *file;
    file = fopen("arquivo.txt", "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }
    int n, i;
    fscanf(file, "%d", &n);

    for (i= 0; i < n; i++)
    {
        char nome[51];
        float nota1, nota2;
        fscanf(file, " %[^\n]", nome);
        fscanf(file, "%f %f", &nota1, &nota2);
        if ((nota1 + nota2) / 2 >= 7.0)
        printf("%s\n", nome);
    }

    fclose(file);
       
   return 0;
}