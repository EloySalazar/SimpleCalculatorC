#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int suma(void);
int resta(void);
int multiplica(void);
int divide(void);
int main() {
    char operaciones;
    printf("Presione 1 para Sumar\n");
    printf("Presione 2 para Restar\n");
    printf("Presione 3 para Multiplicar\n");
    printf("Presione 4 para Dividir\n");
    printf("Presione 5 para Salir\n");
    operaciones = getchar();

    switch(operaciones) {
    case '1':
        suma();
        break;
    case '2':
        resta();
        break;
    case '3':
        multiplica();
        break;
    case '4':
        divide();
        break;
    case '5':
        printf("Usted ha salido\n");

        exit(0);
    default :
        printf("Uste ha selecionado una no especificada\n");
        break;
    }

    return 0;

}
int suma(void) {
    char resetear[5];
    char salir[5];
    float x,y;
    float  resultado;
    printf("Introduzca el primer valor que desea Sumar\n");
    scanf("%f",&x);
    printf("Introduzca el segundo valor que desea Sumar\n");
    scanf("%f",&y);
    resultado = x + y;
    printf("Este es el resultado %1.2f\n",resultado);
    printf("Ahora puede introducir el comando resetear para volver a las \n");
    printf("operaciones arimeticas si no escriba cualquier cosa para salir\n");
    scanf("%s",&resetear);

    if(!strcmp(resetear,"resetear")) {
        main();
        main();

    } else if(strcmp(salir,"salir")) {
        printf("Usted ha salido");
        exit(0);
    }

    return 0;
}

int resta(void) {
    char resetear[5];
    char salir[5];
    float x,y;
    float  resultado;
    printf("Introduzca el primer valor que desea Restar\n");
    scanf("%f",&x);
    printf("Introduzca el segundo valor que desea Restar\n");
    scanf("%f",&y);
    resultado = x - y;
    printf("Este es el resultado %1.2f\n",resultado);
    printf("Ahora puede introducir el comando resetear para volver a las \n");
    printf("operaciones arimeticas si no escriba cualquier cosa para salir\n");
    scanf("%s",&resetear);

    if(!strcmp(resetear,"resetear")) {
        main();
        main();

    } else if(strcmp(salir,"salir")) {
        printf("Usted ha salido");
        exit(0);
    }
    return 0;
}
int multiplica(void) {
    char resetear[5];
    char salir[5];
    float x,y;
    float  resultado;
    printf("Introduzca el primer valor que desea Multiplicar\n");
    scanf("%f",&x);
    printf("Introduzca el segundo valor que desea Multiplicar\n");
    scanf("%f",&y);
    resultado = x * y;
    printf("Este es el resultado %1.2f\n",resultado);
    printf("Ahora puede introducir el comando resetear para volver a las \n");
    printf("operaciones arimeticas si no escriba cualquier cosa para salir\n");
    scanf("%s",&resetear);

    if(!strcmp(resetear,"resetear")) {
        main();
        main();

    } else if(strcmp(salir,"salir")) {
        printf("Usted ha salido");
        exit(0);
    }

    return 0;
}

int divide(void) {
    char resetear[5];
    char salir[5];
    float x,y;
    float  resultado;
    printf("Introduzca el primer valor que desea Dividir\n");
    scanf("%f",&x);
    printf("Introduzca el segundo valor que desea Dividir\n");
    scanf("%f",&y);
    resultado = x / y;
    printf("Este es el resultado %1.2f\n",resultado);
    printf("Ahora puede introducir el comando resetear para volver a las \n");
    printf("operaciones arimeticas si no escriba cualquier cosa para salir\n");
    scanf("%s",&resetear);

    if(!strcmp(resetear,"resetear")) {
        main();
        main();

    } else if(strcmp(salir,"salir")) {
        printf("Usted ha salido");
        exit(0);
    }
    return 0;
}

