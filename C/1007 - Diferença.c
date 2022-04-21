#include <stdio.h>

int main () {
    int A, B, C, D, diferenca, p1, p2;
    scanf ("%d%*c%d%*c%d%*c%d%*c", &A, &B, &C, &D);

    p1 = A*B;
    p2 = C*D;

    diferenca = p1-p2;

    printf ("DIFERENCA = %d\n", diferenca);

    return 0;
}