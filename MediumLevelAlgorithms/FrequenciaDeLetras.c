#include <stdio.h>
char converte_maiuscula (char texto[200]);
int conta_caracteres (char texto[200], int quant[26]);
char verifica_frequencia(char texto[200], int quant[26]);

int main(void)
{
    int n;
    scanf("%d", &n);
    int i, j;
    int quant[26];
    char texto[200];
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", texto);
        converte_maiuscula(texto);
        conta_caracteres(texto, quant);
        verifica_frequencia(texto, quant);
    }
    

 
    return 0;
}
char converte_maiuscula (char texto[200])
{
    int alfabeto[26] = {0};
    int i;
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] = texto[i] - 'A' + 'a';
        }
    }
    for (i = 0; texto[i] != '\0'; i++)
    {
        return texto[i];
    }
}
int conta_caracteres (char texto[200], int quant[26])
{
    int i;
    for (i = 0; i < 26; i++)
    {
    quant[i] = 0;
    } 
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            quant[texto[i] - 'a']++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        return quant[i];
    }
    for (i = 0; i < 26; i++)
    {
        quant[i] = 0;
    }
    
}
char verifica_frequencia(char texto[200], int quant[26])
{
    int i, j, maior = -1, z = 1;
    char freq[200] = {'\0'};
    char alfa[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (i = 0; i < 26; i++)
    {
        if (quant[i] > maior)
        {
            maior = quant[i];
            freq[0] = alfa[i];
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (quant[i] == maior)
        {
            freq[z] = alfa[i];
            z++;
        }
    }
    for (i = 1; freq[i] != '\0'; i++)
    {
        printf("%c", freq[i]);
    }  
        printf("\n");
}