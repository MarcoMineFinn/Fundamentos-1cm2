
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a;
    float b; 
   
    int *x;
    x = &a;
    float *y;
    y = &b;
   
    printf("Ingrese el valor de la variable entero: ");
    scanf("%i",& a);
    printf("\nIngrese el valor de la variable flotante: ");
    scanf("%f", &b);
   
    printf("\nEl puntero entero es: %i", *x); 
    printf("\nEl puntero flotante es: %.2f", *y); 
    
    return (EXIT_SUCCESS);
}

