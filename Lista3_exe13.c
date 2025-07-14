#include<stdio.h>
#include<stdlib.h>

int **Criar_matriz(int N)
{
  int **matriz;

  matriz = (int **)malloc(N * sizeof(int *));

  for(int i = 0; i < N; i++)
  {
    matriz[i] = (int *)malloc(N * sizeof(int));
  }

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      if(i == j)
      {
        matriz[i][j] = 0;
      }
      if(j > i)
      {
        matriz[i][j] = 1;
      }
      if(j < i)
      {
        matriz[i][j] = -1;
      }
    }
  }

  return matriz;
}

int main()
{
  int N;
  int **M;

  do
  {
    printf("\n Digite um valor para N: \n");
    scanf("%d", &N);
  }while(N < 0);

  M = Criar_matriz(N);

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      if((i == j) || (j > i))
      {
        printf(" ");
      }
      printf(" %d ", *(*(M + i) + j));
    }
    printf("\n");
  }

  return 0;
}
