    #include <stdio.h>
    #include <stdlib.h>

    int main()
{
    unsigned long long a=0, fact=1;
    int i=0;
    printf("Ingrese un numero ");
    scanf("%llu", &a);
    for (i=a;i>1;i--)
    {
        fact=fact*i;
    }
        printf("El factorial de %llu es  %llu", a, fact);
    return 0;
}
