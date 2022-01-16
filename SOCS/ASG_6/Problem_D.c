#include <stdio.h>
#include <stdlib.h>

int main(){
    int t; 
    scanf("%d", &t);
    int count = 1;
    while(t--){
        int n; 
        scanf("%d", &n);
        long long int arr[n];
        for(int i  = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                }
            }
        }
        long long int max = 1, res = arr[0], curr = 1; 
        for (int i = 1; i < n; i++) { 
            if (arr[i] == arr[i - 1]) 
                curr++; 
            else { 
                if (curr > max) { 
                    max = curr; 
                    res = arr[i - 1]; 
                } 
                curr = 1; 
            } 
        } 
        if (curr > max){ 
            max = curr; 
            res = arr[n - 1]; 
        }
        printf("Case #%d: %lld\n", count, max);
        printf("%lld\n", res);
        count++;
    }
}