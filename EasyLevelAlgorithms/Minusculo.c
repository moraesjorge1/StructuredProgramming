#include<stdio.h>

int main(void){
    int n, i, pos;
    int menor = 1000; 
    scanf("%d", &n);
    int x[1000];
    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
        if(x[i] < menor){
        menor = x[i];
        pos = i - 1;
        }
    }
 printf("Menor valor: %d\n", menor);
 printf("posicao: %d\n", pos);
 
    return 0;
}