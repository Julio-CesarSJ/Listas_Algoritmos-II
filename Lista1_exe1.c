#include<stdio.h>

void OI()
{
    printf("\n OI \n");
}

int main()
{
    char presenca = 'n';

    printf("\n Tem alguam ai? \n  (s ou n)\n");
    scanf("%c", &presenca);

    if(presenca != 'n')
    {
        OI();
    }

    return 0;
}
