#include<stdio.h>

char* Triangulo(int X, int Y, int Z)
{
  if(((X < (Y + X)) && (Y < (X + Z))) && (Z < (X + Y)))
  {
    if(((X == Y) && (Y == Z)) && (X == Z))
    {
      return "Triangulo Equilatero";
    }
    if((((X == Y) && (X != Z)) || ((Y == Z) && (Y != X))) || ((Z == X) && (Z != Y)))
    {
      return "Triangulo Isoceles";
    }
    if(((X != Y) && (Y != Z)) && (Z != X))
    {
      return "Triangulo Escaleno";
    }
  }
  else
  {
    return "Nao eh triangulo";
  }
}

int main()
{
  int num1, num2, num3;

  printf("\n Digite um numero: \n");
  scanf("%d",&num1);
 
  printf("\n Digite um numero: \n");
  scanf("%d",&num2);
 
  printf("\n Digite um numero: \n");
  scanf("%d",&num3);

  printf("\n %s \n",Triangulo(num1,num2,num3));

  return 0;
}
