#include<stdio.h>
#include<stdlib.h>

int *Alocar_preencher(int num, int valor)
{
  int *ponteiro;

  if(num <= 0)
  {
    return NULL;
  }
 
  ponteiro = (int *)malloc(num * sizeof(int));
  
  if(ponteiro == NULL)
  {
    printf("\n Erro na alocacao de memoria \n");
    exit(1);
  }
  
  for(int i = 0; i < num; i++)
  {
    *(ponteiro + i) = valor;
  }
  
  return ponteiro;
}

int main()
{
  int N, valor;
  int *p;

  printf("\n Digite um numemo inteiro positivo: \n");
  scanf("%d", &N);

  printf("\n Digite um valor para preencher o vetor: \n");
  scanf("%d", &valor);

  p = Alocar_preencher(N, valor);

  if(p == NULL)
  {
    printf("\n Vetor Nulo \n");
  }
  else
  {
    for(int i = 0; i < N; i++)
    {
      printf("\n Vetor[%d]: %d ", (i + 1), *(p + i));
    }
    printf("\n");
  }

  return 0;
}
