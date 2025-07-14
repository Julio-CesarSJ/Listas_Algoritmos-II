#include<stdio.h>

typedef struct
{
  int ano;
  int mes;
  int dia;
}Data;

typedef struct
{
  char Nome[100];
  Data Nascimento;
}Informacoes;

int main()
{
  Informacoes Pessoas[6];

  int Idade_dias[6];
  int mais_velho = 0, mais_novo = 0;
  int indice_velho, indice_novo;

  for(int i = 0; i < 6; i++)
  {
    printf("\n=== Pessoa %d ===\n", (i + 1));
    
    printf("\n Digite o Nome: \n");
    scanf("%s",Pessoas[i].Nome);
    fflush(stdin);

    printf("\n Digite a Data de Nascimento: \n");

    printf("\n Dia: ");
    scanf("%d",&Pessoas[i].Nascimento.dia);
    fflush(stdin);

    printf("\n Mes: ");
    scanf("%d",&Pessoas[i].Nascimento.mes);
    fflush(stdin);

    printf("\n Ano: ");
    scanf("%d",&Pessoas[i].Nascimento.ano);
    fflush(stdin);
  }

  for(int i = 0; i < 6; i++)
  {
    Idade_dias[i] = ((Pessoas[i].Nascimento.ano * 365) + (Pessoas[i].Nascimento.mes * 30) + (Pessoas[i].Nascimento.dia));
  }

  for(int i = 0; i < 6; i++)
  {
    if(Idade_dias[i] > mais_novo)
    {
      mais_novo = Idade_dias[i];
      indice_novo = i;
    }
  }

  mais_velho = mais_novo;

  for(int i = 0; i < 6; i++)
  {
    if(Idade_dias[i] < mais_velho)
    {
      mais_velho = Idade_dias[i];
      indice_velho = i;
    }
  }

  printf("\n A Pessoa %d eh a mais velha \n", (indice_velho + 1));
  printf(" Nome: %s \n", Pessoas[indice_velho].Nome);
  printf(" Data de Nascimento: %d/%d/%d \n", Pessoas[indice_velho].Nascimento.dia, 
		                             Pessoas[indice_velho].Nascimento.mes, 
		                             Pessoas[indice_velho].Nascimento.ano);
  
  printf("\n A Pessoa %d eh a mais nova \n", (indice_novo + 1));
  printf(" Nome: %s \n", Pessoas[indice_novo].Nome);
  printf(" Data de Nascimento: %d/%d/%d \n", Pessoas[indice_novo].Nascimento.dia, 
		                             Pessoas[indice_novo].Nascimento.mes, 
		                             Pessoas[indice_novo].Nascimento.ano);

  return 0;
}
