#include <stdio.h>

int main() {
  float matriz[12][12];
  int coluna, i, j;
  char opcao;
  float soma = 0, media = 0, elemento;

  scanf("%d %c", &coluna, &opcao);

  for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
      scanf("%f", &elemento);
      matriz[i][j] = elemento;
    }
  }

  for (i = 0; i < 12; i++) {
    soma += matriz[i][coluna];
  }

  if (opcao == 'S') {
    printf("%.1f\n", soma);
  } else {
    if (opcao == 'M') {
      printf("%.1f\n", soma / 12);
    }
  }

  return 0;
}