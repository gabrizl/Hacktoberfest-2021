#include <iostream>
 
using namespace std;
 
int main() {
int cents,valor,n100,n50,n20,n10,n5,n2,n1,m050,m025,m010,m005,m001;
   float valor2;

   scanf("%f",&valor2);

   valor  = valor2;
   cents = (valor2 - valor)*100 + 0.9;


   n100 = valor/100;
   n50 = (valor%100)/50;
   n20 = ((valor%100)%50)/20;
   n10 = (((valor%100)%50)%20)/10;
   n5 = ((((valor%100)%50)%20)%10)/5;
   n2 = (((((valor%100)%50)%20)%10)%5)/2;
   n1 = ((((((valor%100)%50)%20)%10)%5)%2)/1;

   m050 = cents/50;
   m025 = (cents%50)/25;
   m010 = ((cents%50)%25)/10;
   m005 = (((cents%50)%25)%10)/5;
   m001 = ((((cents%50)%25)%10)%5)/1;
   

   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",n100);
   printf("%d nota(s) de R$ 50.00\n",n50);
   printf("%d nota(s) de R$ 20.00\n",n20);
   printf("%d nota(s) de R$ 10.00\n",n10);
   printf("%d nota(s) de R$ 5.00\n",n5);
   printf("%d nota(s) de R$ 2.00\n",n2);

   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",n1);
   printf("%d moeda(s) de R$ 0.50\n",m050);
   printf("%d moeda(s) de R$ 0.25\n",m025);
   printf("%d moeda(s) de R$ 0.10\n",m010);
   printf("%d moeda(s) de R$ 0.05\n",m005);
   printf("%d moeda(s) de R$ 0.01\n",m001);
 
    return 0;
}
