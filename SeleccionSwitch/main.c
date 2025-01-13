#include <stdio.h>


int main()
{
    char opc;//utilizamos una variable para indicar que es lo que elegimos en el switch

    printf("Seleccione un color:\n");
    scanf("%c",&opc);//ingresamos el caracter

    switch(opc)//el switch captura el caracter ingresado y en base a ello devuelve lo que el case escogido contenga
    {
        case 'a':printf("Usted escogio azul");
        break;//siempre despues de terminar cada case hay que añadir un break;

        case 'v':printf("Usted escogio verde");
        break;

        case 'g':printf("Usted escogio gris");
        break;

        case 'r':printf("Usted escogio rosa");
        break;

        case 'm':printf("Usted escogio morado");
        break;

        default: printf("Usted no escogio ningun color");//en caso de que ninguna opcion sea "correcta" se activa el default
    }

    return 0;
}
