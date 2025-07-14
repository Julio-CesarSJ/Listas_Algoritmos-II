#include<stdio.h>

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
  int X_pertence = 0, Y_pertence = 0;

  Retangulo R_1;

  printf("\n====Retangulo====\n");

  printf("\n Ponto Superior Esquerdo \n");

  printf("X: \n");
  scanf("%d",&R_1.superior_esquerdo.X);

  printf("Y: \n");
  scanf("%d",&R_1.superior_esquerdo.Y);

  printf("\n Ponto Inferior Direito \n");

  printf("X: \n");
  scanf("%d",&R_1.inferior_direito.X);

  printf("Y: \n");
  scanf("%d",&R_1.inferior_direito.Y);

  Ponto P_q;

  printf("\n====Ponto Qualquer====\n");

  printf("X: \n");
  scanf("%d",&P_q.X);

  printf("Y: \n");
  scanf("%d",&P_q.Y);

  if((P_q.X >= R_1.superior_esquerdo.X) && (P_q.X <= R_1.inferior_direito.X))
  {
    X_pertence = 1;
  }

  if((P_q.Y <= R_1.superior_esquerdo.Y) && (P_q.Y >= R_1.inferior_direito.Y))
  {
    Y_pertence = 1;
  }

  if( (X_pertence + Y_pertence) == 2)
  {
    printf("\n O ponto (%d,%d) pertence ao retangulo \n",P_q.X, P_q.Y);
  }

  else
  {
    printf("\n O ponto (%d,%d) nao pertence ao retangulo \n", P_q.X, P_q.Y);
  }

  return 0;
}
