#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int N;

char *Inverter(char string[N])
{
  char *p;
  int tamanho;
  int j = 0;

  tamanho = strlen(string);

  p = (char *)calloc(N, sizeof(char));

  for(int i = tamanho; i >= 0; i--)
  {
    *(p + j) = string[i];
    j++;
  }

  return p;
}

int main()
{
  char *p_texto;

  do
  {
    printf("\n Qual o tamanho da string? \n");
    scanf("%d", &N);
    fflush(stdin);
  }while(N <= 0);

  char texto[N];

  printf("\n Insira um texto: \n");
  scanf("%s", texto);
  fflush(stdin);

  p_texto = (char *)calloc(N, sizeof(char));

  p_texto = Inverter(texto);

  printf("\n Texto Invertido: ");

  for(int i = 1; i < N; i++)
  {
    printf("%c", *(p_texto + i));
  }

  printf("\n");

  free(p_texto);

  return 0;
}
