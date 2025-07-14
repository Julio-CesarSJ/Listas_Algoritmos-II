#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
  int dia;
  int mes;
  int ano;
}Data;

int Cadastro(char Cliente[15])
{
  FILE *Arquivo_Busca;
  char Cliente_Busca[100], proxima_linha[100];
  int encontrado = 0, Parada = 1;
  char cabecalho[5];

  Arquivo_Busca = fopen("Clientes.csv","r");

  if(Arquivo_Busca == NULL)
  {
    printf("\nErro na abertura!!\n");
    exit(1);
  }

  fscanf(Arquivo_Busca,"%[^\n]\n", cabecalho);

  while(fscanf(Arquivo_Busca,"%[^,],%[^\n]\n",Cliente_Busca,proxima_linha) == 2)
  {
    if(strcmp(Cliente, Cliente_Busca) == 0)
    {
      encontrado = 2; 
    }
  }

  fclose(Arquivo_Busca);

  return encontrado;
}

int main()
{
  Data emissao;
  Data vencimento;

  FILE *Arquivo;
  float Valor_doc;
  char Cod_cli[15], Num_doc[10];
  int Menu, cadastrado;

  Arquivo = fopen("Recebimentos.csv","a");

  if(Arquivo == NULL)
  {
    printf("\nErro na abertuta!!\n");
    return 1;
  }

  do
  {
    printf("\n Deseja inserir um recebimento? 1 para sim / 0 para nao\n");
    scanf("%d",&Menu);
 
    if(Menu != 1)
    {
      continue;
    }

    else
    {

      printf("\n Digite o Codigo do cliente: \n");
      scanf("%s",Cod_cli);
      fflush(stdin);

      cadastrado = Cadastro(Cod_cli);

      if(cadastrado == 2)
      {
        printf("\n Codigo: %s - Cliente cadastrado! \n",Cod_cli);
      }
      else
      {
        printf("\n Codigo: %s - Cliente nao cadastrado! \n",Cod_cli);
        continue;
      }

      printf("\n Digite a Data de Emissao: \n");
      printf("\n Dia: ");
      scanf("%d", &emissao.dia);
      fflush(stdin);
      printf("\n Mes: ");
      scanf("%d", &emissao.mes);
      fflush(stdin);
      printf("\n Ano: ");
      scanf("%d", &emissao.ano);
      
      printf("\n Digite a Data de Vencimento: \n");
      printf("\n Dia: ");
      scanf("%d", &vencimento.dia);
      fflush(stdin);
      printf("\n Mes: ");
      scanf("%d", &vencimento.mes);
      fflush(stdin);
      printf("\n Ano: ");
      scanf("%d", &vencimento.ano);
      
      printf("\n Digite o Numero do documento: \n");
      scanf("%s",Num_doc);
      fflush(stdin);
     
      printf("\n Digite o Valor do documento: \n");
      scanf("%f", &Valor_doc);
      fflush(stdin);

      fprintf(Arquivo,"%s, %s, %0.2f, %d/%d/%d, %d/%d/%d \n",Cod_cli,Num_doc,Valor_doc,
		      					  emissao.dia,emissao.mes,emissao.ano,
		      					  vencimento.dia,vencimento.mes,vencimento.ano);
    }
  }while(Menu != 0);

  fclose(Arquivo);

  return 0;
}
