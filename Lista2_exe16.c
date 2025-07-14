#include<stdio.h>
#include<stdlib.h>

int Verificar_COD(int codigo)
{
  FILE *arq;
  int existe = 0;
  char cod[15], resto_linha[50], cabecalho[50];
  int codig;

  arq = fopen("PRODUTOS.txt","r");
  if(arq == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  fscanf(arq,"%[^\n]\n",cabecalho);

  while(fscanf(arq,"%[^,], %[^\n]\n",cod, resto_linha) == 2)
  {
    codig = atoi(cod);
    if(codigo == codig)
    {
      existe += 1;
    }
  }

  fclose(arq);

  return existe;
}

int main()
{
  FILE *arquivo;
  char Descricao[50];
  int Codigo, menu, existente = 0;
  float Preco;

  do
  {
    existente = 0;	  
    printf("\n Deseja inserir um novo produto? \n   Sim(1)   Nao(0) \n");
    scanf("%d", &menu);

    if(menu != 1)
    {
      continue;
    }

    arquivo = fopen("PRODUTOS.txt", "a");
    if(arquivo == NULL)
    {
      printf("\n Erro ao abrir o arquivo! \n");
      exit(1);
    } 
  
    printf("\n Digite o Codigo do Produto: \n");
    scanf("%d", &Codigo);
    fflush(stdin);

    existente = Verificar_COD(Codigo);

    if(existente != 0)
    {
      printf("\n Este codigo ja esta sendo usado! \n");
      existente = 0;
      continue;
    }

    printf("\n Digite a Descricao do Produto: \n");
    scanf("%s", Descricao);
    fflush(stdin);

    printf("\n Digite o Preco do Produto: \n");
    scanf("%f", &Preco);
    fflush(stdin);

    fprintf(arquivo," %d, %s, %0.2f \n",Codigo, Descricao, Preco);

    fclose(arquivo);

  }while(menu != 0);

  return 0;
}
