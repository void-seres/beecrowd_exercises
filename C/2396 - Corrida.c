#include <stdio.h>

int main()
{
  int aux, i, indMenor, j, n, m, tempo, total;
  
  scanf("%d%d", &n, &m);
  
  int vCarro[n], vTempo[n];
  
  for (i = 0; i < n; i++)
  {
    total = 0;
    for (j = 0; j < m; j++)
    {
      scanf("%d", &tempo);
      total += tempo;
    }
    vTempo[i] = total;
    vCarro[i] = i + 1;
  }
  
  for (i = 0; i < n - 1; i++)
  {
    indMenor = i;
    for (j = i + 1; j < n; j++)
      if(vTempo[j] < vTempo[indMenor])
          indMenor = j;
  
      if (indMenor != i)
      {
        aux = vTempo[indMenor];
        vTempo[indMenor] = vTempo[i];
        vTempo[i] = aux;
    
        aux = vCarro[indMenor];
        vCarro[indMenor] = vCarro[i];
        vCarro[i] = aux;
      }
    }
    printf("%d\n%d\n%d\n", vCarro[0], vCarro[1], vCarro[2]);
    return 0;
}
