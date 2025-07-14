#include<stdio.h>
#include<math.h>

typedef struct
{
  int X;
  int Y;
}Ponto;

int Calcular_distancia(int x1, int y1)
{
  int distancia;

  distancia = sqrt(pow((0 - x1),2) + pow((0 - y1),2));

  return distancia;
}

int main()
{
  Ponto ponto1;

  printf("\n Digite o valor de X: \n");
  scanf("%d",&ponto1.X);

  printf("\n Digite o valor de Y: \n");
  scanf("%d",&ponto1.Y);

  printf("\n A distancia do ponto (%d,%d) ate a origem eh de: %d \n",ponto1.X, ponto1.Y, Calcular_distancia(ponto1.X, ponto1.Y));

  return 0;
}
