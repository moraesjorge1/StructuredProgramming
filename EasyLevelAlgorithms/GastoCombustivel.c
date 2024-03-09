#include <stdio.h>

int main(){
    float dist, velocidade, tempo, gasto;
    scanf("%f\n%f", &tempo, &velocidade);
    dist = tempo * velocidade;
    gasto = dist / 12;
    printf("%.3f", gasto);
    
    
    return 0;
}