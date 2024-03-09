#include<stdio.h>

int call = 0;
int fibonacci (int n);
int calls (int n);

int main(void){
    int casos;
    int n, i;
    scanf("%d", &casos);
    for (i = 0; i < casos; i++)
    {
        call = 0;
        scanf("%d", &n);
        printf("fib(%d) = %d calls = %d\n", n, call - 1, fibonacci(n));
    } 
    return 0;
}
int fibonacci (int n)
{
    if (n == 0 || n == 1)
    {
        call++;
        return n;   
    }
    call++;
    
    return fibonacci(n-1) + fibonacci(n-2);
}