#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int **Criar_C(int L1, int C1, int a[L1][C1], int L2, int C2, int b[L2][C2])
{
  int **p_c;

  if(C1 == L2)
  {
    p_c = (int **)malloc(L1 * sizeof(int *));

    for(int i = 0; i < L1; i++)
    {
      p_c[i] = (int *)malloc(C2 * sizeof(int));
      for(int j = 0; j < C2; j++)
      {
        p_c[i][j] = 0;
        for(int k = 0; k < C1; k++)
	{
          p_c[i][j] += a[i][k] * b[k][j];
	}
      }
    }
 
    return p_c;
  }

  else
  {
    return NULL;
  }
}

int main()
{
  int Linha1, Coluna1, Linha2, Coluna2;
  int **p_C;

  srand(time(NULL));

  printf("\n=== Matriz A ===\n");

  do
  {
    printf("\n Digite a quantidade de linhas: \n");
    scanf("%d", &Linha1);
  }while(Linha1 <= 0);
 
  do
  {
    printf("\n Digite a quantidade de colunas: \n");
    scanf("%d", &Coluna1);
  }while(Coluna1 <= 0);

  int A[Linha1][Coluna1];

  printf("\n");

  for(int i = 0; i < Linha1; i++)
  {
   for(int j = 0; j < Coluna1; j++)
   {
     A[i][j] = rand() % 10;
     printf(" %d ", A[i][j]);
   }
   printf("\n");
  }

  printf("\n");

  printf("\n=== Matriz B ===\n");

 do
  {
    printf("\n Digite a quantidade de linhas: \n");
    scanf("%d", &Linha2);
  }while(Linha2 <= 0);
 
  do
  {
    printf("\n Digite a quantidade de colunas: \n");
    scanf("%d", &Coluna2);
  }while(Coluna2 <= 0);

  int B[Linha2][Coluna2];

  printf("\n");

  for(int i = 0; i < Linha2; i++)
  {
    for(int j = 0; j < Coluna2; j++)
    {
      B[i][j] = rand() % 10;
      printf(" %d ", B[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  p_C = Criar_C(Linha1, Coluna1, A, Linha2, Coluna2, B);

  if(p_C == NULL)
  {
    printf("\n Nao eh possivel realizar a multiplicacao das matrizes! \n");
  }

  else
  {
    printf("\n=== Matriz C ===\n");

    for(int i = 0; i < Linha1; i++)
    {
      for(int j = 0; j < Coluna2; j++)
      {
        printf(" %d ", p_C[i][j]);
      }
      printf("\n");
    }
  }

  free(p_C);

  return 0;
}
