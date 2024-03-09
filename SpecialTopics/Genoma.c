#include<stdio.h>

int verifica_pertencimento (char base1[100], char base2[100]);

int main(){
    char base1[100]; 
    char base2[100];
    scanf("%s", base1);
    scanf("%s", base2);
    printf("%d", verifica_pertencimento(base1, base2));
    return 0;
}
int verifica_pertencimento (char base1[100], char base2[100])
{
    int i, flag = 0, size, size2;
    for (size = 0; base1[size] != '\0'; size++);
    for (size2 = 0; base2[size2] != '\0'; size2++);
    for (i = 0; i < size; i++)
    {
        if(base1[i] == base2[flag])
        flag++;
        else 
        flag = 0;
        if (flag == size2)
        return 1;
    }
        return 0;     
}