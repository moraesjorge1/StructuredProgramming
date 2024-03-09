#include<stdio.h>


int main(){
    char numero[200];
    int casos[1000];
    int n, i, j, led;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        led = 0;
        scanf("%s", numero);
        for (j = 0; numero[j] != '\0'; j++)
        {
            if (numero[j] == '1')
            {
                led = led + 2;
            }
            if (numero[j] == '2' || numero[j] == '3' || numero[j] == '5')
            {
                led = led + 5;
            }
            if (numero[j] == '6' || numero[j] == '9' || numero[j] == '0')
            {
                led = led + 6;
            }
            if (numero[j] == '4')
            {
                led = led + 4;
            }
            if (numero[j] == '7')
            {
                led = led + 3;
            }
            if (numero[j] == '8')
            {
                led = led + 7;
            }

        }
        casos[i] = led;
    
    }
    for (i = 0; i < n; i++){
        printf("%d leds\n", casos[i]);
    }
  
    return 0;
}