#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
int fibonacci (int n);
    printf("%d", fibonacci(n));
    
    return 0;
}
int fibonacci (int n)
{
    if (n == 0 || n == 1)
        return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}