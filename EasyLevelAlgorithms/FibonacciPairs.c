#include<stdio.h>

int main(void){
    int fibo1 = 1, fibo2 = 2, fibo, n, i, soma_par = 2;
    scanf("%d", &n);
        for(i = 1; i < n; i++){
            fibo = fibo2 + fibo1;
            fibo1 = fibo2;
            fibo2 = fibo;
            if (fibo < n){
            if(fibo % 2 == 0)
                soma_par = soma_par + fibo;
            }
            else break;   
        }
        printf("%d ", soma_par);
  
    return 0;
}