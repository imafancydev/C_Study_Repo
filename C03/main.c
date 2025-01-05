#include "stdio.h"

// Variable declaration 

extern int num;
extern char c;
extern float pi;

int     main(void)
{

    // Variable defition

    int num; // 4 bytes
    float pi; // 4 bytes
    char c; // 1 byte

    // Variable initialization 
    
    num = 1;
    pi = 3.1416;
    c = '*';

    printf("%i\n", num);
    printf("%c\n", c);
    printf("%f\n", pi);
}