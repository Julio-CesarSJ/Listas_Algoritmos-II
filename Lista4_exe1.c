#include<stdio.h>

typedef struct
{
  char Nome[50];
  int Idade;
  char Endereco[50];
}Dados_pessoais;

int main()
{
  Dados_pessoais Pessoa1;

  printf("\n Digite o Nome: \n");
  scanf("%[^\n]s",Pessoa1.Nome);
  fflush(stdin);

  printf("\n Digite a Idade: \n");
  scanf("%d",&Pessoa1.Idade);
  fflush(stdin);
 
  printf("\n Digite o Endereco: \n");
  scanf("%s",Pessoa1.Endereco);
  fflush(stdin); 
  



  printf("\n Nome: %s \n Idade: %d \n Endereco: %s \n",Pessoa1.Nome, Pessoa1.Idade, Pessoa1.Endereco);


  return 0;
}
