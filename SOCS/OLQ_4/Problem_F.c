#include <stdio.h>

int main(){
    long long int x, y, sum = 0;

    scanf("%lld %lld", &x, &y);

    for(int counter = x; counter <= y; counter++){
        sum += counter;
    }

    printf("%lld\n", sum);
    return 0;
}