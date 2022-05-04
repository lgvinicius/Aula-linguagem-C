/******************************************************************************
5)	O programa deve calcular o peso ideal de uma pessoa, porém este cálculo é 
diferente para homens e mulheres, assim utilize a fórmula adequada:
homens: (72.7 * Altura) –58 
mulheres: (62.1 * Altura) –44.7



*******************************************************************************/

#include <stdio.h>

int main()

{
    int sexo;
    float h, peso_ideal;

    printf("Digite o seu sexo: 1 - Masculino e 2 - Feminino");
    scanf("%d", &sexo);

    if (sexo != 1 && sexo != 2)
    {
        printf("\n Informacao incorreta");
    }
    else
    {
        if (sexo==1)
        {
            printf("\n Digite sua altura");
            scanf("%f", &h);
            peso_ideal = 72.7 * h -58;
        }
    else
    {
        if (sexo==2)
        {
            printf("\n Digite sua altura");
            scanf("%f", &h);
            peso_ideal = 62.1 * h - 44.7;
        }
    }   
    printf("\n O seu peso ideal e %f",peso_ideal); 
    }
    
}