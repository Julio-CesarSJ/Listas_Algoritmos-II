#include<stdio.h>

int categoria(int idade)
{
  if(idade < 5)
  {
    printf("\n Invalido \n");
  }
  else if((idade >= 5) && (idade <= 7))
  {
    printf("\n Infantil A \n");
  }
  else if((idade >= 8) && (idade <= 10))
  {
    printf("\n Infantil B \n");
  }
  else if((idade >= 11) && (idade <= 13))
  {
    printf("\n Juvenil A \n");
  }
  else if((idade >= 14) && (idade <= 17))
  {
    printf("\n Juvenil B \n");
  }
  else if(idade >= 18)
  {
    printf("\n Adulto \n");
  }
  return 0;
}

int main()
{
  int idade;
  
  printf("\n Digite a idade do nadador: \n");
  scanf("%d",&idade);
  
  categoria(idade);
  
  return 0;
}
