#include <stdio.h>

 
int main()
{
    int lado1, lado2, lado3;
    
    printf ("\n informe o lado 1 ");
    scanf ("%d", &lado1);
    
    printf ("\nInforme o lado 2 ");
    scanf ("%d", &lado2);
    
    printf ("\nInforme o lado 3 ");
    scanf ("%d", &lado3);
    
    if (lado1 <= 0 || lado2 <=0 || lado3 <= 0)
    {
        printf ("\n os valores para os lados devem ser maiores que zero");
    }
    else
    {
    
       if (lado1 == lado2 && lado2 ==lado3)
       {
           printf ("\n O triangulo é EQUILÁTERO");
       }
       else
       {
           if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
           {
               printf ("\n O triangulo é ESCALENO");
           }
           else
           {
               printf ("\n O triangulo é ISÓSCELES");
           }
        }
    }
}    
