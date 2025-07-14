#include<stdio.h>
#include<stdlib.h>

int N;

int *Criar_C(int *a, int *b)
{
  int *c;

  c = (int *)malloc(N * sizeof(int));

  for(int i = 0; i < N; i++)
  {
    *(c + i) = (*(a + i) + *(b + i));
  }

  return c;
}

int main()
{
  int *A, *B, *C;

  A = (int *)malloc(N * sizeof(int));
  B = (int *)malloc(N * sizeof(int));

  do
  {
    printf("\n Digite o tamanho dos Vetores: \n");
    scanf("%d", &N);
  }while(N < 0);

  for(int i = 0; i < N; i++)
  {
    printf(" Vetor A[%d]: ", (i + 1));
    scanf("%d", &*(A + i));
  }

  printf("\n");

  for(int i = 0; i < N; i++)
  {
    printf(" Vetor B[%d]: ", (i + 1));
    scanf("%d", &*(B + i));
  }

  C = Criar_C(A, B);

  for(int i = 0; i < N; i++)
  {
    printf("\n Vetor C[%d]: %d ", (i + 1), *(C + i));
  }

  printf("\n");

  return 0;
}
