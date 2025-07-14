#include<stdio.h>

int Parimpar(int num)
{
    if(num % 2 == 0)
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
    int Num;

    printf("\n Digite um numero: \n");
    scanf("%d",&Num);

    if(Parimpar(Num) == 1)
    {
        printf("\n Eh par! \n");
    }

    else
    {
        printf("\n Eh impar! \n");
    }

    return 0;
}
