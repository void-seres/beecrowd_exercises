#include <stdio.h>

int calculaVolta(int x, int y);

int main()
{
	int x, y, laps;

	scanf("%d%*c%d%*c", &x, &y);

	laps = calculaVolta(x, y);
	printf("%d\n", laps);

	return 0;
}

int calculaVolta(int x, int y)
{
	int volta = 1, aux = 0;

	while(aux < x)
	{
        volta++;
        aux += (y - x);
	}

	return volta;
}
