#include<stdio.h>

int main()
{
  int posicao = 1;
  float Array[10];
  float *pArray;
  pArray = Array;

  for(int i = 0; i < 10; i++)
  {
    printf("\n Posicao %d:", posicao);
    printf(" %p \n", (pArray + i));
    posicao++;
  }


  return 0;
}
