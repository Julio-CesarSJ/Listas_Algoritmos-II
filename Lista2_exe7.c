#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  int dia;
  int mes;
  int ano;
}Data;

int Entre_datas(Data inicio, Data fim, Data vencimento)
{
  if((inicio.ano == fim.ano) && vencimento.ano == fim.ano)
  {
    if((inicio.mes == fim.mes) && vencimento.mes == fim.mes)
    {
      if((vencimento.dia > inicio.dia) && (vencimento.dia < fim.dia))
      {
        return 1;
      }
    }
    else
    {
      if((vencimento.mes > inicio.mes) && (vencimento.mes < fim.mes))
      {
        return 1;
      }
    }
  }
  else
  {
    if((vencimento.ano > inicio.ano) && (vencimento.ano < fim.ano))
    {
      return 1;
    }
  }

  return 0;
}



int main()
{
  Data Inicio;
  Data Fim;
  Data Vencimento;

  FILE *arquivoC, *arquivoR;
  char cabecalho[50], linha_comeco[50], linha_meio[50];
  char diaV[10], mesV[10], anoV[10]; 
  char dataE[50];
  int valida = 0;

  printf("\n== Inicio do Periodo ==\n");
  printf("\n Dia: ");
  scanf("%d", &Inicio.dia);
  printf("\n Mes: ");
  scanf("%d", &Inicio.mes);
  printf("\n Ano: ");
  scanf("%d", &Inicio.ano);

  printf("\n== Fim do Periodo ==\n");
  printf("\n Dia: ");
  scanf("%d", &Fim.dia);
  printf("\n Mes: ");
  scanf("%d", &Fim.mes);
  printf("\n Ano: ");
  scanf("%d", &Fim.ano);

  arquivoR = fopen("Recebimentos.csv", "r");
  if(arquivoR == NULL)
  {
    printf("\n Erro ao abrir o arquivo!\n");
    exit(1);
  }
  
  fscanf(arquivoR,"%[^\n]\n",cabecalho);

  while(fscanf(arquivoR,"%[^/], %[^,], %[^/], %[^/], %[^\n]\n", linha_comeco, linha_meio, diaV, mesV, anoV) == 5)
  {
    Vencimento.dia = atoi(diaV);
    Vencimento.mes = atoi(mesV);
    Vencimento.ano = atoi(anoV);
    printf("\n oi \n");
    
    valida = Entre_datas(Inicio, Fim, Vencimento);
    if(valida == 1)
    {
      printf("\n %s, %s, %s/%s/%s \n",linha_comeco,linha_meio,diaV,mesV,anoV);
      valida = 0;
    }
  }

  fclose(arquivoR);

  return 0;
}
