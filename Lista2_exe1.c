#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *Arquivo1, *Arquivo2;
  char *url1 = "Clientes.csv";
  char *url2 = "Recebimentos.csv";

  Arquivo1 = fopen(url1,"w");
 
  if(Arquivo1 == NULL)
  {
    printf("Erro! \n");
    exit(1);
  }

  fprintf(Arquivo1,"Cod_Cli, Nome, Endereço, Fone \n");

  fclose(Arquivo1);


  Arquivo2 = fopen(url2,"w");
 
  if(Arquivo2 == NULL)
  {
    printf("Erro! \n");
    exit(1);
  }

  fprintf(Arquivo2,"Cod_Cli, Num_doc, Valor_doc, Data_Emissao, Data_Vencimento \n");

  fclose(Arquivo2);

  return 0;
}
