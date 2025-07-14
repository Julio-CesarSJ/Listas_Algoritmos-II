#include<stdio.h>

char imprimir(char t[10])
{
  printf("\n %s \n",t);
  
  return 0;
}

int main()
{
  char texto[10];
  
  printf("\n Insira um texto: \n");
  scanf("%s",&texto);
  
  imprimir(texto);
  
  return 0;
}
