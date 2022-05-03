/*1)	Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. 
Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor total da 
compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/

#include <stdio.h>

 
int main()
{
    int tipo_cli;
    float valor_pago;
    
    printf ("\n Informe o valor da compra ");
    scanf ("%f", &valor_pago);
    
    if (valor_pago <= 0)
    {
        printf ("\n valor da compra deve ser maior que zero");
    }
    else
    { 
        printf ("\n Informe o tipo de cliente 1 (comum), 2 (funcionario) ou 3 (vip)");
        scanf ("%d", &tipo_cli);
        
        switch (tipo_cli)
        {
          case 1: printf ("\n valor pago = %.2f ", valor_pago);
                  break;
          case 2: printf ("\n valor pago = %.2f", valor_pago * 0.90);
                  break;
          case 3: printf ("\n valor pago = %.2f", valor_pago * 0.95);
                  break;
          default: printf ("\n tipo de cliente invalido");        
        }
          
    }
    
    
}    
