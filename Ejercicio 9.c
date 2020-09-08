    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int a, b, produ, i, cont;

    printf("Ingrese dos numeros enteros positivos ");
    scanf("%d %d", &a, &b);
    i=a;
    do
    {
        produ=produ+a;
        cont=cont+1;
        i++;
    }while(cont<b);


    printf("El producto de %d y %d es %d ", a, b, produ);
    return 0;
}
