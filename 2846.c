//2846 - Fibonot

#include <stdio.h>

int main(){

int num;
scanf("%d",&num);

int fibatual,fibproximo;
int contador=2;
fibatual=1;
fibproximo=2;

while(num > 0)
    {
        if(contador == fibproximo){
            fibproximo = fibatual + fibproximo;
            fibatual = contador;}
            
        else{
            num -- ; }
            
             contador++;
    }

    contador--;
    printf("%d\n",contador);
    
return 0;
}
