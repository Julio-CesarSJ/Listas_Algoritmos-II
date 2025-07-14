#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Remover_cli(char Codigo[15])
{
  FILE *temporario_cli;
  FILE *Arquivo;
  char cabecalho[50];
  char cliente[100], resto_linha[100];

  Arquivo = fopen("Clientes.csv","r");
  if(Arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo!!1 \n");
    exit(1);
  }

  temporario_cli = fopen("temp_cli.csv","w");
  if(temporario_cli == NULL)
  {
    printf("\n Erro ao abrir o arquivo temporario!!1 \n");
    exit(1);
  }

  fscanf(Arquivo, "%[^\n]\n", cabecalho);
  fprintf(temporario_cli,"%s \n",cabecalho);

  while(fscanf(Arquivo,"%[^,],%[^\n]\n",cliente,resto_linha) == 2)
  {
    if(strcmp(Codigo, cliente) != 0)
    {
      fprintf(temporario_cli," %s,%s \n", cliente, resto_linha);
    }
  }

  fclose(Arquivo);
  fclose(temporario_cli);

  remove("Clientes.csv");
  rename("temp_cli.csv", "Clientes.csv");
}

void Remover_reb(char Codigo[15])
{
  FILE *temporario_reb;
  FILE *Arquivo2;
  char cabecalho[50];
  char Cli_cod[50], resto_linha[50];

  Arquivo2 = fopen("Recebimentos.csv","r");
  if(Arquivo2 == NULL)
  {
    printf("\n Erro ao abrir o arquivo!!2 \n");
    exit(1);
  }

  temporario_reb = fopen("temp_reb.csv","w");
  if(temporario_reb == NULL)
  {
    printf("\n Erro ao abrir o arquivo temporario!!2 \n");
    exit(1);
  }

  fscanf(Arquivo2, "%[^\n]\n", cabecalho);
  fprintf(temporario_reb,"%s \n",cabecalho);

  while(fscanf(Arquivo2,"%[^,],%[^\n]\n", Cli_cod, resto_linha) == 2)
  {
    if(strcmp(Codigo, Cli_cod) != 0)
    {
      fprintf(temporario_reb," %s,%s \n", Cli_cod, resto_linha);
    }
  }

  fclose(Arquivo2);
  fclose(temporario_reb);

  remove("Recebimentos.csv");
  rename("temp_reb.csv", "Recebimentos.csv");
}


int main()
{
  FILE *Arquivo;
  int Menu;
  char Cod_cli[15];

  do
  {
    printf("\n Deseja remover um cliente? 1 para sim / 0 para nao\n");
    scanf("%d",&Menu);

    if(Menu != 1)
    {
      continue;
    }

    else
    {
      printf("\n Digite o Codigo do cliente que deseja remover: \n");
      scanf("%s",Cod_cli);

      Remover_cli(Cod_cli);
      Remover_reb(Cod_cli);
    }

  }while(Menu != 0);


  return 0;
}
