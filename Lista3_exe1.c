#include<stdio.h>

int main()
{
  int char_t, int_t, float_t, double_t;

  char_t = sizeof(char);

  int_t = sizeof(int);

  float_t = sizeof(float);

  double_t = sizeof(double);

  printf("\n=Tamanho em bytes dos tipos de dados=\n");

  printf(" char: %d \n int: %d \n float: %d \n double: %d \n", char_t, int_t, float_t, double_t);

  return 0;
}
