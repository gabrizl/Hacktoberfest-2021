// 2243 - Isósceles
#include <stdio.h>
#include <stdlib.h>

#define max 50000
#define direita 1
#define esquerda -1

//Prototipação
int formaTriangulo(const int *colunas, int indice, int tamanho);
int verificarAltura(const int *colunas, int indice, int tamanho, int direcao);

int main()
{
  int N, i, j;
  int maiorColuna, maiorColunaLaco, colunas[max];

  scanf("%d", &N);

  for (i = 0; i < N; i++)
  {
    scanf("%d", colunas + i);
  }

  maiorColuna = 1;
  maiorColunaLaco = 1;

  for (i = 2; i <= N; i++)
  {
    for (j = i - 1; j <= N - i; j++)
    {
      if (formaTriangulo(colunas, j, i))
      {
        maiorColunaLaco = i;
        break;
      }
    }

    if (maiorColuna == maiorColunaLaco)
    {
      break;
    }

    maiorColuna = maiorColunaLaco;
  }

  printf("%d\n", maiorColuna);

  return 0;
}

//Formar Triangulo
int formaTriangulo(const int *colunas, int indice, int tamanho)
{
  if (colunas[indice] >= tamanho)
  {
    return verificarAltura(colunas, indice - 1, tamanho - 1, esquerda) && verificarAltura(colunas, indice + 1, tamanho - 1, direita);
  }

  else
  {
    return 0;
  }
}

//Verificar Altura
int verificarAltura(const int *colunas, int indice, int tamanho, int direcao)
{
  if (tamanho == 1)
  {
    return 1;
  }

  if (colunas[indice] >= tamanho)
  {
    return verificarAltura(colunas, indice + direcao, tamanho - 1, direcao);
  }

  else
  {
    return 0;
  }
}
