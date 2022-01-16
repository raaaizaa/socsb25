#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, c = 1;
    scanf("%d", &t);

    while(t--){
        
        int n;

        scanf("%d", &n);
        
        long long int arr[n];

        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }

        long long max = -1000000;
        long long max1 = -1000000;

        for(int i = 0; i < n; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        long long count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == max){
                count++;
            }
        }
        for(int i = 0; i < n; i++){
            if(max1 < arr[i] && arr[i] != max){
                max1 = arr[i];
            }
        }

        if(count > 1){
            printf("Case #%d: %lld\n", c, max * 2);
        }else{
            printf("Case #%d: %lld\n", c, max + max1);
        }
        c++;

    }
    return 0;
}