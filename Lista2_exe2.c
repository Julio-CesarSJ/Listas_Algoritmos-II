#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *Arquivo;
  char Cod_Cli[15], Fone[15], Nome[50], Endereco[50];
  int Menu;

  Arquivo = fopen("Clientes.csv","a");

  if(Arquivo == NULL)
  {
    printf("Erro! \n");
    exit(1);
  }

  do
  {
    printf("\n Adicionar cliente? 1 para sim/ 0 para nao \n");
    scanf("%d",&Menu);
    
    if(Menu != 1)
    {
      continue;
    }
    
    else
    {   
      printf("\n Digite o codigo do cliente: \n");
      scanf("%s", Cod_Cli);
      fflush(stdin);

      printf("\n Digite o nome do cliente: \n");
      scanf("%s", Nome);
      fflush(stdin);
      
      printf("\n Digite o endereco do cliente: \n");
      scanf("%s", Endereco);
      fflush(stdin);
      
      printf("\n Digite o telefone do cliente: \n");
      scanf("%s", Fone);
      fflush(stdin);
    
      fprintf(Arquivo,"%s, %s, %s, %s \n",Cod_Cli, Nome, Endereco, Fone);
    }

  }
  while(Menu != 0);
 

  fclose(Arquivo);

  return 0;
}
