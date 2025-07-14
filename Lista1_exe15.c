#include<stdio.h>

int Potencia(int base, int expoente)
{
    int potencia;

    potencia = base;

    for(int i = 1; i != expoente; i++)
    {
        potencia *= base;
    }

    return potencia;
}

int main()
{
    int Num1, Num2;

    printf("\n Digite um numero: \n");
    scanf("%d",&Num1);

    printf("\n Digite outro numero: \n");
    scanf("%d",&Num2);

    printf("\n %d \n",Potencia(Num1,Num2));

    return 0;
}
