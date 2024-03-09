#include<stdio.h>

int main(){
    int n, notas, aprov = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &notas);
        if (notas > 10 | notas < 0)
            continue;
        if (notas >= 5)
        aprov = aprov + 1;
    }
    printf("%d", aprov);
    return 0;
}