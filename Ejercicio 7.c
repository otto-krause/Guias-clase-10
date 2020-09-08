    #include <stdio.h>
    #include <stdlib.h>

    int main()
{
    int num, prod, i=1;

    printf("Ingrese un n%cmero entero ", 163);
    scanf("%d", &num);
    do
    {
        prod=num*i;
        printf("\n%d*%d=%d", i, num, prod);
        i++;
    }while(i<11);
    return 0;
}
