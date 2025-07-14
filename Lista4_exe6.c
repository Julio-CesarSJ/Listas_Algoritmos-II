#include<stdio.h>

typedef struct
{
  int Matricula;
  char Nome[50];
  int Nota1;
  int Nota2;
  int Nota3;
}Disciplina;

int main()
{
  Disciplina Aluno[5];

  float Media[5];
  int Maior, Num_Aluno, i;
  float Maior_Media = 0;

  for(int i = 0; i < 5; i++)
  {
    printf("\n===Aluno %d===\n", (i + 1));

    printf(" Nome: \n");
    fgets(Aluno[i].Nome, 50, stdin);
    fflush(stdin); 

    printf(" Matricula: \n");
    scanf("%d",&Aluno[i].Matricula);
    fflush(stdin); 

    printf(" Nota 1: \n");
    scanf("%d",&Aluno[i].Nota1);
    fflush(stdin);
 
    printf(" Nota 2: \n");
    scanf("%d",&Aluno[i].Nota2);
    fflush(stdin);
   
    printf(" Nota 3: \n");
    scanf("%d",&Aluno[i].Nota3);
    fflush(stdin);
  }

  for(int i = 0; i < 5; i++)
  {
    Media[i] = (float) (((Aluno[i].Nota1 + Aluno[i].Nota2) + Aluno[i].Nota3 ) / 3);
    printf("\n %d \n",Media[i]);
  }

  for(int i = 0; i < 5; i++)
  {
    Maior = 0;
    for(int j = 0; j < 5; j++)
    {
      if(Media[i] >= Media[j])
      {
        Maior++;
      }
    }
    if(Maior >= Maior_Media)
    {
      Maior_Media = Media[i];
      Num_Aluno = i;
    }
  }

  printf("\n O Aluno %d possui a maior media \n Nome: %s \n Matricula: %d \n Nota1: %d \n Nota2: %d \n Nota3: %d \n Media: %.2f \n", 
		  (Num_Aluno + 1), Aluno[Num_Aluno].Nome, Aluno[Num_Aluno].Matricula,
		  Aluno[Num_Aluno].Nota1, Aluno[Num_Aluno].Nota2, 
		  Aluno[Num_Aluno].Nota3, Media[Num_Aluno]);

  return 0;
}
