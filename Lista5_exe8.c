#include<stdio.h>

void Preencher(int Vetor[10], int Numero)
{
  int *pVetor, *pNumero;

  pVetor = Vetor;
  pNumero = &Numero;

  for(int i = 0; i < 10; i++)
  {
    *(pVetor + i) = *pNumero;

    printf("\n Array[%d]: %d \n", (i + 1), *(pVetor + i));
  }
}

int main()
{
  int Array[10];
  int Valor;

  printf("\n Digite um valor inteiro: \n");
  scanf("%d",&Valor);

  Preencher(Array, Valor);

  return 0;
}
