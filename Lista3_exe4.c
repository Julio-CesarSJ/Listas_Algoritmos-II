#include<stdio.h>
#include<stdlib.h>

int main()
{
  unsigned int N;
  int *p;

  printf("\n Digite um valor para N: \n");
  scanf("%d", &N);

  p = (int *) malloc(N * sizeof(int));
   
  for(int i = 0; i < N; i++)
  {
    printf("\n Digite um valor para Array[%d]: \n", (i + 1));
    scanf("%d", &*(p + i));
  }

  for(int i = 0; i < N; i++)
  {
    printf("\n Array[%d] = %d ", i, *(p + i));
  }

  printf("\n");

  return 0;
} 
