#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int horas = n / 3600;
    int minutos = (n - 3600 * (horas))  / 60; 
    int segundos = (n - 3600 * (horas) - 60 * (minutos));
    printf("%d:%d:%d", horas, minutos, segundos);
    return 0;
}