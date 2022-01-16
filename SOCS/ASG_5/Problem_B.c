#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int t, n, x, y;

    scanf("%lld", &t);
    n = 1;

    for(int i = 0; i < t; i++){
        scanf("%lld", &x);
        y = 0;
        int arr[x];
        for(int j = 0; j < x; j++){
            scanf("%lld", &arr[j]);
            y += arr[j];
        }
        printf("Case #%lld: %lld\n", n, y);
        n++;
    }
    
    return 0;
}