#include<stdio.h>
#include<stdlib.h>

int *Alocar_vetor(int num)
{
  int *ponteiro;
  ponteiro = (int *)malloc(num * sizeof(int));
  if(ponteiro == NULL)
  {
    printf("\n Erro na alocacao de memoria! \n");
    exit(1);
  }
  return ponteiro;
}
int main()
{
  int N;
  int *p;

  do
  {
    printf("\n Digite um valor para N: \n");
    scanf("%d", &N);
  }while(N < 0);

  p = Alocar_vetor(N);

  for(int i = 0; i < N; i++)
  {
    *(p + i) = rand() % (N - 1);
    printf("\n Vetor[%d]: %d ",(i + 1), *(p + i));
  }

  printf("\n");

  return 0;
}
