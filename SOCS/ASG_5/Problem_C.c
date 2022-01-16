#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("#");
        }
        printf("\n");
    }

printf("\n");

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if((i+1)%k != 0){
            printf(".");
        }else{
            printf("#");
        }
    }printf("\n");
}

printf("\n");

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if((j+1)%k != 0){
            printf(".");
        }else{
            printf("#");
        }
    }printf("\n");
}

return 0;

}