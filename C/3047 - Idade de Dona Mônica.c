#include <stdio.h>

void imprimeMaior(int x, int y, int z);

int main() {
	int m, a, b, c;

	scanf("%d%*c%d%*c%d%*c", &m, &a, &b);

	c = m - a - b;
	imprimeMaior(a, b, c);

	return 0;
}

void imprimeMaior(int x, int y, int z){
	// Compara se o filho A é o mais velho.
	if(x > y && x > z)
		printf("%d\n", x);
	
	// Verifica se o filho B é o mais velho.
	else if (y > x && y > z)
		printf("%d\n", y);

	else
		printf("%d\n", z);
}
