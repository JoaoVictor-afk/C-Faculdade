#include <stdio.h>

int main() {
  int i, x, qtd,r, maior;

  for(i=10;i<=200;i++){
    qtd=1;
    x=i;
     for(;x!=1;){
       if(x%2==0){
          x=x/2;
          qtd++;
       }
       else{
         x=(x*3+1);
         qtd++;
       }
       if(qtd>maior){
         maior=qtd;
         r=i;
       }
     }
  }
  printf("%d",x);
  printf("\n%d",maior);
}
