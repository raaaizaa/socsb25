#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    scanf("%d", &x);
    int input[x], output[x];

    for(int i = 0; i < x; i++){
        scanf("%d", &input[i]);
    }
    for(int i = 0; i < x; i++){
        scanf("%d", &output[input[i]]);
    }
    for(int i = 0; i < x; i++){
        if (i < (x - 1)){
            printf("%d ", output[i]);
        }else{
            printf("%d", output[i]);
        }
        
    }
    printf("\n");
    return 0;
}