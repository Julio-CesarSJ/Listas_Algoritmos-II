#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Alterar(char Codigo[15])
{
  FILE *Arquivo;
  FILE *Temporario;
  char cabecalho[50], resto_linha[100], Cliente[15];
  char nome[50], endereco[50], fone[15];

  Arquivo = fopen("Clientes.csv","r");
  if(Arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  Temporario = fopen("temp.csv","w");
  if(Temporario == NULL)
  {
    printf("\n Erro ao abrir o arquivo temporario! \n");
    exit(1);
  }

  fscanf(Arquivo,"%[^\n]\n",cabecalho);
  fprintf(Temporario," %s \n",cabecalho);

  while(fscanf(Arquivo,"%[^,],%[^\n]\n",Cliente, resto_linha) == 2)
  {
    if(strcmp(Codigo, Cliente) == 0)
    {
      printf("\n Digite o nome: \n");
      scanf("%s",nome);
      fflush(stdin);

      printf("\n Digite o enderoco: \n");
      scanf("%s",endereco);
      fflush(stdin);
      
      printf("\n Digite o fone: \n");
      scanf("%s",fone);
      fflush(stdin);

      fprintf(Temporario," %s, %s, %s, %s \n",Cliente, nome, endereco, fone);
    }
    else
    {
      fprintf(Temporario," %s,%s \n",Cliente, resto_linha);
    }
  }

  fclose(Arquivo);
  fclose(Temporario);

  remove("Clientes.csv");
  rename("temp.csv", "Clientes.csv");

}

int main()
{
  int Menu;
  char Cod_cli[15];

  do
  {
    printf("\n Deseja Alterar os dados de um cliente? 1 para sim / 0 para nao \n");
    scanf("%d",&Menu);

    if(Menu != 1)
    {
      continue;
    }

    else
    {
      printf("\n Digite o Codigo do cliente que deseja alterar os dados: \n");
      scanf("%s",Cod_cli);

      Alterar(Cod_cli);
    }


  }while(Menu != 0);

  return 0;
}
