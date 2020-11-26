

#include <stdio.h>
#define MAX 100

void llenar (double a[]){
int x =0;
 for(x = 0; x < 2;x++){
    printf("numero [%d] = ",x);
    scanf("%lf", &a[x]);

 }
}
int main() {

	double arreglo[MAX];
	int x = 0, n;
    arreglo[0];
    arreglo[1];
	printf("\n Ingrese el tamaño del arreglo: ");
	scanf("%d", &n);
    llenar(arreglo);

	for ( x = 0 ; x < n/2; x++)
	{
		printf("%.1lf\n",arreglo[0]);
		arreglo[0] = arreglo[0] + arreglo[1];
		printf("%.1lf\n",arreglo[1]);
		arreglo[1] = arreglo[0] + arreglo[1];

	}

	return 0;
}

