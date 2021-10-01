//1069 - Diamantes e Areia
#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char diamante[1001];
    int i, j, cont, tam;

    scanf("%d", &N);

    while (N--)
    {
        scanf("%s", diamante);

        cont = 0;

        tam = strlen(diamante);

        for (i = 0; i < tam; i++)
        {
            if (diamante[i] == "\0")
                break;
            if (diamante[i] == '<')
            {
                for (j = i; j < tam; j++)
                {

                    if (diamante[j] == '>')
                    {
                        cont++;
                        diamante[j] = 0;
                        break;
                    }
                }
            }
        }

        printf("%d\n", cont);
    }
    return 0;
}
