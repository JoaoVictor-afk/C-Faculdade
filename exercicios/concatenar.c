#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){

 
char x[2];
char y[2];
char z[5];
int a,b,c,d;


printf("digite um numero :");
scanf("%c%c",x,y);

strcpy(z,x);
strcat(z,y);

a=strtol(z, NULL, 10);
b=strtol(x,NULL,10);
c=strtol(y,NULL,10);
d=a-(c+b);

printf("%d",a);
printf("\n%d",b);
printf("\n%d",c);
printf("\n%d",d);
 return 0;
}
