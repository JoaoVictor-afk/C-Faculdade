#include<stdio.h>

int main(void){

 
float a, b;
double reajuste, salario;


printf("digite o salario e o reajuste:");
scanf("%f",& a);
scanf("%f",& b);

b=b*0.01;

reajuste=a*b;
salario=(a+reajuste);
printf("o valor do salario ficou: %f", salario);
 return 0;
}
