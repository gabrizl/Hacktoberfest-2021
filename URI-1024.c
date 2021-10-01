#include <stdio.h>
#include <string.h>

int main (void)
{
  char palavra[1100], aux;
  int casos;
  int i, j, tam, tamMetade;

  scanf("%u", &casos);

  while (casos)
  {

    scanf(" %[^\n]", palavra);

    tam = strlen(palavra);
    tamMetade = tam/2;

    for (i = 0; i < tam; i++ )
      if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z'))
        palavra[i] = palavra[i] + 3;

    for (i = 0, j = tam - 1; i < tamMetade; i++, j--)
    {

      aux = palavra[j];
      palavra[j] = palavra[i];
      palavra[i] = aux;

    }

    for (i = tamMetade; i < tam; i++ )
      if (((int)palavra[i] >= 32 && (int)palavra[i] <= 176 ))
        palavra[i] = palavra[i] - 1;

    printf("%s\n", palavra);

    memset(palavra, 0 , sizeof(palavra));

    casos--;
  }
  return 0;
}
