#include<stdio.h>

int main(){
    int n, k;
    scanf("%d", &n);
    int j = 1;
    int i = 1;
    int num[n];
    int shift[n]; 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
        int ultimo = num[n - 1];
    for (i = 1; i < n; i++)
    {
        shift[i] = num[i - 1];
    }
        shift[0] = ultimo;
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", shift[i]);
    }
    return 0;
}