#include <stdio.h>

int main()
{
	int l, c, t1, t2;
	
	scanf("%d%*c%d%*c", &l, &c);
	
	t1 = (l * c) + ((l - 1) * (c - 1));
	t2 = ((c - 1) * 2) + ((l - 1) * 2);
	
	printf("%d\n%d\n", t1, t2);
	
	return 0;
}
