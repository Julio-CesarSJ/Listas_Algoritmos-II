#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo;
  char Codigo[20], Descricao[50], Preco[10], cabecalho[50];
  float Valor;

  arquivo = fopen("PRODUTOS.txt","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  while(fscanf(arquivo," %[^,],%[^,],%[^\n]\n",Codigo,Descricao,Preco) == 3)
  {
    Valor = atof(Preco);
 
    if(Valor > 500)
    {
      printf("\n %s \n",Descricao);
    } 
  }

  fclose(arquivo);

  return 0;
}
