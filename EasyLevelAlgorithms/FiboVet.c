#include<stdio.h>


int main(){
    int caso[100];
    int fibo1, fibo2, fibo, enesimo;
    int n, i, j;
    scanf("%d", &n);
    caso[0] = 0;
    caso[1] = 1;
    for (i = 2; i < 100; i++)
    {
        fibo = caso[i-2]; 
        fibo2 = caso[i-1];
        caso[i] = fibo + fibo2;
    }
    for (j = 0; j < n; j++)
    {
        scanf("%d", &enesimo);
        printf("fib(%d) = %d\n", enesimo, caso[enesimo]);
    }
    return 0;
}