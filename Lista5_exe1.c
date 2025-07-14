#include<stdio.h>

int main()
{
  int A, B;
  int *pA, *pB;

  pA = &A;
  pB = &B;

  if(pA > pB)
  {
    printf("\n Endereco de A: %p \n",pA);
  }
  else
  {
    printf("\n Endereco de B: %p \n",pB);
  }

  return 0;
}
