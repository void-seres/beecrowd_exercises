#include <stdio.h>

int main(void) {
  char seller[50];
  double fix_sal, sold, total_sal;

  scanf("%s%*c%lf%*c%lf%*c", &seller, &fix_sal, &sold);
  total_sal = (fix_sal)+(sold*0.15);

  printf("TOTAL = R$ %.2lf\n", total_sal);

  return 0;
}