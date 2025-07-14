#include<stdio.h>

int ConverterDias(int Ano, int Mes, int Dia)
{
  int soma = 0;
  
  soma += Mes * 31;
  soma += Ano * 365;
  soma += Dia;

  return soma;
}

int main()
{
  int dia, mes, ano;

  printf("\n Digite sua idade em anos, meses e dias \n");

  printf("\n Anos: \n");
  scanf("%d",&ano);

  printf("\n Meses: \n");
  scanf("%d",&mes);

  printf("\n Dias: \n");
  scanf("%d",&dia);

  printf("\n Sua idade equivale a %d dias \n",ConverterDias(ano,mes,dia));

  return 0;
}
