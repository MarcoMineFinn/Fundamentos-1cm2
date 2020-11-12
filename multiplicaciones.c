
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x = 1;
    int t = 1;
    int tope = 10;
    int p = 15;
    
    while (x <= p){ 
        while (t <= tope){
        printf ("%d * %d = %d\n",t, x, t * x);
      
        t = t + 1 ;
        }
        x = x + 1;
        t = 1;
         
                printf("\n");
    }
    return (EXIT_SUCCESS);
}

