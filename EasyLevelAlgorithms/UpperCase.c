#include<stdio.h>

int main(){
    char string[20];
    scanf("%s", string);
    
    if (string[0] >= 'a' && string[0] <= 'z')
    string[0] = string[0] - 'a' + 'A';

    printf("%s", string);
    
    return 0;
}