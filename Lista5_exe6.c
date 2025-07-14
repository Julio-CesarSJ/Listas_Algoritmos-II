#include<stdio.h>

int main()
{
  int Array[5];
  int *pArray;
  pArray = Array;

  for(int i = 0; i < 5; i++)
  {
    printf("\n Insira um valor para o Array[%d]: \n", i + 1);
    scanf("%d", &*(pArray + i)); 
    printf("\n \t %p \n", &Array[i]);
  }


  printf("\n==Endereco das posicoes com valores pares==\n");

  for(int i = 0; i < 5; i++)
  {
    if(*(pArray + i) % 2 == 0)
    {
      printf("\n Array[%d]: %p \n", i + 1, (pArray + i));
    }
  }


  return 0;
}
