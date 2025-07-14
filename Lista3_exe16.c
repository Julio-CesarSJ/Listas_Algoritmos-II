#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int N;

int *Criar_c(int a[N][N], int b[N])
{
  int *c;
  int soma = 0, num_1, num_2;

  c = (int *)malloc(N * sizeof(int));

  for(int i = 0; i < N; i++)
  {
    soma = 0;
    for(int j = 0; j < N; j++)
    {
      soma += b[j] * a[j][i];
      
    }
    *(c + i) = soma;
    soma = 0;
  }

  return c;
}


int main()
{
  int *C;

  srand(time(NULL));

  do
  {
    printf("\n Digite um valor de N: \n");
    scanf("%d", &N);
  }while(N < 0);

  int A[N][N];
  int B[N];

  C = (int *)malloc(N * sizeof(int));

  printf("\n");

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      A[i][j] = rand() % 10;
      printf(" %d ", A[i][j]);
    }
    printf("\n");
  }
  
  printf("\n");

  for(int i = 0; i < N; i++)
  {
    B[i] = rand() % 10;
    printf(" %d ", B[i]);
  }

  printf("\n");

  C = Criar_c(A, B);

  for(int i = 0; i < N; i++)
  {
    printf(" C[%d]: %d", (i + 1), *(C + i));
  }

  printf("\n");

  return 0;
}
