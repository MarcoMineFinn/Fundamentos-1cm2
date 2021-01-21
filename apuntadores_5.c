/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   apuntadores_5.c
 * Author: marcojasso
 *
 * Created on 11 de enero de 2021, 06:18 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float x, y, res;
    printf("Digite el valor del primer número a sumar: \n");
    scanf("%f", &x);
    printf("Digite el valor del segundo número a sumar: \n");
    scanf("%f", &y);
    res=x+y;
    printf("El resultado es: %.2f\n", res);
    
    float *_x, *_y, *_res;
    _x= &x;
    _y= &y;
    _res= &res;
    
    printf("El resultado del apuntador de la suma es de: %.2f\n", *_res);
    
     float **__x, **__y, **__res;
    __x= &_x;
    __y= &_y;
    __res= &_res;
    
    printf("El resultado del apuntador del apuntador de la suma es de: %.2f", **__res);
    return (EXIT_SUCCESS);
}

