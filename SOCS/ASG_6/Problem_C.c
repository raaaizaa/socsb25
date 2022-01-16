#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);
    while(t--){
        int n, result = 0;
        scanf("%d", &n);
        long long int arr[n];
        long long int arr2[n];

        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%lld", &arr2[i]);
        }
        for(int i = 0; i < n; i++){
            if(arr[i] < arr2[i]){
                result++;
            }
        }
        printf("Case #%d: %lld\n", count, result);
        count++;
    }
}