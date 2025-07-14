#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  int dia;
  int mes;
  int ano;
}Data;

int Bissexto(Data bissexto)
{
  if(((bissexto.ano % 4 == 0) && (bissexto.ano % 100 != 0)) || (bissexto.ano % 400 == 0))
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int Validar_data(Data Validacao)
{
  switch(Validacao.mes)
  {
    case 1:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 2:
	    if(Bissexto(Validacao) == 0)
	    {
              if(Validacao.dia > 29)
	      {
                return 1;
	      }
	      else
	      {
                return 0;
	      }
	    }
	    else
	    {
              if(Validacao.dia > 28)
	      {
                return 1;
	      }
	      else
	      {
                return 0;
	      }
	    }
    case 3:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }     
    case 4:
	    if(Validacao.dia > 30)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 5:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 6:
	    if(Validacao.dia > 30)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 7:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 8:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 9:
	    if(Validacao.dia > 30)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 10:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 11:
	    if(Validacao.dia > 30)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    case 12:
	    if(Validacao.dia > 31)
	    {
              return 1;
	    }
	    else
	    {
              return 0;
	    }
    default:
	    return 1;
  }

  if(Validacao.ano < 0)
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
  Data Data_1;
  Data Data_2;
  Data Dias;

  int Valido, dia_mes, dia_ano;
  int Diferenca_entre_datas;

  printf("\n=== Data 1 ===\n");
  printf("\n Dia: ");
  scanf("%d", &Data_1.dia);
  printf("\n Mes: ");
  scanf("%d", &Data_1.mes);
  printf("\n Ano: ");
  scanf("%d", &Data_1.ano);

  printf("\n=== Data 2 ===\n");
  printf("\n Dia: ");
  scanf("%d", &Data_2.dia);
  printf("\n Mes: ");
  scanf("%d", &Data_2.mes);
  printf("\n Ano: ");
  scanf("%d", &Data_2.ano);

  Valido = Validar_data(Data_1);

  if(Valido == 1)
  {
    printf("\n Data 1 invalida! \n");
    exit(1);
  }

  Valido = Validar_data(Data_2);

  if(Valido == 1)
  {
    printf("\n Data 2 invalida! \n");
    exit(1);
  }

   Dias.dia = abs(Data_1.dia - Data_2.dia);
   Dias.mes = abs(Data_1.mes - Data_2.mes);
   Dias.ano = abs(Data_1.ano - Data_2.ano);

   dia_mes = Dias.mes * 30;
   dia_ano = Dias.ano * 365;
   Diferenca_entre_datas = ((Dias.dia + dia_mes) + dia_ano);

  printf("\n Entre as datas decorrem cerca de %d dia(s) \n", Diferenca_entre_datas);

  return 0;
}
