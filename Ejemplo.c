
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    float A[10];
    float B[10];
    float S[10], R[10];  
   
    
    for(int i = 0; i < 10; i++){
    printf("\n----------");
    printf("\nIntroduzca el numero %d del arreglo A: ", i + 1);
    scanf("%f", &A[i]);
    printf("\nIntroduzca el numero %d del arreglo B: ", i + 1);
    scanf("%f", &B[i]);
   
    S[i] = A[i] + B[i];
    R[i] = A[i] - B[i];
    
    printf("\nEl resultado de la suma de A y B es: %.1f + %.1f = %.1f",A[i], B[i], S[i]);
    printf("\nEl resultado de la resta de A y B es: %.1f - %.1f = %.1f",A[i], B[i], R[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

