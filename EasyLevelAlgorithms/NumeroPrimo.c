#include <stdio.h>

int main(void)
{
  int n, i, divs = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
      if (n % i == 0)
      divs++;
  }
  if (n == 1 || n == 0)
  printf("nao");
  else {
    if (divs > 2){
  printf("nao");  
  }
  else {
    if (divs == 2);{
  printf("primo");   
  }

  }
  }
  


    return 0;
}