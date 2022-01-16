#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int q, a, b, count = 1;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        int sum = 0;
        for(int j = a-1; j <= b-1; j++){
            sum = sum + arr[j];
        }
        printf("Case #%d: %d\n", count, sum);
        count++;    
    }
    
}