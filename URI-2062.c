#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int N, i;
    char frase[20];
    scanf("%d",&N);

    for(i=0; i<N; i++){

        scanf("%s",&frase);


        if (i != 0){
        printf(" ");}
        if(frase[0]=='O' && frase[1]=='B' && strlen(frase)==3){
            printf("OBI",frase);
        }
        else if(frase[0]=='U' && frase[1]=='R' && strlen(frase)==3){
            printf("URI",frase);
        }
        else{
            printf("%s",frase);
        }

    }

printf("\n");
return 0;
}
