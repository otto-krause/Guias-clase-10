    #include <stdlib.h>
    #include <stdio.h>

 void main()
 {
    int cont=0, alum=0, cont1=0, cont2=0, i=0, cont3=0, promayor=0, mayora;
    float prom=0, promgen=0, acu=0, acu1=0, not=0, notp=0;

    i=1;
    do
    {
        printf("\nIngrese la nota de TP del alumno %d\n", i);
        scanf("%f", &notp);
        cont=cont+1;
        printf("Ingrese las notas de actividades del mismo (para finalizar ingrese un numero negativo)\n");
        do
        {
            scanf("%f", &not);
            if (not>0)
            {
                cont=cont+1;
                acu=acu+not;
            }
            if(cont<3)
            {
                cont1=cont1+1;
            }
        }while(not>0);
        acu=acu+notp;
        prom=acu/cont;
        printf("El promedio del alumno %d es %.1f\n", i, prom);
        acu1=acu1+prom;
        if (prom>promayor)
        {
            promayor=prom;
            mayora=i;
        }
        if (notp>5)
        {
            cont3=cont3+1;
        }

        i++;
    }while(i<3);
    promgen=acu1/i;
    printf("\nEl promedio general del curso es %.1f\n", promgen);
    printf("El alumno con mayor promedio es el alumno %d\n", mayora);
    printf("%d son los alumnos con 2 o menos notas ingresadas\n", cont1);
    printf("%d alumnos aprobaron el TP", cont3);



    return 0;
 }
