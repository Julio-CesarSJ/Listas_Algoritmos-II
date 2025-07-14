#include<math.h>
void OI()
{
  printf("\n OI \n");
}

char imprimir(char t[10])
{
  printf("\n %s \n",t);

  return 0;
}

char* Print(char t[100])
{
  printf("\n %s \n",t);

  return "Ok";
}

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

void Tempo(float TempS)
{
  float Hora;
  int Minuto, Segundo;

  Hora = TempS / 3600;

  Minuto = TempS / 60;

  Segundo = TempS;

  printf("\n Tempo em Horas: %f \n Tempo em Minutos: %d \n Tempo em Segundos: %d \n",Hora,Minuto,Segundo);

  return;
}

int ConverterDias(int Ano, int Mes, int Dia)
{
  int soma = 0;

  soma += Mes * 31;
  soma += Ano * 365;
  soma += Dia;

  return soma;
}

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

int categoria(int idade)
{
  if(idade < 5)
  {
    printf("\n Invalido \n");
  }
  else if((idade >= 5) && (idade <= 7))
  {
    printf("\n Infantil A \n");
  }
  else if((idade >= 8) && (idade <= 10))
  {
    printf("\n Infantil B \n");
  }
  else if((idade >= 11) && (idade <= 13))
  {
    printf("\n Juvenil A \n");
  }
  else if((idade >= 14) && (idade <= 17))
  {
    printf("\n Juvenil B \n");
  }
  else if(idade >= 18)
  {
    printf("\n Adulto \n");
  }
  return 0;
}

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

void Conceito(float Nota)
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

  return;
}

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


float Media(int num, int soma, int quantidade)
{
  float media;

  soma += num;

  media = soma / quantidade;

  return media;
}

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




