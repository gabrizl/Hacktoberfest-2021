#include <stdio.h>
int main() {
 
int K;
scanf("%d",&K);

int fibAtual, fibProximo;
int contador = 2;
fibAtual = 1;
fibProximo = 2;

    while (K > 0)
    {
        if (contador == fibProximo){
            fibProximo = fibAtual + fibProximo;
            fibAtual = contador;
    	}
		else{
			K--;
		}	
		contador++;
	}
	contador--;
	printf("%d\n",contador);
	
	return 0 ;
}
