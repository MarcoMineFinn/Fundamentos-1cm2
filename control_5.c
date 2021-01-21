/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   control_2.c
 * Author: marcojasso
 *
 * Created on 5 de enero de 2021, 06:33 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char** argv) {

    int opc; 
    float x, y, res;
    
    do{
        printf("Menu de opciones\n");
        printf("1.-Sumas\n");
        printf("2.-Restas\n");
        printf("3.-Multiplicacion\n");
        printf("4.-Salir\n");
        printf("Pulse el numero de la operación que desea ejecutar: ");
        scanf("%i", &opc);
        
        switch(opc){
            case 1:
                printf("ingrese un número:\n");
                scanf("%f", &x);
                printf("ingrese otro número:\n");
                scanf("%f", &y);            
                res = x + y;
                printf("El resultado es: %.2f\n",res);
                printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-\n");
                printf("--Si no desea continuar pulse ´4´ para salir--\n");
                break;
            case 2:   
                printf("ingrese un número:\n");
                scanf("%f", &x);
                printf("ingrese otro número:\n");
                scanf("%f", &y);            
                res = x - y;
                printf("El resultado es: %.2f\n",res);
                printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-\n");
                printf("--Si no desea continuar pulse ´4´ para salir--\n");     
                break;
            case 3:   
                printf("ingrese un número:\n");
                scanf("%f", &x);
                printf("ingrese otro número:\n");
                scanf("%f", &y);            
                res = x * y;
                printf("El resultado es: %.2f\n",res);
                printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-\n");
                printf("--Si no desea continuar pulse ´4´ para salir--\n");
                break;
            case 4:   
              printf("Hasta la proxima!!");   
              break;
            default:
                printf("Opción no valida.");
                break;
                 }   
    }while (opc != 4);  
}

