#include<stdio.h>

char* imprimir(char t[100])
{
  printf("\n %s \n",t);

  return "Ok";
}

int main()
{
  char texto[100], resultado[100];

  printf("\n Insira um texto: \n");
  scanf("%s",texto);

  printf("\n %s \n", imprimir(texto));

  return 0;
}
