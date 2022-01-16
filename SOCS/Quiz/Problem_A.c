#include <stdio.h>
#include <stdlib.h>

int count(int x, int y){
    int p = 0, q = 1, r = 0;

    while(x > 0 || y > 0){
        r = (x % 10) + (y  % 10);
        r = r % 10;
        p = (r * q) + p;
        x = x / 10;
        y = y / 10;
        q = q * 10;

    }
    return p;
}

int main(){
    int t, count1 = 1;
    scanf("%d", &t);
    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("Case #%d: %d\n", count1++, count(x, y));
    }
}