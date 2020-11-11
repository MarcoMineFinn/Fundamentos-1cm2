

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
 int n= 8;
    //número de elementos que queremos
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

