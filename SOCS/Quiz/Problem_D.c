#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int t, n, count = 1;
    long long int p, q;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        long long int arr[n];

        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }

        scanf("%lld %lld", &p, &q);

        printf("Case #%d : ", count++);
        if(arr[p-1] < arr[q-1]){
            printf("Lili\n");
        }else if(arr[p-1] > arr[q-1]){
            printf("Bibi\n");
        }else if(arr[p-1] = arr[q-1]){
            printf("Draw\n");
        }

    }
}