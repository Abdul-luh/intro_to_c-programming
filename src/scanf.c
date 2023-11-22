#include <stdio.h>

int main() {
    int n1;
    int n2;
    char operator;

    // printf("input the operator : ");
    // scanf("%c", &operator);

    // printf("input the first operand : ");
    // scanf("%d", &n1);

    // printf("input the second operand : ");
    // scanf("%d", &n2);

    printf("input the values ( number, number, operator) : ");
    scanf("%d %d %c",&n1, &n2, &operator);



    int result = n1 + n2;
    printf("the sum %c is %d", operator, result);


    return 0;
}