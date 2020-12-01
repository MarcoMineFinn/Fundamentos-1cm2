/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Funciones.c
 * Author: marcojasso
 *
 * Created on 30 de noviembre de 2020, 11:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {
    
     float a = 90.0;  a = sqrt((81+10)*(3));
     float b = 4.0; b = exp((2.0)*(30.0-28.0));
     float c = 4.0; c = log(((50/2) + 60));
     float d = 64.0; d = log10(40+1-4);
     float e = 40.0; e = fabs((500.9));
     float f = 7.0; f = ceil(19+9);
     float g = 1.0; g = floor((80-70)/2);
     float h = 2.0; h = (pow((12)/2,10));
     float i = 3.0; i = fmod(999,2);
     float j = 5.0; j = sin((689*1)- 599);
     float k = 7.0; k = cos(90+90);
     float l = 10.0; l = tan((20*59) - 80); 
    
   
     printf("a) El resultado de la raíz cuadrada es: %.2f\n",a);
     
     printf("b) El resultado del exponencial es: %.2f\n", b);
    
     printf("c) El resultado del logaritmo es: %.2f\n", c);
    
     printf("d) El resultado del logaritmo base 10 es: %.2f\n", d);
             
     printf("e) El resultado del valor absoluto es: %.2f\n",e);
             
     printf("f) El resultado del redondeo menor es: %.2f\n",f);
    
     printf("g) El resultado del redondeo mayor es: %.2f\n", g);
             
     printf("h) El resultado del valoir elevado a la potencia es: %.2f\n", h);
             
     printf("i) El resultado del residuo es de: %.2f\n", i);      
             
     printf ("j) El resultado del seno es de: %.2f\n", j);
             
     printf("k) El resultado del coseno es de: %.1f\n", k);
             
     printf("l) El resultado de la tangente es de: %.2f\n", l);

    return (EXIT_SUCCESS);
}

