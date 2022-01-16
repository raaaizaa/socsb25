#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, a, count = 1;
    scanf("%d", &t);

    while(t--){
        int total = 0;
        int max = 0;
        scanf("%d", &a);
        int arr[a];

        for(int i = 0; i < a; i++){
            scanf("%d", &arr[i]);
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        for(int i = 0; i < a; i++){
            if(arr[i] == max){
                total++;
            }
        }

        printf("Case #%d: %d\n", count++, total);
    }
}