#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Verificar_Estilista(int Codigo)
{
  FILE *arquivo;
  int Cadastrado = 0, estl;
  char resto_linha[100], cabecalho[50];
  char estilista[20];

  arquivo = fopen("Estilistas.csv","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo Estilistas.csv\n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  while(fscanf(arquivo,"%[^,],%[^\n]\n",estilista, resto_linha) == 2)
  {
    estl = atoi(estilista);
    if(Codigo == estl)
    {
      Cadastrado = 1;
    }
  }
  return Cadastrado;
}

int Verificar_Estacao(int Codigo)
{
  FILE *arquivo;
  int estc, Cadastrado = 0;
  char resto_linha[100], cabecalho[50];
  char estacao[20], estilista[20];

  arquivo = fopen("Estacoes.csv","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo Estilistas.csv\n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  while(fscanf(arquivo,"%[^,],%[^\n]\n",estacao, resto_linha) == 2)
  {
    estc = atoi(estacao);
    if(Codigo == estc)
    {
      Cadastrado = 1;
    }
  }
  return Cadastrado;
}

int main()
{
  FILE *arquivo1, *arquivo2;
  int Menu, verificado;
  char Nome[50], Nome_Estacao[50];
  int Cod_Estl, Cod_Estacao;
  float Salario;
  int Ano, Cod_Roupa;
  char Descricao[20], cabecalho1[50], cabecalho2[50];
  char resto_linha1[100], resto_linha2[100];
  char nome_e[50], estacao_c[15], estilista_c[15], cod_estilista[15];
  int v1;


  do
  {
    printf("\n=== Menu ===\n");
    printf("\n Cadastrar Estacao(1) \n Cadastrar Estilista(2) \n Cadastrar Roupa(3) \n Mostrar Relatorio(4) \n Sair(0) \n");
    scanf("%d", &Menu);
    if(Menu == 1)
    {
      arquivo1 = fopen("Estacoes.csv", "a");
      if(arquivo1 == NULL)
      {
        printf("\n Erro ao abrir o arquivo Estacoes.csv!\n");
	exit(1);
      }

      printf("\n Digite o Codigo da Estacao: \n");
      scanf("%d", &Cod_Estacao);
      fflush(stdin);

      printf("\n Digite o Nomeda Estacao: \n");
      scanf("%s", Nome_Estacao);
      fflush(stdin);

      fprintf(arquivo1," %d, %s \n", Cod_Estacao, Nome_Estacao);

      fclose(arquivo1);
    }
    if(Menu == 2)
    {
      arquivo1 = fopen("Estilistas.csv","a");
      if(arquivo1 == NULL)
      {
        printf("\n Erro ao abrir o arquivo Estilistas.csv! \n");
	exit(1);
      }

      printf("\n Digite o Codigo do Estilista: \n");
      scanf("%d", &Cod_Estl);
      fflush(stdin);

      printf("\n Digite o Nome do Estilista: \n");
      scanf("%s", Nome);
      fflush(stdin);

      printf("\n Digite o Salario do Estilista: \n");
      scanf("%f", &Salario);
      fflush(stdin);

      fprintf(arquivo1," %d, %s, R$%0.2f \n", Cod_Estl, Nome, Salario);

      fclose(arquivo1);
    }
    if(Menu == 3)
    {
      arquivo1 = fopen("Roupas.csv", "a");
      if(arquivo1 == NULL)
      {
        printf("\n Erro ao abrir o arquivo Roupas.csv!\n");
	exit(1);
      }

      printf("\n Digite o Codigodo Estilista: \n");
      scanf("%d", &Cod_Estl);

      verificado = Verificar_Estilista(Cod_Estl);

      if(verificado == 1)
      {
        printf("\n Estilista Cadastrado! \n");
      }
      else
      {
        printf("\n Estilasta sem Cadastro!");
	continue;
      }

      printf("\n Digite o Codigo da Estacao: \n");
      scanf("%d", &Cod_Estacao);

      verificado = Verificar_Estacao(Cod_Estacao);

      if(verificado == 1)
      {
        printf("\n Estacao Cadastrada! \n");
      }
      else
      {
        printf("\n Estacao sem Cadastro! \n");
	continue;
      }

      printf("\n Digite o Codigo da Roupa: \n");
      scanf("%d", &Cod_Roupa);
      fflush(stdin);

      printf("\n Digite o Ano da Roupa: \n");
      scanf("%d", &Ano);
      fflush(stdin);

      printf("\n Digite a Descricao da Roupa: \n");
      scanf("%s", Descricao);
      fflush(stdin);

      fprintf(arquivo1," %d, %d, %d, %s, %d \n", Cod_Estl, Cod_Estacao, Cod_Roupa, Descricao, Ano);

      fclose(arquivo1);

    }
    if(Menu == 4)
    {
      printf("\n Digite o Codigo de uma Estacao! \n");
      scanf("%d", &Cod_Estacao);

      verificado = Verificar_Estacao(Cod_Estacao);

      if(verificado != 1)
      {
        printf("\n Estacao sem Cadastro!\n");
	continue;
      }
      arquivo1 = fopen("Roupas.csv","r");
      if(arquivo1 == NULL)
      {
        printf("\n Erro ao abrir o arquivo Roupas.csv!\n");
	exit(1);
      }

      fscanf(arquivo1," %[^\n]\n",cabecalho1);

      while(fscanf(arquivo1," %[^,], %[^,], %[^\n]\n", estilista_c, estacao_c, resto_linha1) == 3)
      {
        v1 = atoi(estacao_c);
        if(Cod_Estacao == v1)
	{
          arquivo2 = fopen("Estilistas.csv", "r");
	  if(arquivo2 == NULL)
	  {
            printf("\n Erro ao abrir o arquivo Estilistas!\n");
	    exit(1);
	  }
	  fscanf(arquivo2," %[^\n]\n",cabecalho2);

	  while(fscanf(arquivo2," %[^,], %[^,], %[^\n]\n",cod_estilista, nome_e, resto_linha2) == 3 )
	  {
            
	    if(strcmp(estilista_c, cod_estilista) == 0)
	    {
              printf("\n %s  ",nome_e);
	    }
	  }
	  fclose(arquivo2);

	  printf(" %s   %s    %s\n", estilista_c, estacao_c, resto_linha1);
	}
      }

      fclose(arquivo1);
    }
  }while(Menu != 0);



  return 0;
}
