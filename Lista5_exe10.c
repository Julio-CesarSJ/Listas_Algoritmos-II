#include<stdio.h>

int main()
{
  int a, *b, **c, ***d;

  printf("\n Insira um valor inteiro para A: \n");
  scanf("%d",&a);

  b = &a;
  c = &b;
  d = &c;

  *b *= 2;

  printf("\n Dobro: %d ", *b);

  **c /= 2;
  **c *= 3;

  printf(" Triplo: %d ", **c);

  ***d /= 3;
  ***d *= 4;

  printf(" Quadruplo: %d ", ***d);

  printf("\n");

  return 0;
}
