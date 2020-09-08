#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, men=0 ; //edades
    int hom=0, cont=0, menor30=0, ptot=0 ; //contadores
    long int dni=0;
    float porc=0; //porcentaje
    char sexo;



    do{
            printf("Ingrese su DNI ");
            scanf("%li", &dni);

            if (dni>0)
            {

            printf("Ingrese su sexo (m o f) ");
            scanf("%s", &sexo);


            printf("Ingrese su a%co de nacimiento ",164);
            scanf("%d", &a);
            }

            ptot=ptot+1;
            men=2020-a;
        if (men<18)
        {
            cont=cont+1;
        }

        porc=cont*100/ptot;

        if ((dni<30000000) && (dni>0))
            {
            menor30=menor30+1;
            }

        if (sexo=='m')
        {
            hom++;
        }


        }while (dni>0);




        printf("Se ingresaron un total de %d mujeres y %d hombres \n", ptot-hom,hom);
        printf("Un %.1f %c son menores de edad\n",porc, 37);
        printf("%d personas tienen un DNI inferior a 30 millones",menor30);



    return 0;
}
