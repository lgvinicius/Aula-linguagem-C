/******************************************************************************
4)	Dado o valor do produto e a forma de pagamento.
1= à vista;
2= à prazo.

Se o produto for pago à vista aplique um desconto de 10% 
antes de mostrar o valor final, senão informe o mesmo valor do produto


*******************************************************************************/
#include <stdio.h>

int main()
{
   int tipo_pagamento;
   float vl_pago;
   
   printf ("\n informe o valor pago");
   
   scanf ("%f", &vl_pago);
   
   printf ("\ninforme o tipo de pagamento");
   scanf ("%d", &tipo_pagamento);
   switch (tipo_pagamento)
   {
       case 1: printf ("\n valor pago com 10 desconto %f ", vl_pago * 0.9);
               break;
       case 2: printf ("\n valor sem desconto %f ", vl_pago);
               break;
       default: printf ("\n o tipo de pagamento deve ser 1 ou 2");           
   }
}    
