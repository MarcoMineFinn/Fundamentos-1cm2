/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   control_4.c
 * Author: marcojasso
 *
 * Created on 10 de enero de 2021, 10:11 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 int n= 8;

    int a= 0;
    int b= 0; 
    int c= 1; 
    int d= 1; 


    printf ("0, ");

    while (a<n){ 

        b=c;
        c=a;
        a=b+c;
        d++;

        printf ("%d, ",a);
    }
    return (0);
}


