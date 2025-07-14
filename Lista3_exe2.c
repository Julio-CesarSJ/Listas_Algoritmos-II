#include<stdio.h>

typedef struct
{
  int Matricula;
  char Nome[50];
  int Nota1;
  int Nota2;
  int Nota3;
}Aluno_Disciplina;

int main()
{
  Aluno_Disciplina Aluno_1;

  int Tamanho = sizeof(Aluno_1);

  printf("\n A estrutura ocupa %d bytes\n",Tamanho);

  return 0;
}
