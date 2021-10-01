#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
int N, i, soma, vet_frase[26];
char frase[1000];
scanf("%d", &N);
while(N--) {
getchar();
scanf("%[^\n]", frase);
for(i = 0; i < 26; i++) {
vet_frase[i] = 0;
}
i = 0;
soma = 0;
while(frase[i] != '\0') {
if(isalpha(frase[i])) {
switch(frase[i]) {
case 'a':
vet_frase[0] = 1;
break;
case 'b':
vet_frase[1] = 1;
break;
case 'c':
vet_frase[2] = 1;
break;
case 'd':
vet_frase[3] = 1;
break;
case 'e':
vet_frase[4] = 1;
break;
case 'f':
vet_frase[5] = 1;
break;
case 'g':
vet_frase[6] = 1;
break;
case 'h':
vet_frase[7] = 1;
break;
case 'i':
vet_frase[8] = 1;
break;
case 'j':
vet_frase[9] = 1;
break;
case 'k':
vet_frase[10] = 1;
break;
case 'l':
vet_frase[11] = 1;
break;
case 'm':
vet_frase[12] = 1;
break;
case 'n':
vet_frase[13] = 1;
break;
case 'o':
vet_frase[14] = 1;
break;
case 'p':
vet_frase[15] = 1;
break;
case 'q':
vet_frase[16] = 1;
break;
case 'r':
vet_frase[17] = 1;
break;
case 's':
vet_frase[18] = 1;
break;
case 't':
vet_frase[19] = 1;
break;
case 'u':
vet_frase[20] = 1;
break;
case 'v':
vet_frase[21] = 1;
break;
case 'x':
vet_frase[22] = 1;
break;
case 'w':
vet_frase[23] = 1;
break;
case 'y':
vet_frase[24] = 1;
break;
case 'z':
vet_frase[25] = 1;
break;
}
}
i++;
}
for(i = 0; i < 26; i++) {
soma += vet_frase[i];
}
if(soma == 26) {
printf("frase completa\n");
}
else if(soma >= 13 && soma < 26) {
printf("frase quase completa\n");
}
else {
printf("frase mal elaborada\n");
}
}
return 0;
}
