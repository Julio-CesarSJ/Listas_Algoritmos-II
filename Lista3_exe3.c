#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  char Nome[50];
  int Idade;
  char Endereco[50];
}Cadastro;

Cadastro* Alocar_memoria(int num)
{
  Cadastro *Pessoas = (Cadastro *)malloc(num * sizeof(Cadastro));

  if(Pessoas == NULL)
  {
    printf("\n Erro ao alocar memoria! \n");
    exit(1);
  }

  for(int i = 0; i < num; i++)
  {

    printf("\nInsira os dados da Pessoa %d\n", (i + 1));

    printf("\nDigite o Nome: \n");
    scanf("%s",Pessoas[i].Nome);
    fflush(stdin);

    printf("\nDigite o Endereco: \n");
    scanf("%s",Pessoas[i].Endereco);
    fflush(stdin);

    printf("\nDigite a Idade: \n");
    scanf("%d",&Pessoas[i].Idade);
    fflush(stdin);
  }

  return Pessoas;
}

int main()
{
  Cadastro *Pessoa = NULL;

  int N;
  int *t;

  do
  {
    printf("\n Digite um valor para N: \n");
    scanf("%d", &N);
  }while(N <= 0);

  Pessoa = Alocar_memoria(N);


  for(int i = 0; i < N; i++)
  {
    printf("\n===Pessoa %d===\n", (i + 1));

    printf(" Nome: %s \n Idade: %d \n Endereco: %s \n", Pessoa[i].Nome, Pessoa[i].Idade, Pessoa[i].Endereco);
  }

  return 0;
} 
