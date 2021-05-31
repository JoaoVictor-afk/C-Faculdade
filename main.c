#include <stdio.h>

int main(void) {
 int a, b, c, d;
 a=6;
 b=++a;
 c=--b;
 d=b+1;
 d=d*5+5-a*b+c;
 a=b%3;
 a=c*-a;
 d=d*(c+2*(a+b));
 printf("a: %d\nb: %d\nc: %d\nd: %d");
return 0;
}