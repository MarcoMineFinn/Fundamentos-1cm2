/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   menú de grados.c
 * Author: marcojasso
 *
 * Created on 6 de diciembre de 2020, 04:26 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {

    double celsius =0, fahrenheit = 0, kelvin = 0;
    int op;
   do{
                printf("\n----MENU DE CONVERSION DE TEMPERATURAS----");
		printf("\n");
		printf("\n1. Celsius a Fahrenheit");
		printf("\n2. Fahrenheit a Celsius");
		printf("\n3. Celsius a Kelvin");
		printf("\n4. Fahrenheit a Kelvin");
		printf("\n5. Kelvin a Fahrenheit");
		printf("\n6. Kelvin a Celsius");
		printf("\n7. Salir");
		printf("\n\n");
		printf("\n "); 
                scanf("%d", &op);

		system("cmd/c cls");
		switch(op) {

		case 1:
			printf("\nLeyendo los grados Celsius");
			printf("\nIngrese los grados celsius que desea procesar:  ");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 9/5) + 32 ;
			printf( "%.5f  grados fahrenheit", fahrenheit);

			break;
		case 2:
			printf("\nLeyendo los grados Fahrenheit");
			printf("\nIngrese los grados faherenheit que desea procesar:  ");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5/9 ;
			printf( "%.5f  grados celsius", celsius);

			break;
		case 3:
			printf("\nLeyendo los grados Celsius");
			printf("\nIngrese los grados celsius que desea procesar:  ");
			scanf("%f", &celsius);
			kelvin = (celsius + 273.15) ;
			printf( "%.5f  grados kelvin", kelvin);

			break;

		case 4:
			printf("\nLeyendo los grados Fahrenheit");
			printf("\nIngrese los grados faherenheit que desea procesar:  ");
			scanf("%f", &fahrenheit);
			kelvin = ((fahrenheit - 32) * 5/9) + 273.15 ;
			printf( "%.5f  grados kelvin", kelvin);

			break;
		case 5:
			printf("\nLeyendo los grados kelvin");
			printf("\nIngrese los grados kelvin que desea procesar:  ");
			scanf("%f", &kelvin);
			fahrenheit = ((kelvin - 273.15) * 9/5) + 32 ;
			printf( "%.5f  grados fahrenheit", fahrenheit);

			break;
		case 6:
			printf("\nLeyendo los grados kelvin");
			printf("\nIngrese los grados kelvin que desea procesar:  ");
			scanf("%f", &kelvin);
			celsius = (kelvin - 273.15) ;
			printf( "%.5f  grados celsius", celsius);

			break;
		case 7:
			break;

		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=7);
       
    
}

