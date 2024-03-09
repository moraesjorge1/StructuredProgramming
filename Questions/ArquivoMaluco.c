#include<stdio.h>

int main(){
    
    char arquivo[16];
    scanf("%s", arquivo);

    FILE *file;
    file = fopen(arquivo, "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }
    int i;
    char texto[100];
    int size;

    while(!feof(file))
    {
        fgets(texto, 100, file);
        for (size = 0; texto[size] != '\0'; size++);
        for (i = size - 1; i >= 0; i--)
        {
            printf("%c", texto[i]);
        }
            printf("\n");
    }
    fclose(file);

    return 0;
}