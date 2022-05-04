/******************************************************************************
2)	Laranjas custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 
se forem compradas pelo menos doze. Escreva um programa que 
leia o número de laranjas compradas, calcule e escreva o valor total da compra

*******************************************************************************/
#include <stdio.h>

int main()
{
    int qtd_laranjas;
    float valor_compra;

    printf("digite a quantidade de laranjas compradas");
    scanf("%d", &qtd_laranjas);
   
    if (qtd_laranjas < 0)
    {
        printf("\n Quantidade de laranjas invalida");
    }
    else
    {
        if (qtd_laranjas < 12)
        {
            valor_compra = 0.30 * qtd_laranjas;
            printf("\n Valor da compra de %d laranjas = %2f", qtd_laranjas, valor_compra);
        }
         else
        {
             valor_compra = 0.25 * qtd_laranjas;
             printf("\n Valor da compra de %d laranjas = %2f", qtd_laranjas, valor_compra);
        }
    
    }
}