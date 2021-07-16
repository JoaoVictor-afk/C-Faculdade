#include <stdio.h>
#include <stdlib.h>


int main(){
    int i,x,y, maior=0;
    int arr[20];

    printf("Digite o primeiro Numero:");
    scanf("%d", &x);
    printf("Digite o segundo Numero:");
    scanf("%d", &y);
    
    for (i=0;i<20;i++){
      arr[i]=y%10;
      x=x/10;
      if(arr[i]>maior){
        maior=arr[i];
      }
    }
   for (i=0;i<20;i++){
      arr[i]=y%10;
      y=y/10;
      if(arr[i]>maior){
        maior=arr[i];
      }
   }
  
    printf("\n O maior Digito é %d\n", maior);
    return 0;
}
