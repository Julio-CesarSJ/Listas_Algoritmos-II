#include<stdio.h>

int Conceito(float Nota)
{
    if((Nota < 0) || (Nota > 10))
    {
        printf("\n Invalido! \n");
    }
    if((Nota >= 0) && (Nota < 5))
    {
        printf("\n Conceito D! \n");
    }
    if((Nota >= 5) && (Nota < 7))
    {
        printf("\n Conceito C! \n");
    }
    if((Nota >= 7) && (Nota < 9))
    {
        printf("\n Conceito B! \n");
    }
    if((Nota >= 9) && (Nota <= 10))
    {
        printf("\n Conceito A! \n");
    }
}

int main()
{
    float Media;

    printf("\n Insira a media de um aluno: \n");
    scanf("%f",&Media);

    Conceito(Media);

    return 0;
}
