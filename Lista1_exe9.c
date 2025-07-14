#include<stdio.h>

int sinal(int Num)
{
    if(Num >= 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int Numero;

    printf("\n Digite um numero: \n");
    scanf("%d",&Numero);

    if(sinal(Numero) == 1)
    {
        printf("\n %d eh positivo!", Numero);
    }

    else
    {
        printf("\n %d eh negativo!", Numero);
    }

    return 0;
}
