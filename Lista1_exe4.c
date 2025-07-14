#include<stdio.h>
#include<math.h>

int Baskara1(int a, int b, int c)
{
    int delta, raiz1;

    delta = (b * b) - (4 * a * c);

    raiz1 = (-b + sqrt(delta)) / (2 * a);

    return raiz1;
}

int Baskara2(int A,int B, int C)
{
    int delta, raiz2;

    delta = (B * B) - (4 * A * C);

    raiz2 = (-B - sqrt(delta)) / (2 * A);

    return raiz2;
}

int main()
{
    int a, b, c, resultado1, resultado2;

    printf("\n Valor de A: ");
    scanf("%d",&a);

    printf("\n Valor de B: ");
    scanf("%d",&b);

    printf("\n Valor de C: ");
    scanf("%d",&c);

    resultado1 = Baskara1(a,b,c);

    resultado2 = Baskara2(a,b,c);

    printf("\n As raizes sao %d e %d \n", resultado1, resultado2);
}
