#include<stdio.h>
#include<stdlib.h>

int main()
{
  int N;
  int *p;

  do
  {
    printf("\n Digite um numero inteiro positivo: \n");
    scanf("%d", &N);
  }while(N < 0);

  p = (int *) malloc(N * sizeof(int));

  for(int i = 0; i < N; i++)
  {
    do
    {
      printf("\n Digite um valor para Array[%d]: \n", i);
      scanf("%d", &*(p + i));
    }while(!(*(p + i) >= 2));
  }

  for(int i = 0; i < N; i++)
  {
    printf("\n Array[%d]: %d", i, *(p + i));
  }

  printf("\n");

  return 0;
}
