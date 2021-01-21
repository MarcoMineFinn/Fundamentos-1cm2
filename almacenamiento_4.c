
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int numeros[100];
    int cantidad_numeros = 0;
    int i;
    i = 0;
    
    printf("¿Cuantos números desea introducir?: ");
    scanf("%i", &cantidad_numeros);
    for(i = 0; i < cantidad_numeros; i++){
        printf("\nCual es el valor número #%i: ", i + 1);
        scanf("%i", &numeros[i]);
    }
    int mayor = 0;
    
    for(i = 0; i < cantidad_numeros; i++){
        if(numeros[i]> mayor){
            mayor = numeros[i];
        }
     }
    printf("El número mayor introducido es el: %i", mayor);
    
    return (EXIT_SUCCESS);
}

