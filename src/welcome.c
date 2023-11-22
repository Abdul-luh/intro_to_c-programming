#include <stdio.h>

// data types in C

/*
   int      (4 bytes) | %d for printing
   double   (8 bytes) | %lf for printing
   float    (4 bytes) | %f for printing
   char     (1 bytes) | %c for printing
*/

// char  this is usually internally stored as an int therefore you can print it with '%d' but it'll print out the integer value it is stored with

int main() {
    int integerVar = 20;
    double doubleVar = 60.37;
    float floatVar = 60.37f;
    char charVar = 'a';
    double exponential = 5.5e6;

    printf("Hello World!\n");
    printf("Hello Abdullah!\t Welcome to C programming! \n");

    printf("intrVar : %d \n", integerVar);
    printf("doubleVar : %.lf \n", doubleVar);
    printf("floatVar : %.2f \n", floatVar);
    printf("charVar : %c \n", charVar);
    printf("charVar : %d \n", charVar);
    printf("exponential number : %.0lf", exponential);

    return 0;
}