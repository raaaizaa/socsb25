#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    while (b > 0){
        b -= 1;
        printf("%d\n", a);
        a = a + 1;
        
    }

return 0;
}