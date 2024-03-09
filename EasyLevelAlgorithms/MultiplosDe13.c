#include<stdio.h>
    int main(){
        int x, y, i, j, soma;
        scanf("%d", &x);
        scanf("%d", &y);
        if (x < y){
            soma = 0;
            for (i = x; i <= y; i++){
                if (i % 13 != 0)
                    soma = soma + i;
        }
        printf("%d", soma);
        }
        else {
            soma = 0;
            for (j = x; j >= y; j--){
                if (j % 13 != 0)
                    soma = soma + j;
        }
        printf("%d", soma);
        }
        
        
        return 0;
    }