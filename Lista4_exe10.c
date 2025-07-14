#include<stdio.h>

typedef struct
{
  char Nome[50];
  char Esporte[50];
  int Idade;
  float Altura;
}Atleta;

int main()
{
  Atleta Atletas[5];

  int auxiliar_1, auxiliar_2, indice;
  int ordem_idade[5], ordem_indice[5];

  for(int i = 0; i < 5; i++)
  {
    printf("\n=== Atleta %d ===\n",(i + 1));

    printf("\n Nome: ");
    scanf("%s", Atletas[i].Nome);
    fflush(stdin);
    
    printf("\n Esporte: ");
    scanf("%s", Atletas[i].Esporte);
    fflush(stdin);
    
    printf("\n Idade: ");
    scanf("%d", &Atletas[i].Idade);
    fflush(stdin);
    
    printf("\n Altura: ");
    scanf("%f", &Atletas[i].Altura);
    fflush(stdin);
  }

  for(int i = 0; i < 5; i++)
  {
    ordem_idade[i] = Atletas[i].Idade;
    ordem_indice[i] = i;
  }

  for(int i = 0; i < 4; i++)
  {
    if(ordem_idade[i] > ordem_idade[i + 1])
    {
      auxiliar_1 = ordem_idade[i];
      ordem_idade[i] = ordem_idade[i + 1];
      ordem_idade[i + 1] = auxiliar_1;

      auxiliar_2 = ordem_indice[i];
      ordem_indice[i] = ordem_indice[i + 1];
      ordem_indice[i + 1] = auxiliar_2;
    }
  }

  printf("\n Atletas em ordem decrescente de Idade \n");

  for(int i = 4; i >= 0; i--)
  {
    indice = ordem_indice[i];
    printf("\n");
    printf("\n Nome: %s ", Atletas[indice].Nome);
    printf("\n Esporte: %s ", Atletas[indice].Esporte);
    printf("\n Idade: %d ", ordem_idade[indice]);
    printf("\n Altura: %.2f ", Atletas[indice].Altura);
  }

  return 0;
}
