#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, a, b;
    scanf("%d", &x);
    int arr[x];
    for(int i = 0; i < x; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &y);
    int n = 1;
    for(int i = 0; i < y; i++){
        scanf("%d %d", &a, &b);
        arr[a-1] = b;
        printf("Case #%d: ", n);
        n++;
        for(int j = 0; j < x; j++){
            if( j == (x-1)){
                printf("%d\n", arr[j]);
            }else{
                printf("%d ", arr[j]);
            }
        }
    }
    return 0;
}