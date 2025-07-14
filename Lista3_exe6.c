#include<stdio.h>
#include<stdlib.h>

int Analisar_matriz(int **matriz, int numero, int linha, int coluna)
{
  for(int i = 0; i < linha; i++)
  {
    for(int j = 0; j < coluna; j++)
    {
      if(numero == *(*(matriz + i) + j))
      {
        return 1;
      }
    }
  }
  return 0;
}

int main()
{
  int **p;
  int linha, coluna, Num;

  printf("\n=== Dimensoes da Matriz ===\n");

  do
  {
    printf("\n Linha: \n");
    scanf("%d", &linha);
  }while(linha < 0);

  do
  {
    printf("\n Coluna: \n");
    scanf("%d", &coluna);
  }while(coluna < 0);

  p = (int **)malloc(linha * sizeof(int*));
  if(p == NULL)
  {
    printf("\n Erro na alocacao de memoria! \n");
    exit(1);
  }

  for(int i = 0; i < linha; i++)
  {
    p[i] = (int *)malloc(coluna * sizeof(int));
    if((p + i) == NULL)
    {
      printf("\n Erro na alocacao de memoria! \n");
      exit(1);
    }
  }

  for(int i = 0; i < linha; i++)
  {
    for(int j = 0; j < coluna; j++)
    {
      printf("\n Digite um valor para Matriz[%d][%d]: ", (i + 1), (j + 1));
      scanf("%d", &*(*(p + i) + j)); 
    }
  }
  printf("\n");

  for(int i = 0; i < linha; i++)
  {
    for(int j = 0; j < coluna; j++)
    {
       printf(" %d ", *(*(p + i) + j));
    }
    printf("\n");
  } 

  printf("\n Digite um valor para ser analisado: \n");
  scanf("%d", &Num);

  if(Analisar_matriz(p, Num, linha, coluna) == 1)
  {
    printf("\n O valor digitado esta na matriz! \n");
  }
  else
  {
    printf("\n O valor digitado nao esta na matriz! \n");
  }

  return 0;
}
