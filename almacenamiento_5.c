

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    float calif[5];
    float promedio;
    int i;
    i = 0;
    printf("Vamos a promediar tus calificaciones del semestre.\n ");
    
    for(i = 0; i < 5; i++){
        printf("Digite su calificación de su materia %d: ", i+1);
        scanf("%f", &calif[i]);
        promedio += calif[i];
    }
    printf("\nSu promedio del semestre es: %.2f", promedio / 5);
    return (EXIT_SUCCESS);
}

