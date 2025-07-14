#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  FILE *arquivo;
  char Cod_cli[15], cliente[15];
  char cabecalho[50], resto_linha[100];
  
  printf("\n Digite o Codigo do cliente: \n");
  scanf("%s", Cod_cli);

  arquivo = fopen("Recebimentos.csv", "r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo!\n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  while(fscanf(arquivo,"%[^,],%[^\n]\n",cliente, resto_linha) == 2)
  {
    if(strcmp(cliente, Cod_cli) == 0)
    {
      printf("\n %s \n",resto_linha);
    }
  }

  fclose(arquivo);

  return 0;
}
