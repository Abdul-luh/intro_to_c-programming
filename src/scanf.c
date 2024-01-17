#include <stdio.h>

int main() {
    int n1;
    int n2;
    char operator;

    // printf("input the operator : ");
    scanf("%c", &operator);

    // printf("input the first operand : ");
    scanf("%d", &n1);

    // printf("input the second operand : ");
    scanf("%d", &n2);

    int result;

    switch (operator){
    case '+':
        result= n1 + n2;
        printf("%d", result);
        break;
    case '-':
        result= n1 - n2;
        printf("%d", result);
        break;
    case '*':
        result = n1 * n2;
        printf("%d", result);
        break;
    case '/':
        result= n1 / n2;
        printf("%d", result);
        break;
    
    default:
        break;
    }

    printf("\n %d %c %d = %d", n1, operator, n2,  result);


    return result;
}