#include<stdio.h>

int main(){
    char string[100];
    int i;
    scanf(" %[^\n]", string);
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[0] >= 'a' && string[0] <= 'z')
            string[0] = string[0] - 'a' + 'A';
        if (string[i - 1] == ' ')
        {
            if (string[i] >= 'a' && string[i] <= 'z')
                string[i] = string[i] - 'a' + 'A';
        }
    }

    printf("%s", string);
    
    return 0;
}