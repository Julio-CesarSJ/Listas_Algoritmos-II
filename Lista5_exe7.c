#include<stdio.h>
#include<string.h>

int Verificar(char str_1[50], char str_2[50])
{
  char *pstr_1 = str_1;
  char *pstr_2, *auxiliar;

  if(str_2[0] == '\0')
  {
    return 1;
  }

  while(*pstr_1 != '\0')
  {
    pstr_2 = str_2;
    auxiliar = pstr_1;

    while(((*pstr_1 != '\0') && (*pstr_2 != '\0')) && (*pstr_1 == *pstr_2))
    {
      pstr_1++;
      pstr_2++;
    }

    if(*pstr_2 == '\0')
    {
      return 1;
    }

    pstr_1 = auxiliar + 1;
  }

  return 0;
}

int main()
{
  char string_1[50], string_2[50];
  int ocorre;

  printf("\n Digite a string 1: \n");
  fgets(string_1, sizeof(string_1), stdin);
  fflush(stdin);

  printf("\n Digite a string 2: \n");
  fgets(string_2, sizeof(string_2), stdin);
  fflush(stdin);

  ocorre = Verificar(string_1,string_2);

  if(ocorre == 1)
  {
    printf("\n A String 2 ocorre na String 1 \n");
  }
  else
  {
    printf("\n A String 2 nao ocorre na String 1 \n");
  }

  return 0;
}
