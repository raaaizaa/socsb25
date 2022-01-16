#include <stdio.h>
#include <math.h>

int main(){
    long long int x;
    long double y, z, a, b, c;

    scanf("%lld %Lf", &x, &y);

    z = (1+(y/100));
    a = x * z;
    b = pow(z, 3);
    c = x * b;

    printf("%.2Lf\n", c);

    return 0;
}