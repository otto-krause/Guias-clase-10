    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int num1, num2;
    int i=1, multi, suma;
    printf("ingrese dos numeros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

     do
    {
       multi=5*i;
       i++;
    }while (multi<num1);

    while (multi<num2)
    {
        printf(" %d ",multi);
        suma=suma+multi;
        multi=multi+5;

    }
    if (suma>num2)
    {
        suma=suma-num2;
    }
    else
        if (suma>=num1)
    {
        suma=suma-num1;
    }
    printf("\n La sumatoria es %d ",suma);
    return 0;
}
