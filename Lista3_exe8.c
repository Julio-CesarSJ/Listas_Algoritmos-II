#include<stdio.h>
#include<stdlib.h>

int *Alocar_vetor(int num)
{
  int *ponteiro;

  if(num <= 0)
  {
    return NULL;
  }
  else
  {
    ponteiro = (int *)malloc(num * sizeof(int));
  
    if(ponteiro == NULL)
    {
      printf("\n Erro na alocacao de memoria! \n");
      exit(1);
    }
  }
  
  return ponteiro;
}

int main()
{
  int N, *p;

  printf("\n Digite um valor para N: \n");
  scanf("%d", &N);

  p = Alocar_vetor(N);

  if(p == NULL)
  {
    printf("\n Vetor Nulo \n");
  }
  else
  {
    for(int i = 0; i < N; i++)
    {
      *(p + i) = rand() % 100;
      printf("\n Vetor[%d]: %d ", (i + 1), *(p + i));
    }
  }

  printf("\n");

  return 0;
}
