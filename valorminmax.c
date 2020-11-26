/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   valormin.c
 * Author: marcojasso
 *
 * Created on 24 de noviembre de 2020, 12:28 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define Max 100

int main(int argc, char** argv) {

    double num [Max];
    int mayor, menor, i, n;
    
    printf("Ingrese la cantidad de números que requiera comparar:");
    scanf("%d", &n);
    printf("\nIngrese sus números:\n ");
    
    for(i = 0; i < n; i++){      
        scanf("%lf", &num[i]);
    }
    mayor=num[0];           
    menor= mayor;
    
    for(i = 0; i < n; i++){
        if(num[i]>mayor){
            mayor=num[i];
        }
        if(num[i]<menor){
            menor=num[i];
        }
    }
    printf("\nEl valor mayor es el: %d", mayor);
    printf("\nEl valor menor es el: %d", menor);
   
    
   return (EXIT_SUCCESS);
}

