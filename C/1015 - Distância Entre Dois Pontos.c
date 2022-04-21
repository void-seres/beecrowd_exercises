#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2, X, Y, distance;
    // Obtem coordenadas de p1.
    // Obtain p1 coordinates.
    scanf("%lf%*c%lf%*c", &x1, &y1);

    // E as coordenadas de p2.
    // And p2 coordinates.
    scanf ("%lf%*c%lf%*c", &x2, &y2);
    
    // Calcula as diferenças entre ambos os e depois Y
    // Calculates the differences between the "xs" and "ys"
    X = x2-x1;
    Y = y2-y1;
    distance = sqrt(pow(X,2) + pow(Y,2));
    printf ("%.4lf\n", distance);

    return 0;
}
