/*2)	Escreva um programa utilizando o comando switch que imprima um mês de acordo com o número digitado pelo usuário.
*/


#include <stdio.h>

int main ()
{
   int mes;

   printf("Forneca o mes: ");
   scanf("%d", &mes);

   switch(mes) 
   {
        case 1: printf("\nJaneiro");
            break;
        case 2: printf("\nFevereiro");
            break;
        case 3: printf("\nMarço");
            break;
        case 4: printf("\nAbril");
            break;
        case 5: printf("\nMaio");
            break;
        case 6: printf("\nJunho");
            break;
        case 7: printf("\nJulho");
            break;
        case 8: printf("\nAgosto");
            break;   
        case 9: printf("\nSetembro");
            break;
        case 10: printf("\nOutubro");
            break;   
        case 11: printf("\nNovembro");
            break;
        case 12: printf("\nDezembro");
            break;   
        default: printf("\n Mes informado nao valido");

   }
}