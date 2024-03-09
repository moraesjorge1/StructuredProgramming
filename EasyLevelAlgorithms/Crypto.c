#include<stdio.h>

char texto_original[1000];
char texto_cripto[1000];

char converte_cripto (char texto_original[1000], char texto_cripto[1000]);
char inverte (char texto_cripto[1000]);
char desloca (char texto_cripto[1000]);


int main(){
    int n, i;
        scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", texto_original);
        converte_cripto(texto_original, texto_cripto);
        inverte(texto_cripto);
        desloca(texto_cripto);
    }
    
    return 0;
}
char converte_cripto (char texto_original[1000], char texto_cripto[1000])
{
    int i;
    for (i = 0; texto_original[i] != '\0'; i++)
    {
        if (texto_original[i] >= 'a' && texto_original[i] <= 'z' || texto_original[i] >= 'A' && texto_original[i] <= 'Z')
        texto_cripto[i] = texto_original[i] + 3;
        else 
        texto_cripto[i] = texto_original[i];
    }
        for (i = 0; texto_cripto[i] != '\0'; i++)
        {
        return texto_cripto[i];
        }
}
char inverte (char texto_cripto[1000])
{
    char inversor[1000];
    int size, i, j = 0;
    for (size = 0; texto_cripto[size] != '\0'; size++);
    for (i = 0; texto_cripto[i] != '\0'; i++)
    {
        inversor[i] = texto_cripto[i];
    }
    for (i = size - 1; i >= 0; i--)
        {
            texto_cripto[j] = inversor[i];
            j++;     
        }
    for (i = 0; texto_cripto[i] != '\0'; i++)   
    {
            return texto_cripto[i];
    }     
}
char desloca (char texto_cripto[1000])
{
    int size;
    int i = 0;
    for (size = 0; texto_cripto[size] != '\0'; size++);
    int metade = size / 2;
    for (i = metade; texto_cripto[i] != '\0'; i++)
    {
        if (texto_cripto[i] >= 'a' && texto_cripto[i] <= 'z' || texto_cripto[i] >= 'A' && texto_cripto[i] <= 'Z')
            texto_cripto[i] = texto_cripto[i] - 1;
    }
            printf("%s", texto_cripto);
    
}