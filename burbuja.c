

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    
	int i , j , can, auxiliar;
 
	
	printf("\nIngrese el valor de su arreglo:");
	scanf("%i" , &can);
 
	
	int arreglo[can];
 
	for (j = 0; j < can; j++)
	{		
		printf("Ingrese el numero a ordenar[%i]:\n", j);
		scanf("%i" , &arreglo[j]);
	}
 
	
	for (i = 0; i < can; i++)
	{
		for (j = 0; j < can; j++)
		{
 
			
			if ( arreglo[j] > arreglo[j+1] ) 
			{
				auxiliar = arreglo[j]; 
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = auxiliar;
 
			}
		}
	}
 
			
			for (i=0; i<can; i++)
			{
				printf("\nEn orden %i " , arreglo[i] );
			}
    
    
    return (EXIT_SUCCESS);
}

