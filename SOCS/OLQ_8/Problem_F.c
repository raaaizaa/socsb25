#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, count = 1;
    long long int sum;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long int arr[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
            scanf("%lld", &arr[i][j]);
            }
        }

        printf("Case #%d: ", count);
        count++;
        for(int i = 0; i < n; i++){
                sum = 0;
            for(int j = 0; j < n; j++){
                sum += arr[j][i];
            }if(i == n - 1){
                printf("%lld\n", sum);
            }else{
                printf("%lld ", sum);
            }
        }
    }
}