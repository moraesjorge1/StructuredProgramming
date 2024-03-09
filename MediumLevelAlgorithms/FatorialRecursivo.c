#include<stdio.h>

long fatorial(int);

int main(void)
{
	int num;
    scanf("%d", &num);

    printf("%ld\n", fatorial(num));

	return 0;
}

long fatorial(int num)
{
    if (num == 0)
        return 1;
    if(num == 1)
        return 1;

    return num * fatorial(num - 1);
}