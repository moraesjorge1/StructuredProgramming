#include<stdio.h>

int main(){
    double n, media, nota, i, somatorio = 0;
    scanf("%lf", &n);
    for (i = 1; i <= n; i++){
        scanf("%lf", &nota);
        somatorio = somatorio + nota;
        media = somatorio / n;
    }
    printf ("%.2lf", media);
    return 0;
}