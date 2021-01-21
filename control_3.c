#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char** argv) {

double arreglo[MAX];
int a = 0, b = 0; 

arreglo[0] = 2;
arreglo[1] = 3;

for (a = 0; a < (MAX/2); a++)
{
    printf("%.1lf\n", arreglo[0]);
    arreglo[0] = arreglo[0] + arreglo [1];
    printf("%.1lf\n", arreglo[1]);
    arreglo[1] = arreglo[0] + arreglo[1];
}
    return (EXIT_SUCCESS);
}

