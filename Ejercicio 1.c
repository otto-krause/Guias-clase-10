    #include <stdlib.h>
    #include <stdio.h>

 void main()
 {
     int not=0, nota=0, i=1;
     char nick[20], nick2[20];

     do
     {
        printf("\nIngrese el nombre del alumno %d ", i);
        scanf("%s", &nick);
        printf("\nAhora ingrese la nota que le corresponde ");
        scanf("%d", &not);
        if (not>8)
        {
            printf("\nEl alumno %s tiene una nota mayor a 8", nick);
        }
        i++;
     }while(i<16);

     return 0;
 }
