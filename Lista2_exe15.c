#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo;

  arquivo = fopen("PRODUTOS.txt","w");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  fprintf(arquivo,"Codigo, Descricao, Preco \n");

  fclose(arquivo);

  printf("\n Arquivo Criado com sucesso!\n");

  return 0;
}
