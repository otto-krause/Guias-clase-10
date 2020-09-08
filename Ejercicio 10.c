    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int divs, i, coci, divide;

    printf("Ingrese el dividendo entero positivo ");
    scanf("%d", &divide);
    printf("Ingrese el divisor entero positivo ");
    scanf("%d", &divs);

        coci=0;
        i=divide;

        while ( i>=divs )
        {
            i=i-divs;
            coci++;
        }
        printf("El resultado de la division es %d / %d = %d", divide, divs, coci);
        return 0;
}
