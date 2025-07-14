#include<stdio.h>

int OrdemC(int A, int B, int C)
{
    int parada = 0, i = 0;

    printf("\n Ordem Crescente:");

    while(parada != 3)
    {
        if(i == A)
        {
            printf(" %d ", A);
            parada++;
        }
        if(i == B)
        {
            printf(" %d ", B);
            parada++;
        }
        if(i == C)
        {
            printf(" %d ", C);
            parada++;
        }

        i++;
    }
    printf("\n");

    return 0;
}

int main()
{
    int Num1, Num2, Num3;

    printf("\n Digite um valor: \n");
    scanf("%d",&Num1);

    printf("\n Digite um valor: \n");
    scanf("%d",&Num2);

    printf("\n Digite um valor: \n");
    scanf("%d",&Num3);

    OrdemC(Num1,Num2,Num3);

    return 0;
}
