#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo, *temporario;
  char Codigo[20], Descricao[50], Preco[10], cabecalho[50];
  float Valor, aumento = 10;

  arquivo = fopen("PRODUTOS.txt","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  temporario = fopen("temp.txt","w");
  if(temporario == NULL)
  {
    printf("\n Erro ao abrir o arquivo!\n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);
  fprintf(temporario," %s \n",cabecalho);

  while(fscanf(arquivo," %[^,],%[^,],%[^\n]\n",Codigo,Descricao,Preco) == 3)
  {
    Valor = atof(Preco);
    if(Valor > 100)
    {
      Valor += aumento;
      fprintf(temporario," %s, %s, %0.2f \n",Codigo,Descricao,Valor);
    }
    else
    {
      fprintf(temporario," %s, %s, %s \n",Codigo,Descricao,Preco);
    }
  }

  fclose(arquivo);
  fclose(temporario);

  remove("PRODUTOS.txt");
  rename("temp.txt", "PRODUTOS.txt");

  return 0;
}
