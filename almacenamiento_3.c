#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arreglo[10], i = 0, j = 0, num = 0,buscar = 0, encontrar = 0;
    char op;
    
    for (i= 0; i <10; i++){
        printf("Ingresa el elemento %d\n", i+1);
        scanf("%d", &num);
        arreglo[i] = num;
    }
   
    do{
        printf("¿Qué número deseas buscar?: ");
        scanf("%d", &buscar);
        encontrar = 0;
        for (j = 0; j < 10; j++){
            if(arreglo[j]== buscar){
                printf("\nEl número fue encontrado en la posición %d\n\n", j+1);
                encontrar = 1;
            }
        }
        if (encontrar == 0){
            printf("No se encontró el número que has buscado\n");
        }
        printf("--Para salir del programa pulse la tecla ´0´--");    
    }while(op != 0);
    
    return (EXIT_SUCCESS);
}

