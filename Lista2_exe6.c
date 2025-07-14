#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
  int dia;
  int mes;
  int ano;
}Data;

void Alterar_reb(char Codigo[15], char Doc[10])
{
  Data emissao;
  Data venc;

  FILE *arquivo;
  FILE *temporario;
  char cliente[15], num_doc[10];
  char cabecalho[100], resto_linha[100];
  float Valor;

  arquivo = fopen("Recebimentos.csv", "r");

  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo\n");
    exit(1);
  }

  temporario = fopen("temp.csv", "w");

  if(temporario == NULL)
  {
    printf("\n Erro ao abrir o arquivo temporario\n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n", cabecalho);
  fprintf(temporario," %s\n", cabecalho);

  while(fscanf(arquivo,"%[^,],%[^,],%[^\n]\n", cliente, num_doc, resto_linha) == 3)
  {
    if(strcmp(Codigo, cliente) == 0)
    {
      printf("\n Digite o Valor do Documento: \n");
      scanf("%f", &Valor);

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
      scanf("%d", &venc.dia);
      fflush(stdin);
      printf("\n Mes: ");
      scanf("%d", &venc.mes);
      fflush(stdin);
      printf("\n Ano: ");
      scanf("%d", &venc.ano);

      fprintf(temporario," %s, %s, %0.2f, %d/%d/%d, %d/%d/%d \n", cliente, num_doc, Valor, emissao.dia, emissao.mes, emissao.ano,
		                                               venc.dia, venc.mes, venc.ano);
    }
    else
    {
      fprintf(temporario," %s, %s, %s \n", cliente, num_doc, resto_linha);
    }
  }

  fclose(arquivo);
  fclose(temporario);

  remove("Recebimentos.csv");
  rename("temp.csv", "Recebimentos.csv");

}

int main()
{
  int Menu;
  char Cod_cli[15], Num_doc[10];

  do
  {
    printf("\n Deseja alterar um Recebimento? 1 para sim / 0 para nao \n");
    scanf("%d",&Menu);

    if(Menu != 1)
    {
      continue;
    }

    else
    {
      printf("\n Digite o codigo do cliente: \n");
      scanf("%s",Cod_cli);
      fflush(stdin);

      printf("\n Digite o numero do documento: \n");
      scanf("%s",Num_doc);
      fflush(stdin);

      Alterar_reb(Cod_cli,Num_doc);
    }
  }while(Menu != 0);

  return 0;
}
