#include<stdio.h>

int main()
{
  int A, B;
  int *pA = &A, *pB = &B;

  printf("\n A: %p   B: %p \n",pA, pB);

  printf("\n Insira o valor de A: \n");
  scanf("%d",&A);

  printf("\n Insira o valor de B: \n");
  scanf("%d",&B);

  if(pB > pA)
  {
    printf("\n B tem o maior endereco, seu conteudo eh: %d \n",*pB);
  }
  else
  {
    printf("\n A tem o maior endereco, seu conteudo eh: %d \n",*pA);
  }


  return 0;
}
