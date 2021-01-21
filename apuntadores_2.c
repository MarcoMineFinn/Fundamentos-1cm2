/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   apuntadores_3.c
 * Author: marcojasso
 *
 * Created on 11 de enero de 2021, 05:28 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float x, y, res;
    
    float *uno, *dos, *resul;
    uno = &x; dos = &y; resul = &res;    
    
    printf("Digite un número : ");
    scanf("%f",&x);
    printf("Digite otro número que restará al primero:");
    scanf("%f",&y);
    *resul= *uno - *dos;
    printf("El resultado de la resta es: %.3f", res);  
    
    return (EXIT_SUCCESS);
}

