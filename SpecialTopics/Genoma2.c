#include<stdio.h>
/* vou usar a mesma função da anterior, porém começando a analsar a string a partir da variável "var" que vira o índice, para ter uma base na contagem.
Apanhei bastante até descborir que era pra retornar -1 e não 0, porque zero já é o valor do índice kkkkkkk
*/

int verifica_pertencimento (char base1[100], char base2[100], int ind);

int main(){
    char base1[100];
    char base2[100];
    int quant = 0;
    int ind = 0;
    scanf(" %[^\n]", base1);
    scanf(" %[^\n]", base2);
    do 
    {
        ind = (verifica_pertencimento(base1, base2, ind));
        if (ind == -2)
        {
        quant++;
        break;
        }
        if (ind != -1)
        quant++;
    } while (ind != -1);
    printf("%d", quant);
}
int verifica_pertencimento (char base1[100], char base2[100], int ind)
{
    int i, flag = 0, size, size2;
    for (size = 0; base1[size] != '\0'; size++);
    for (size2 = 0; base2[size2] != '\0'; size2++);
    for (i = ind; i <= size; i++)
    {
        if (size2 == 1 && base1[i] == base2[flag])
        return -2;
        if(base1[i] == base2[flag])
        flag++;
        else 
        flag = 0;
        if (flag == size2)
        return i;
    }
        return -1;     
}