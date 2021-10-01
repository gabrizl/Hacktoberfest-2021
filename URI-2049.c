#include <stdio.h>
#include <string.h>

int main(){

    char assinatura[10], painel[300001];
    int instancia = 1, cont = 1, cont2;

    while(cont!= 0){

        scanf("%s",&assinatura);
        if(assinatura[0]=='0'){
            cont=0;
            break;
        }

        if (instancia > 1){
			printf("\n");}

        scanf("%s",&painel);

        if(strstr(painel, assinatura)){

            printf("Instancia %d\n", instancia);
            printf("verdadeira\n");

        }else{

            printf("Instancia %d\n", instancia);
            printf("falsa\n");

        }
        instancia++;
    }

return 0;
}
