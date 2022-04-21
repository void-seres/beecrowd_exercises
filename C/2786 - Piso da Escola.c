#include <stdio.h>

int main()
{
	int l, c, t1, t2;
	
	scanf("%d%*c%d%*c", &l, &c);
	
	t1 = (l*c) + ((l-1) * (c-1));
	// Type 1 tiles in majority can be obtained by LC, and the gaps between LC can be filled by (L-1)*(C-1).
	// As lajotas de Tipo 1 em sua maioria podem ser optidas por LC, e preenchemos a lacunas entre LC com (L-1)*(C-1).
	
	t2 = ((c-1)*2) + ((l-1)*2);
	// Type 2 tiles composes the room perimeter, and two Type 3 tiles form one of Type 2, so it is possible to subtract 1 from L or C to obtain the necessary amount of tiles in each side.
	// As lajotas de Tipo 2 formam o perímetro da sala, e como duas lajotas de Tipo 3 valem uma de Tipo 2, subtrai-se 1 de L ou C para obter a quantia de lajotas em cada lado.
	
	printf("%d\n%d\n", t1, t2);
	
	return 0;
}
