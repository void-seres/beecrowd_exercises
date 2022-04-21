#include <stdio.h>

int main() {
  int a, b, sum;
  
  scanf("%d%*c%d%*c", &a, &b);
  sum = a + b;

  printf("SOMA = %d\n", sum);
  return 0;
}