#include<stdio.h>

int perfeito(int Num)
{
    int soma = 0;
    for(int i = 1; i != Num; i++)
    {
        if(Num % i == 0)
        {
            soma += i;
        }
    }

    if(soma == Num)
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
    int numero;

    printf("\n Digite um numero: \n");
    scanf("%d",&numero);

    if(perfeito(numero) == 1)
    {
        printf("\n %d eh perfeito! \n",numero);
    }

    else
    {
        printf("\n %d nao eh perfeito! \n",numero);
    }

    return 0;
}
