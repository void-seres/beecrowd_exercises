#include <stdio.h>

int calculaVolta(int x, int y);

int main() {
	int x, y, laps;

	scanf("%d%*c%d%*c", &x, &y);

	laps = calculaVolta(x, y);
	printf("%d\n", laps);

	return 0;
}

int calculaVolta(int x, int y) {
	// acumulates the difference between x and y until this difference, represented by aux, is bigger than x
	// acumula a diferença entre x e y até que essa diferença, representada por aux, seja maior que x
	int volta = 1, aux = 0;

	while(aux < x) {
        	volta++;
        	aux += (y - x);
	}

	return volta;
}
