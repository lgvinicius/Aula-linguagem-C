/******************************************************************************
2)	Um funcionário irá receber um aumento no seu salário de acordo com o seu setor de trabalho,
conforme a tabela abaixo: 

Setor    Aumento
A            10%
B            15%
C            20%
D            25%
E            20%

Faça um programa que leia o setor de trabalho e o salário atual de um funcionário e calcula e 
imprime o seu novo salário. */


#include <stdio.h>

int main()
{
    char setor;
    float salario;
    
    printf ("Informe o setor do funcionário ");
    scanf ("%c", &setor);
    
    switch (setor)
    {
        case 'A':
        case 'a':
            printf ("\n Informe o salario: ");
            scanf ("%f", &salario);
            if (salario <= 0)
            {
               printf ("\n Salario nao pode ser menor ou igual a zero");
            }
            else
            { 
               printf ("\n Novo Salario %.2f", salario * 1.10);
            } 
            break;
        case 'B':
        case 'b':
            printf ("\n Informe o salario: ");
            scanf ("%f", &salario);
            if (salario <= 0)
            {
               printf ("\n Salario nao pode ser menor ou igual a zero");
            }
            else
            { 
               printf ("\n Novo Salario %.2f", salario * 1.15);
            }  
            break;
        case 'C':
        case 'c':
        case 'E':
        case 'e':
            printf ("\n Informe o salario: ");
            scanf ("%f", &salario);
            if (salario <= 0)
            {
               printf ("\n Salario nao pode ser menor ou igual a zero");
            }
            else
            { 
               printf ("\n Novo Salario %.2f", salario * 1.20);
            } 
            break;    
        case 'D':
        case 'd':
            printf ("\n Informe o salario: ");
            scanf ("%f", &salario);
            if (salario <= 0)
            {
               printf ("\n Salario nao pode ser menor ou igual a zero");
            }
            else
            { 
               printf ("\n Novo Salario %.2f", salario * 1.25);
            } 
            break;  
        default: printf ("\n Setor inexistente");    
    }
}
