#include <stdio.h>
#include <stdlib.h>

int total = 0;

int fib(int n){
    
    if(n <= 1){
        total++;
        return n;
    }
    total++;
    
    return fib(n-1) + fib(n-2);
}

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        fib(n);

        printf("Case #%d: %d\n", count++, total);
        total = 0;
    }
}