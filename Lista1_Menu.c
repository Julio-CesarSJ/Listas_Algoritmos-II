#include<stdio.h>
#include"LFuncao.h"

int main()
{
  int exercicio, num1, num2, num3, i, soma;
  char texto[100];
  float nota, resultado;

  printf("\n Escolha um exercicio entre 1-15(0 para sair): \n");

  do
  {
    printf("\n Exercicio: \n");
    scanf("%d",&exercicio);

    if((exercicio < 0) || (exercicio > 15))
    {
      printf("\n Invalido!, tente novamente \n");
    }
    if(exercicio == 1)
    {
      OI();
    }
    if(exercicio == 2)
    {
      printf("\n Insira um texto: \n");
      scanf("%s",texto);

      imprimir(texto);
    }
    if(exercicio == 3)
    {
      printf("\n Insira um texto: \n");
      scanf("%s",texto);

      printf("\n %s \n", Print(texto));
    }
    if(exercicio == 4)
    {
      printf("\n Digite um valor para A: \n");
      scanf("%d",&num1);

      printf("\n Digite um valor para B: \n");
      scanf("%d",&num2);

      printf("\n Digite um valor para C: \n");
      scanf("%d",&num3);

      printf("\n As raizes sao %d e %d \n",Baskara1(num1,num2,num3),Baskara2(num1,num2,num3));
    }
    if(exercicio == 5)
    {
      printf("\n Digite o tempo em segundos: \n");
      scanf("%d",&num1);

      Tempo(num1);
    }
    if(exercicio == 6)
    {
      printf("\n Digite sua idade em anos, meses e dias \n");

      printf("\n Anos: \n");
      scanf("%d",&num1);

      printf("\n Meses: \n");
      scanf("%d",&num2);

      printf("\n Dias: \n");
      scanf("%d",&num3);

      printf("\n Sua idade equivale a %d dias \n",ConverterDias(num1,num2,num3));
    }
    if(exercicio == 7)
    {
      printf("\n Digite um numero: \n");
      scanf("%d",&num1);

      if(perfeito(num1) == 1)
      {
        printf("\n %d eh perfeito! \n",num1);
      }

      else
      {
        printf("\n %d nao eh perfeito! \n",num1);
      }
    }
    if(exercicio == 8)
    {
      printf("\n Digite a idade do nadador: \n");
      scanf("%d",&num1);

      categoria(num1);
    }
    if(exercicio == 9)
    {
      printf("\n Digite um numero: \n");
      scanf("%d",&num1);

      if(sinal(num1) == 1)
      {
        printf("\n %d eh positivo!", num1);
      }

      else
      {
        printf("\n %d eh negativo!", num1);
      }
    }
    if(exercicio == 10)
    {
      printf("\n Digite um numero: \n");
      scanf("%d",&num1);

      if(Parimpar(num1) == 1)
      {
        printf("\n Eh par! \n");
      }

      else
      {
        printf("\n Eh impar! \n");
      }
    }
    if(exercicio == 11)
    {
      printf("\n Insira a media de um aluno: \n");
      scanf("%f",&nota);

      Conceito(nota);
    }
    if(exercicio == 12)
    {
      printf("\n Digite um valor: \n");
      scanf("%d",&num1);

      printf("\n Digite um valor: \n");
      scanf("%d",&num2);

      printf("\n Digite um valor: \n");
      scanf("%d",&num3);

      OrdemC(num1,num2,num3);
    }
    if(exercicio == 13)
    {
      printf("\n Digite um numero: \n");
      scanf("%d",&num1);

      printf("\n Digite um numero: \n");
      scanf("%d",&num2);

      printf("\n Digite um numero: \n");
      scanf("%d",&num3);

      printf("\n %s \n",Triangulo(num1,num2,num3));
    }
    if(exercicio == 14)
    {
      soma = 0;
      resultado = 0;

      for(i = 0; ;i++)
      {
        printf("\n Digite um numero(0 para sair): \n");
        scanf("%d",&num1);

        if(num1 == 0)
        {
          break;
        }

        soma = Media(num1,soma,1);
      }

      resultado = Media(0,soma,i);

      printf("\n A media aritmetica eh %f \n",resultado);
    }
    if(exercicio == 15)
    {
      printf("\n Digite um numero: \n");
      scanf("%d",&num1);

      printf("\n Digite outro numero: \n");
      scanf("%d",&num2);

      printf("\n %d \n",Potencia(num1,num2));
    }


  }
  while(exercicio != 0);

  printf("\n Fim \n");

  return 0;
}
