#include <stdio.h>
 
int main(){
 
    int a, b, prod;
    scanf ("%d%*c%d%*c", &a, &b);
    prod = a*b;
    printf ("PROD = %d\n", prod);
 
    return 0;
}