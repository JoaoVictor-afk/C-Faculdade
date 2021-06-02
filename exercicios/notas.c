
#include<stdio.h>

int main(void){

int a, b, c, d, e, f;
printf("digite o valor em reais:");
scanf("%d",& a);


b=a/2;

c=a/5;

d=a/10;

e=a/50;

f=a/100;

printf("%d moedas de 1 real\n",a);

printf("%d notas de 2 reias\n",b);

printf("%d notas de 5 reias\n",c);

printf("%d notas de 10 reias\n",d);

printf("%d notas de 50 reias\n",e);

printf("%d notas de 100 reias\n",f);
 return 0;
}
