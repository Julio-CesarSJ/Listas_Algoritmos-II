#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo, *temporario;
  char Codigo[20], Descricao[50], Preco[20], cabecalho[50];
  int Cod_prod, Cod;

  arquivo = fopen("PRODUTOS.txt","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo \n");
    exit(1);
  }

  temporario = fopen("temp.txt","w");
  if(temporario == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);
  fprintf(temporario," %s \n",cabecalho);

  printf("\n Digite o Codigo do produto que deseja excluir: \n");
  scanf("%d", &Cod_prod);

  while(fscanf(arquivo,"%[^,],%[^,],%[^\n]\n",Codigo, Descricao, Preco) == 3)
  {
    Cod = atoi(Codigo);
    if(Cod_prod != Cod)
    {
      fprintf(temporario," %s, %s, %s \n",Codigo, Descricao, Preco);
    }
  }

  fclose(arquivo);
  fclose(temporario);

  remove("PRODUTOS.txt");
  rename("temp.txt", "PRODUTOS.txt");

  return 0;
}
