#include <stdio.h>
 
int main()
{
    int n, i, g;
    double p, pKg, menor;

    scanf("%d", &n);
    for (i = 0; i <n; i++)
    {
        scanf("%lf %d", &p, &g);
        pKg = (p/g) * 1000;
        if (i == 0)
            menor = pKg;

        else if (pKg < menor)
            menor = pKg;
    }

    printf("%.2lf\n", menor);

    return 0;
}
