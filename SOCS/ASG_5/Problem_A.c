#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, x, y, n;
    scanf("%d", &t);
    n = 1;

    for(int i = 0; i < t; i++){
        scanf("%d %d", &x, &y);
        printf("Case #%d: ", n);
        n++;
        if(x < y){
            printf("Bi-Pay\n");
        }else{
            printf("Go-Jo\n");
        }
    }
}
