#include<stdio.h>
#include<math.h>

int main(){
    double x1, y1, x2, y2, dab;
    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);
    dab = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.4lf", dab);

    
    return 0;
}