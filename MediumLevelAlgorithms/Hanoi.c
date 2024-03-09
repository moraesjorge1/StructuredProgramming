#include<stdio.h>

void hanoi(int or, int dest, int aux, int num);

int num;
int flag = 0;

int main(){
    
    scanf("%d", &num);
    hanoi(1, 3, 2, num);
     
    
        
    return 0;
}
void hanoi(int or, int dest, int aux, int num)
{
    if (num == 1)
    {
        printf("%d %d \n", or, dest);
        flag++;
    }

    else 
    {
        hanoi(or, aux, dest, num - 1);
        hanoi(or, dest, aux, 1);
        hanoi(aux, dest, or, num - 1);
    }
}