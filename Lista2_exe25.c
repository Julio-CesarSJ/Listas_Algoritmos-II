#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo, *temporario;
  float Valor, V_min, V_max, desconto;
  char Codigo[10], Descricao[50], Preco[10], cabecalho[50];

  printf("\n Digite o desconto desejado: \n");
  scanf("%f", &desconto);

  printf("\n Preco minimo: \n");
  scanf("%f", &V_min);

  printf("\n Preco maximo: \n");
  scanf("%f", &V_max);

  arquivo = fopen("PRODUTOS.txt","r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo! \n");
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
    
  desconto /= (float) 100;

  while(fscanf(arquivo," %[^,], %[^,], %[^\n]\n", Codigo, Descricao, Preco) == 3)
  {
    Valor = atof(Preco);
    if((Valor > V_min) && (Valor < V_max))
    { 
      Valor = Valor - (Valor * desconto);
      
      fprintf(temporario," %s, %s, %0.2f \n",Codigo, Descricao, Valor);
    }
    else
    {
      fprintf(temporario," %s, %s, %s \n",Codigo, Descricao, Preco);
    }
  }

  fclose(arquivo);
  fclose(temporario);

  remove("PRODUTOS.txt");
  rename("temp.txt","PRODUTOS.txt");

  return 0;
}
