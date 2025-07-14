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

  int mais_velho = 0;
  float mais_alto = 0;
  int indice_velho, indice_alto;

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
    if(Atletas[i].Idade > mais_velho)
    {
      mais_velho = Atletas[i].Idade;
      indice_velho = i;
    }

    if(Atletas[i].Altura > mais_alto)
    {
      mais_alto = Atletas[i].Altura;
      indice_alto = i;
    }
  }

  printf("\n O Atleta mais Alto eh o atleta %d: %s \n", (indice_alto + 1), Atletas[indice_alto].Nome);

  printf("\n O Atleta mais Velho eh o atleta %d: %s \n", (indice_velho + 1), Atletas[indice_velho].Nome);

  return 0;
}
