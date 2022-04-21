#include <stdio.h>
#include <stdlib.h>

int check(int a, int b);

int main()
{
    int n1, n2, n3, n4, MaiorAB;
    scanf("%d%*c%d%*c%d%*c", &n1, &n2, &n3);

    n4 = check(n1, n2);
    MaiorAB = check(n4, n3);
    
    printf("%d eh o maior\n", MaiorAB);
    return 0;
}

int check(int a, int b)
{
    return ((a + b + abs(a - b))/2);
}