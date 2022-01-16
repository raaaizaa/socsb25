#include <stdio.h>

int main(){
    long long int a, b, c, d, counter;
    for(counter=0; counter <2; counter++){
        scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);
        getchar();
        printf("%lld ", (a+b)*(c-d));
    }

    scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);
    printf("%lld\n", (a+b)*(c-d));
    return 0;
}