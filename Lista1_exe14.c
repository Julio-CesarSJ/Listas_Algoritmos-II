#include<stdio.h>

float Media(int num, int soma, int quantidade)
{
  float media;

  soma += num;

  media = soma / quantidade;

  return media;
}

int main()
{
  int Num, i,  soma = 0;
  float resultado = 0; 

  for(i = 0; ;i++)
  {
    printf("\n Digite um numero: \n");
    scanf("%d",&Num);

    if(Num == 0)
    {
      break;
    }

    soma = Media(Num,soma,1);
  }

  resultado = Media(0,soma,i);

  printf("\n A media aritmetica eh %f \n",resultado);

  return 0;
}
