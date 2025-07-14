#include<stdio.h>
#include<math.h>

typedef struct
{
  int X;
  int Y;
}Ponto;

int Calcular_distancia(int x1, int y1, int x2, int y2)
{
  int distancia;

  distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

  return distancia;
}

int main()
{
  Ponto ponto1;

  printf("\n===Ponto 1===\n");

  printf("\n Digite o valor de X: \n");
  scanf("%d",&ponto1.X);

  printf("\n Digite o valor de Y: \n");
  scanf("%d",&ponto1.Y);

  Ponto ponto2;

  printf("\n===Ponto 2===\n");

  printf("\n Digite o valor de X: \n");
  scanf("%d",&ponto2.X);

  printf("\n Digite o valor de Y: \n");
  scanf("%d",&ponto2.Y);

  printf("\n A distancia entre o ponto (%d,%d) e o ponto (%d,%d) eh de: %d \n",ponto1.X, ponto1.Y, ponto2.X, ponto2.Y, Calcular_distancia(ponto1.X, ponto1.Y, ponto2.X, ponto2.Y));

  return 0;
}
