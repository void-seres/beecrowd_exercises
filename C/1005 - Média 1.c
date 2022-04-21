#include <stdio.h>

int main() {
    double a, b, media;
    scanf ("%lf%*c%lf%*c", &a, &b);
    media = (a*3.5 + b*7.5)/11;
    printf ("MEDIA = %.5lf\n", media);

    return 0;
}
