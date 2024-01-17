#include <stdio.h>

// PROTOTYPES 
int sumOfN(int num);
// PROTOTYPES END

int main() {
    int sumOfNth;

    printf("input a positive integer " );
    scanf("%d", &sumOfNth);

    int result = sumOfN(sumOfNth);

    printf("sum = %d", result);
    return 0;
}

int sumOfN(int num) {
    if (num <= 0)
        return num;
    return num + sumOfN(num - 1);
}