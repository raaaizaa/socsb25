#include <stdio.h>
#include <stdlib.h>

int fib(int x, int y, int z){
    int q;
    for(int i = 1; i < z; i++){
        q = x + y;
        x = y; 
        y = q;  
    }
    printf("%d\n", q);
}

int main(){
    int x, y, z;
    scanf("%d %d", &x, &y);
    scanf("%d", &z);
    fib(x, y, z);
}
