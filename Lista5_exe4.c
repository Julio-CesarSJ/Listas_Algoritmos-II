#include<stdio.h>

int main()
{
  float Matriz[3][3];
  float *pMatriz;
  pMatriz = &Matriz[0][0];

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("\n Posicao [%d][%d]:", i, j);
      printf(" %p \n", ((pMatriz + (i * 3)) + j));
    }
  }


  return 0;
}
