#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    long long int min = 100001;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(min > arr[i] && arr[i] % 2 == 1){
            min = arr[i];
        }
    }
    if(sum % 2 == 0){
        printf("%lld\n", sum);
    }else{
        printf("%lld\n", sum - min);
    }
    return 0;
}