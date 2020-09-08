    #include <stdlib.h>
    #include <stdio.h>

 void main()
 {
     int d=0, m=0, a=0, i=0, limitd=0;
     printf("Ingrese un valor de dia ");
     scanf("%d", &d);
     printf("Ingrese un valor de mes ");
     scanf("%d", &m);
     printf("Ingrese un valor de a%co ", 164);
     scanf("%d", &a);

     switch (m){
    case 1:
        limitd=31;
        break;
    case 2:
        if(a % 4 ==0 && a % 100 != 0 || a %400==0)
        limitd=29;
        else
        limitd=28;
        break;
    case 3:
        limitd=31;
        break;
    case 4:
        limitd=30;
        break;
    case 5:
        limitd=31;
        break;
    case 6:
        limitd=30;
        break;
    case 7:
        limitd=31;
        break;
    case 8:
        limitd=31;
        break;
    case 9:
        limitd=30;
        break;
    case 10:
        limitd=31;
        break;
    case 11:
        limitd=30;
        break;
    case 12:
        limitd=31;
        break;
    default:
        printf("Fecha no valida");
        return 0;
        break;
    }

     if ((d>limitd) || (d<=0))
     {
         printf("Fecha invalida");
         system("pause");
        return 0;
     }

     if ((m<=0) || (m>12))
     {
         printf("Fecha invalida");
         system("pause");
        return 0;
     }

     if (a<=0)
     {
         printf("Fecha invalida\n");
         system("pause");
        return 0;
     }

    if (d<=limitd)
    {
     printf("%d/%d/%d", d, m, a);
     printf("\nLa fecha es valida");
    }


     return 0;

}
