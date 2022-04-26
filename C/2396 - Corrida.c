/*Firstly, when this program was written, I didn't know how to use structs.
So my best solution at the moment to solve it was to use two arrays: one
storing the cars' initial position, and the other storing the amount of
time taken to complete each lap. This program will be written in Java or
Python, with a better approach.*/

/*Primeiramente, quando esse programa foi escrito, eu não sabia usar structs.
Minha melhor solução naquele momento para resolver este problema foi usar dois
vetores: um armazenando a posição inicial dos carros, e outra armazenando o
tempo total que cada um levou para completar a volta. Este programa será escrito
em Java ou Python com uma abordagem melhor.*/

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
