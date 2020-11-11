

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    float a = 3.0;
    float b = 6.0;
    float c = 4.0; 
    
    if (a > b && a > c)
        printf("El mayor es el %.1f", a);
     else { 
        if (b > a && b > c)
            printf("El mayor es el %.1f", b);
        else 
            if (c > a && c > b)
                printf("El mayor es el %.1", c);
            else 
                printf("Todos son iguales");
        
    }
    
    
    
    return (EXIT_SUCCESS);
}

