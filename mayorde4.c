
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float a = 3.0 ;
    float b = 6.0;
    float c = 4.0;
    float d = 7.0;
    
    if (a > b && a > c && a > d)
        printf("El mayor es el %.1f", a);
    else {
        if(b > a && b > c && b > d)
            printf("El mayor es el %.1f", b);
        else 
            if(c > a && c > b && c > d)
                printf("El mayor es el %.1f", c);
            else 
                if(d > a && d > b && d > c)
                    printf("El mayor es el %.1f", d);
                else 
            printf("Todos son iguales");
    }
    return (EXIT_SUCCESS);
}

