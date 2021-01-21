/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   apuntadores_4.c
 * Author: marcojasso
 *
 * Created on 11 de enero de 2021, 05:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float j, k;
    j=10;        
    k=15;
    float *_j, *_k;
    _j= &j;
    _k= &k;
    float **__j,**__k;
    __j= &_j;
    __k= &_k;

    printf("El valor de j es de: %f\n", j);
    printf("El valor de k es de: %f\n", k);
    printf("El valor del puntero de j es de: %f\n", *_j);
    printf("El valor del puntero de k es de: %f\n", *_k); 
    printf("El valor del puntero del puntero de j es de: %f\n", **__j);
    printf("El valor del puntero del puntero de k es de: %f\n", **__k); 
    return 0;    
}

