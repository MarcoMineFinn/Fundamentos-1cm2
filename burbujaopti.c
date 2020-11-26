#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define Max 1000

int main(int argc, char** argv) {

   double num[Max];
	int auxiliar ,a, j;
	int n;
	printf("Ingrese el valor de su arreglo:");
	scanf("%d",&n);
	bool bandera;


	for(a = 0; a < n; a++ ){
		printf("\nIngrese sus elementos: ");
		scanf("%lf", &num[a]);
	}

		for (int a = 1; a < n; a++){
			bandera = false;
			for(j = n - 1; j >= a; j--){

				if(num[j - 1] > num[j]){

				auxiliar = num[j-1];
				num[j-1]= num[j];
				num[j] = auxiliar;
				bandera = true;
			}
		}
		if(bandera == false)break;
	}
	printf("\n");
	for(int a = 0; a < n; a++ ){

		printf("Ordenado:%.1lf\n",num[a]);

	}
    
    return (EXIT_SUCCESS);
}

