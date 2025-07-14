#include<stdio.h>

typedef struct
{
  float hora;
  float minuto;
  float segundo;
} Tempo;

int main()
{
  Tempo Hora[5];

  float hora_total[5];
  float Maior = 0;
  int indice;

  for(int i = 0; i < 5; i++)
  {
    printf("\n=== Hora %d ===\n",(i + 1));

    printf("\n Digite a hora: \n");
    scanf("%f",&Hora[i].hora);

    printf("\n Digite os minutos: \n");
    scanf("%f",&Hora[i].minuto);

    printf("\n Digite os segundos: \n");
    scanf("%f",&Hora[i].segundo);
  }

  for(int i = 0; i < 5; i++)
  {
    hora_total[i] = ((Hora[i].hora) + (Hora[i].minuto / 60) + (Hora[i].segundo / 3600));
  }

  for(int i = 0; i < 5; i++)
  {
    if(hora_total[i] > Maior)
    {
      Maior = hora_total[i];
      indice = i;
    }
  }

  printf("\n A maior hora eh a hora %d: %.2f hora(s) \n", indice, Maior);

  return 0;
}
