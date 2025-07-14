#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int N;

int *Criar_B(int a[N][N])
{
  int *p_b, soma;

  p_b = (int *)calloc(N, sizeof(int));

  for(int i = 0; i < N; i++)
  {
    soma = 0;
    for(int j = 0; j < N; j++)
    {
      soma += a[j][i];
    }
    *(p_b + i) = soma;
  }

  return p_b;
}

int main()
{
  int *p_B;

  srand(time(NULL));
 
  do
  {
    printf("\n Digite um valor para N: \n");
    scanf("%d", &N);
  }while(N <= 0);  

  int A[N][N];


  p_B = (int *)malloc(N * sizeof(int));

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      A[i][j] = rand() % 10;
      printf(" %d ", A[i][j]);
    }
    printf("\n");
  }

  p_B = Criar_B(A);

  printf("\n");

  for(int i = 0; i < N; i++)
  {
    printf(" B[%d]: %d ", (i + 1), *(p_B + i));
  }

  printf("\n");

  return 0;
} 
