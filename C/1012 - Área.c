#include <stdio.h>
#include <math.h>

int main() {
  double Area, a, b, c, pi = 3.14159;

  scanf("%lf%*c%lf%*c%lf%*c", &a, &b, &c);

  printf("TRIANGULO: %.3lf\n", (a*c)/2);

  printf("CIRCULO: %.3lf\n", pi*pow(c, 2));

  printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2);

  printf("QUADRADO: %.3lf\n", pow(b, 2));

  printf("RETANGULO: %.3lf\n", a*b);

  return 0;
}