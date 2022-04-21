#include <stdio.h>

int main() {
    double p1, p2;
    int n1, n2;
    double v1, v2, vp;
    scanf ("%lf%*c%d%*c%lf%*c", &p1, &n1, &v1);
    scanf ("%lf%*c%d%*c%lf%*c", &p2, &n2, &v2);

    vp = (n1*v1)+(n2*v2);
    printf ("VALOR A PAGAR: R$ %.2lf\n", vp);

    return 0;
}
