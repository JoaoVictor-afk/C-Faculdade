#include <stdio.h>
#include <stdlib.h>

int gdc(int u, int v){
  int t;
  while(u>0){
    if(v>u){
      t=u;
      u=v;
      v=t;

    }
    u-=v;
  }
  return v;
}
struct fracao{
  int numerador,denominador;
};
struct fracao reduce(const struct fracao val){
  struct fracao result;
  int ratio=gdc(val.numerador,val.numerador);
  result.numerador=val.numerador/ratio;
  result.denominador=val.denominador/ratio;
  return result;
}


int
main() {
	struct fracao val;
  
  char buff[4][56];
	
	int x[2], y[2], r;
	
	for(size_t k = 0; k < 4; k++)
	{
		printf("\n%ld) Valor: ", (k+1));
		fgets(buff[k], sizeof(buff[k]), stdin);
		
		if (k == 0)
		{
			x[0] = atoi(buff[k]);
			r = test(x[0]);
		}
		else if (k == 1)
		{
			x[1] = atoi(buff[k]);
			r = test(x[1]);
		}
		else if (k == 2)
		{
			y[0] = atoi(buff[k]);
			r = test(y[0]);
		}
		else if (k == 3)
		{
			y[1] = atoi(buff[k]);
			r = test(y[1]);
		}

		if(r != 0)
			k--;
	}
	val.numerador=(x[0]*y[1]);
  val.denominador=(y[0]*x[1]);
  val=reduce(val);
	printf("Soma das Frações %d/%d\n", (x[0] + y[0]), (y[1] + x[1]));
  printf("Divisão da Divisão: %d/%d\n", (x[0]*y[1]), (y[0]*x[1]));
	printf("Simplificação da Divisão: %d/%d",val.numerador,val.denominador);
	return 0;
}

