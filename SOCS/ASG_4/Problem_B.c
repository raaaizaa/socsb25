#include <stdio.h>

int main(){
    int x, y, plus, minus, multiply, divide, modulus;

    scanf("%d", &x);
    scanf("%d", &y);

    plus = x + y;
    minus = x - y;
    multiply = x * y;
    divide = x / y;
    modulus = x % y;

    printf("%d\n", plus);
    printf("%d\n", minus);
    printf("%d\n", multiply);
    printf("%d\n", divide);
    printf("%d\n", modulus);

    return 0;

    
}