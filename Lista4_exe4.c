#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct
{
  int X;
  int Y;
}Ponto;

typedef struct
{
  Ponto superior_esquerdo;
  Ponto inferior_direito;
}Retangulo;

int main()
{
  int base, altura;
  int area, perimetro, diagonal;

  Retangulo retangulo1;

  printf("\n===Ponto Superior Esquerdo===\n");

  printf("\n X: \n");
  scanf("%d",&retangulo1.superior_esquerdo.X);

  printf("\n Y: \n");
  scanf("%d",&retangulo1.superior_esquerdo.Y);

  printf("\n===Ponto INFERIOR DIREITO===\n");

  printf("\n X: \n");
  scanf("%d",&retangulo1.inferior_direito.X);

  printf("\n Y: \n");
  scanf("%d",&retangulo1.inferior_direito.Y);

  base = abs(retangulo1.superior_esquerdo.X - retangulo1.inferior_direito.X);
  altura = abs(retangulo1.superior_esquerdo.Y - retangulo1.inferior_direito.Y);

  area = base * altura;
  perimetro = 2*(base + altura);
  diagonal = sqrt(pow(base,2) + pow(altura,2));

  printf("\n Area: %d \n Perimetro: %d \n Comprimento da Diagonal: %d \n", area, perimetro, diagonal);

  return 0;
}
