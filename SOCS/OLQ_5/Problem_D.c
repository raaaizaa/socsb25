#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    int a = 1;
    scanf("%lld", &t);
    while(t--){
        long long int n, x, sum = 0, sum2 = 0;

        scanf("%lld", &n);
        
        long long int arr[n];

        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        for(int i = 0; i < n; i++){
            sum = sum + arr[i];
        }
        for(int i = 0; i < n; i++){
            if(arr[i] >= sum){
                sum2++;
            }
        }
        printf("Case #%d: %lld\n", a, sum);
        printf("%lld\n", sum2);
        a++;
    }

}