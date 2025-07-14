#include<stdio.h>

void Imprimir(int tamanho, int Vetor[tamanho])
{
  int *pVetor;

  pVetor = Vetor;

  for(int i = 0; i < tamanho; i++)
  {
    printf("\n Vetor[%d]: %d \n", i + 1, *(pVetor + i));
  }
}

int main()
{
  int tamanho;

  printf("\n Digite o tamanho do vetor: \n");
  scanf("%d",&tamanho);

  int Array[tamanho];

  for(int i = 0; i < tamanho; i++)
  {
    printf("\n Digite um valor para Vetor[%d]: \n", i + 1);
    scanf("%d",&Array[i]);
  }

  Imprimir(tamanho, Array);

  return 0;
}
