#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, x, y, z;

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%d %d", &d, &e);
    scanf("%d %d", &f, &g);

    x = ((b/c) << c);
    y = ((d/e) << e);
    z = ((f/g) << g);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}