#include <stdio.h>

// PROTOTYPES 
int factorial(int num);
// PROTOTYPES END

int main() {
    int num;

    printf("input a positive integer " );
    scanf("%d", &num);

    int result = factorial(num);

    printf("sum = %d", result);
    return 0;
}

int factorial(int num) {
    if (num <= 1)
        return num;
    return num * factorial(num - 1);
}