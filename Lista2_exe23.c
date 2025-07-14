#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo;
  char Codigo[20], Descricao[50], Preco[20], cabecalho[50];
  char Letra, P_letra;
  float Valor, P_minimo, P_maximo;

  arquivo = fopen("PRODUTOS.txt","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  printf("\n Escolha uma letra: \n");
  scanf("%c", &P_letra);

  printf("\n Digite o preco minimo: \n");
  scanf("%f", &P_minimo);

  printf("\n Digite o preco maximo: \n");
  scanf("%f", &P_maximo);

  while(fscanf(arquivo," %[^,], %[^,], %[^\n]\n", Codigo, Descricao, Preco) == 3)
  {
    Letra = Descricao[0];
    Valor = atof(Preco);
    if((Letra == P_letra) && ((Valor >= P_minimo) && (Valor <= P_maximo)))
    {
      printf(" %s, %s, %s \n",Codigo,Descricao,Preco);
    }
  }

  fclose(arquivo);

  return 0;
} 
