#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *arquivo, *arquivo2;
  int Menu, Numero;
  float Nota1, Nota2, Media;
  char Nome[30], cabecalho[50];
  int submenu;
  char num[30], n_1[10], n_2[10];
  float N_1, N_2;

  do
  {
    printf("\n 1.Criar \n 2.Incluir \n 3.Sair \n Digite a opcao desejada\n");
    scanf("%d", &Menu);
    if(Menu == 1)
    {
      arquivo = fopen("Boletim.csv","w");
      if(arquivo == NULL)
      {
        printf("\n Erro ao abrir o arquivo!\n");
	exit(1);
      }
      fprintf(arquivo," Numero, Nome, Nota1, Nota2 \n");
      fclose(arquivo);
    }
    if(Menu == 2)
    {
      do
      {
        arquivo = fopen("Boletim.csv", "a");
	if(arquivo == NULL)
	{
          printf("\n Erro ao abrir o arquivo!\n");
	  exit(1);
	}

	printf("\n Digito o Numero: \n");
	scanf("%d", &Numero);
	fflush(stdin);

	printf("\n Digite o Nome: \n");
	scanf("%s", Nome);
	fflush(stdin);

	printf("\n Digite a Nota 1: \n");
	scanf("%f", &Nota1);
	fflush(stdin);

	printf("\n Digite a nota 2: \n");
	scanf("%f", &Nota2);
	fflush(stdin);

	fprintf(arquivo,"%d, %s, %0.2f, %0.2f \n", Numero, Nome, Nota1, Nota2);

	fclose(arquivo);

	printf("\n Continuar Inserindo?\n  Sim(1)   Nao(0)\n");
	scanf("%d", &submenu);

      }while(submenu != 0);

      arquivo2 = fopen("Boletim.csv", "r");
      if(arquivo2 == NULL)
      {
        printf("\n Erro ao abrir o arquivo!\n");
	exit(1);
      }

      fscanf(arquivo2,"%[^\n]\n",cabecalho);

      while(fscanf(arquivo2," %[^,],%[^,], %[^,], %[^\n]\n",num,Nome,n_1,n_2) == 4)
      {
        N_1 = atof(n_1);
	N_2 = atof(n_2);

	Media = (N_1 + N_2) / 2;

	printf("\n Numero: %s ",num);
	printf("\n Nome: %s ",Nome);
	printf("\n Nota 1: %0.2f ",N_1);
	printf("\n Nota 2: %0.2f ",N_2);
	printf("\n Media: %0.2f \n",Media);
      }
      fclose(arquivo2);

    }
  }while(Menu != 3);

  return 0;
}
