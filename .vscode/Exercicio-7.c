/******************************************************************************
6)	Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero, 
Isósceles ou Escaleno. Sendo que: 
−Triângulo Equilátero: possui os 3 lados iguais. −Triângulo Isóscele: possui 2 lados iguais. 
−Triângulo Escaleno: possui 3 lados diferentes


*******************************************************************************/

#include <stdio.h>

int main()
{
float lado1, lado2, lado3;

printf("\n informe o lado 1");
scanf('%f', &lado1);

printf("\n informe o lado 2");
scanf('%f', &lado2);

printf("\n informe o lado 3");
scanf('%f', &lado3);

if (lado1<=0 || lado2<=0 || lado3<=0)
{
    printf('\n valores invalidos, devem ser maiores que zero');
}
else
{
    if (lado1 == lado2 && lado2 == lado3)
    {
        printf('\n O triangulo é equilatero');
    }
    else
    {
        if (lado1!= lado2 && lado2 != lado3 && lado1 != lado3)
        {
            printf('\n o triangulo é escaleno');
        }
        else
        {
            printf('o triangulo é isosceles');
        }    
    }    
}
}



