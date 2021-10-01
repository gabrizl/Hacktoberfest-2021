#include<stdio.h>

int main(){

    int i, quant=0;
    float num,positivos = 0, media;

    for(i=0; i<6; i++){

        scanf("%f",&num);

        if(num>0){
            positivos+=num;
            quant++;
        }
    }

    media = positivos/quant;

    printf("%d valores positivos\n", quant);
    printf("%.1f\n",media);


return 0;
}


