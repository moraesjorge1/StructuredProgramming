#include<stdio.h>

int main(){
    int a, b, i, soma = 0;
        scanf("%d", &b);
        scanf("%d", &a);
    for (i = b - 1; i > a; i --){
        if (i % 2 != 0)
            soma = soma + i;
    }
    printf("%d", soma);
        
    return 0;
}