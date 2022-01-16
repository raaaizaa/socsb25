#include <stdio.h>

int main(){
    int input, result1, result2;

    scanf("%d", &input);

    result1 = input + input;

    result2 = result1 - 1;

    printf("%d plus %d is %d\n", input, input, result1);
    printf("minus one is %d\n", result2);

    return 0;

}
