#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo;
  char Codigo[20], Descricao[50], Preco[20], cabecalho[50];
  char Letra;

  arquivo = fopen("PRODUTOS.txt","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  while(fscanf(arquivo," %[^,], %[^,], %[^\n]\n", Codigo, Descricao, Preco) == 3)
  {
    Letra = Descricao[0];
    if((Letra == 'm') || (Letra == 'M'))
    {
      printf(" %s, %s, %s \n",Codigo,Descricao,Preco);
    }
  }

  fclose(arquivo);

  return 0;
} 
