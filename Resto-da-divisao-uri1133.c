#include <stdio.h>
int main (){
int num1,num2,i,maior,menor;
scanf("%d",&num1);
scanf("%d",&num2);

maior=num1;
menor=num2;

if (num2>maior){
maior=num2;
menor=num1;
}

for (i=menor+1;i<maior;i++ ){ 

if (i%5==2 || i%5==3){

printf("%d\n",i);

}

}
	return 0;
}
