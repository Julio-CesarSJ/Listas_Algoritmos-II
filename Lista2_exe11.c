#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  FILE *arquivo;
  char Valor[50], parametro1[10], parametro2[10];
  char cabecalho[100], resto_linha[100];
  char cod_cli[50], num_doc[50];
  float v1, v2, v3;

  printf("\n Digite um valor: \n");
  scanf("%s", parametro1);

  printf("\n Digite outro valor: \n");
  scanf("%s", parametro2);
  
  arquivo = fopen("Recebimentos.csv", "r");
  if(arquivo == NULL)
  {
    printf("\n Erro ao abrir o arquivo!\n");
    exit(1);
  }

  fscanf(arquivo,"%[^\n]\n",cabecalho);

  while(fscanf(arquivo,"%[^,],%[^,],%[^,],%[^\n]\n",cod_cli, num_doc, Valor, resto_linha) == 4)
  {
    v1 = atof(Valor);
    v2 = atof(parametro1);
    v3 = atof(parametro2);
    if((v1 >= v2) && (v1 <= v3))
    {
      printf("\n %s, %s, %s, %s \n",cod_cli, num_doc, Valor, resto_linha);
    }
  }

  fclose(arquivo);

 return 0; 
}
