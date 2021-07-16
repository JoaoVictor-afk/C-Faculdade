#include <stdio.h>

dia_do_ano (int dia, int mes, int ano) {

   int ano_bissexto, data_valida = 0;  
   int total_dias = 0;

  ano_bissexto = ( ((ano % 4 == 0) && (ano % 100 > 0)) || (ano % 400 == 0) );

   if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 &&
       ano >= 1900 && ano <= 2100)    
     if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
         mes == 8 || mes == 10 || mes == 12)
        data_valida = (dia <= 31);    
     else
        if (mes == 2)                
          if (ano_bissexto)            
            data_valida = (dia <= 29);
          else
            data_valida = (dia <= 28); 
        else
          data_valida = (dia <= 30);   

 
   if (data_valida) {
 
     
 
     switch (mes) {
        case 12: total_dias += 30;        

        case 11: total_dias += 31;                 

        case 10: total_dias += 30;    

        case  9: total_dias += 31;        

        case  8: total_dias += 31;                  

        case  7: total_dias += 30;                 

        case  6: total_dias += 31;                  

        case  5: total_dias += 30;                  

        case  4: total_dias += 31;                  

        case  3: total_dias += ano_bissexto?29:28;  

        case  2: total_dias += 31;                  

     }
 
     total_dias += dia;  
   }
 
   return (total_dias);  
}
 

/* 
    Funcao principal - faz a leitura da data a partir do teclado, chama a nossa funcao dia_do_ano e mostrao resultado.
  
*/

int main() {

   int d, m, a,dias;
   double porc,diasporc;
   
 
   while (!dias) {
      printf("Entre com dia, mes e ano no formato dd/mm/aaaa: ");
      fflush (NULL);
      scanf("%d/%d/%d", &d, &m, &a);
      dias = dia_do_ano(d,m,a);
      diasporc=dia_do_ano(d,m,a);
      if (!dias)
        printf ("Data invalida! Tente novamente..\n\n");
   }
  
  if(a%4==0 && (a%100!=0 || a%400==0)){
      porc=(diasporc*100/366);
      }
  else{
    porc=(diasporc*100/365);
  }
   printf ("\n\nEsta data representa o dia %d do %d ano.\n", dias, a);
   printf ("\n\nEsta numero representa a porcentagem ano que passou %f. dia de %d.\n", porc, a);
    return 0;
}
 
