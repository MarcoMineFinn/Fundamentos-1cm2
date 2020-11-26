/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   promedio.c
 * Author: marcojasso
 *
 * Created on 24 de noviembre de 2020, 12:08 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int a = 0;
    int i;
    
    printf("Ingrese la cantidad de números que necesita : ");
    scanf("%d",&i);
     
    float arreglo[i];
    
    for(a; a<i; a=a+1){
         printf("Ingrese el valor: ");
         scanf("%f",&arreglo[a]);
    }
    
    a = 0;
    float min = arreglo[0];
    float max = arreglo[0];
    for(a; a < i; a = a + 1){
        if (arreglo[a]<min){
            min = arreglo[a];
        }
        if(arreglo[a]>max){
            max = arreglo[a];
        }
    
    }
    
    printf("\nel valor minimo es: %.1lf",min);
    printf("\nel valor maximo es: %.1lf",max);
    
   
    return 0;
}
    

