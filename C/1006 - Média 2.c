#include <stdio.h>

int main() {
  double a, b, c, avg;

  scanf("%lf%*c%lf%*c%lf%*c", &a, &b, &c);
  avg = ((a*2)+(b*3)+(c*5))/10;

  printf("MEDIA = %.1lf\n", avg);
  
  return 0;
}