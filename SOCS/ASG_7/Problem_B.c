#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        long long int x, p, count = 0;
        long long int arr[33];
        memset(arr, 0, sizeof(arr));
        scanf("%lld %lld", &x, &p);
        if(x == 0){
            long long int arr[33] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            count = 1;
        }
        for(int j = 0; x > 0; j++){
            if(x == 0)
            break;
            arr[j] = x % 2;
            x = x / 2;
            count++;
        }
        printf("%lld\n", arr[p]);
    }
}