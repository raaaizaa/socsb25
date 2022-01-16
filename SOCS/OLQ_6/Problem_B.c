#include <stdio.h>
#include <stdlib.h>

int main(){
    long int t, count = 1;
    scanf("%ld", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%ld", &arr[i]);
        }
        printf("Case #%d: ", count++);
        for(int i = n - 1; i >= 0; i--){
            if(i == 0){
                printf("%ld\n", arr[i]);
            }else{
                printf("%ld ", arr[i]);
            }
        }
    }
    return 0;
} 
// masih time limit gatau kenapa