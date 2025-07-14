#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo1;

  arquivo1 = fopen("Estilistas.csv", "w");
  if(arquivo1 == NULL)
  {
    printf("\n Erro ao abrir o arquivo Estilistas.csv! \n");
    exit(1);
  }

  fprintf(arquivo1,"Cod_Estl, Nome, Salario\n");

  fclose(arquivo1);




  arquivo1 = fopen("Roupas.csv", "w");
  if(arquivo1 == NULL)
  {
    printf("\n Erro ao abrir o arquivo Roupas.csv! \n");
    exit(1);
  }

  fprintf(arquivo1,"Cod_Estl, Cod_Estacao, Cod_Roupa, Descricao, Ano\n");

  fclose(arquivo1);




  arquivo1 = fopen("Estacoes.csv", "w");
  if(arquivo1 == NULL)
  {
    printf("\n Erro ao abrir o arquivo Estacoes.csv! \n");
    exit(1);
  }

  fprintf(arquivo1,"Cod_Estacao, Nome_Estacao\n");

  fclose(arquivo1);


  return 0;
}
