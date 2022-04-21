#include <stdio.h>
#include <math.h>

int main() {
  double r, pi = 3.14159, vol;

  scanf ("%lf%*c", &r);
  
  vol = (4*pi*pow(r, 3))/3;

  printf("VOLUME = %.3lf\n", vol);

  return 0;
}