#include <stdio.h>
#include <math.h>

void greet(){
    printf("Hello world!, \nNever use single qoutes '' for printf statement in c programming \n never use double quotes for char");
}

// PROTOTYPES 

int calcTwoNumbers(int n1, int n2, char exp);
int squareRootOfNumber(float n1);
int squareOfNumber(int n1);

// PROTOTYPES END

int main (){
    greet();
    int sum = calcTwoNumbers(5, 5, '+');
    int product = calcTwoNumbers(5, 5, '*');
    int subtraction = calcTwoNumbers(5, 5, '-');
    int division = calcTwoNumbers(5, 5, '/');
    int power = calcTwoNumbers(5, 5, '/');
    int squreOf5 = squareOfNumber(5);
    int squareRootOf100 = squareRootOfNumber(100);
    

    printf("\nresult of 5 + 5 = %d", sum);
    printf("\nresult of 5 x 5 = %d", product);
    printf("\nresult of 5 - 5 = %d", subtraction);
    printf("\nresult of 5 / 5 = %d", division);
    printf("\nresult of 5 ^ 5 = %d", power);
    printf("\nsquare of 5 = %d", squreOf5);
    printf("\nsquareroot of 100 = %d", squareRootOf100);

    return 0;
}

int squareRootOfNumber(float num) {
    return sqrt(num);
}

int squareOfNumber(int n1){
    return n1 * n1;
}


int calcTwoNumbers(int n1, int n2, char exp){
    int result;
    switch (exp)
    {
    case '*':
        result = n1 * n2;
        break;
    
    case '-':
        result = n1 - n2;
        break;
    
    case '/':
        result = n1 / n2;
        break;
    
    case '+':
        result = n1 + n2;
        break;

    case '^':
        result = n1 ^ n2;
        break;
    
    default:
        result = 0;
        break;
    }
    return result;
}