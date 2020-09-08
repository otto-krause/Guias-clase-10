    #include <stdlib.h>
    #include <stdio.h>

 void main()
 {
     int cant=0, fact=0, pu=0, num=0, i=1, mayor, numfin;
     int imp, produ, produmay;

     while(fact!=999)
     {
        printf("Ingrese el n%cmero de factura (para terminar ingrese 999)", 163);
            scanf("%d", &fact);
        printf("Ingrese la cantidad ");
            scanf("%d", &cant);
        printf("Ingrese el precio unitario y el n%cmero del producto ", 163);
            scanf("%d %d", &pu, &num);

        if (produ>produmay)
        {
            produmay=produ;
            mayor=num;
        }
        produmay=produ;
        produ=pu*cant;

        if (pu>imp)
        {
            imp=pu;
        }
        i++;
     }

     printf("\nEl prodcuto mas vendido es el nro %d\n", num);
     printf("El mayor importe vendido es de %d", imp);

     return 0;
 }
