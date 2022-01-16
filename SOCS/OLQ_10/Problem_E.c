#include <stdio.h>
#include <stdlib.h>

int t, x, y, arr[1001], temp = 0, count = 1, total = 0;

int sorting(){
    for(int i = 0; i < x; i++){
        for(int j = i+1; j < x; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                total = total + y;
            }
        }
    }
}

int main(){
    scanf("%d", &t);

    while(t--){
        total = 0;
        scanf("%d %d", &x, &y);

        for(int i = 0; i < x; i++){
            scanf("%d", &arr[i]);
        }

        sorting();
        printf("Case #%d: %d\n", count++, total);
    }
}