#include<stdio.h>

int Tempo(float TempS)
{
    float Hora;
    int Minuto, Segundo;

    Hora = TempS / 3600;

    Minuto = TempS / 60;

    Segundo = TempS;

    printf("\n Tempo em Horas: %f \n Tempo em Minutos: %d \n Tempo em Segundos: %d \n",Hora,Minuto,Segundo);
}

int main()
{
    int tempo;

    printf("\n Digite o tempo de duracao da fabrica (em segundos): ");
    scanf("%d",&tempo);

    Tempo(tempo);

    return 0;
}
