#include <stdio.h>

int main(void)
{
  int i, j, n, tam, temp, flag;
  int vetor[1000];
  scanf("%d", &n);
  while (i < n)
  {
    scanf("%d", &temp);
    flag = 1;
    for (j = i - 1; j >= 0; j--)
    {
      if (vetor[j] == temp)
      {
        flag = 0;
        break;
      }
    }
    if (flag)
    {
      vetor[i] = temp;
      i++;
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d ", vetor[i]);
  }
    return 0;
}