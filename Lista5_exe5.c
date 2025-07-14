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
  }

  for(int i = 0; i < 5; i++)
  {
    printf("\n O dobro de Array[%d]: %d \n", i + 1, 2 * (*(pArray + i)));
  }


  return 0;
}
