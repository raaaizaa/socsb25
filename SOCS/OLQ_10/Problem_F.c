#include <stdio.h>
#include <stdlib.h>

int x, temp = 0, total1 = 0, total2 = 0;
long long int arr[502];

int scan(){

    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%lld", &arr[i]);
    }
}

int sorting(){

    for(int i = 0; i < x; i++){
        for(int j = i+1; j < x; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int total(){

    for(int j = 0; j < (x / 2) - 1; j++){
        total1 = arr[j+1] - arr[j];
        if(total1 > total2){
            total2 = total1;
        }
    }

    for(int k = x / 2; k < x - 1; k++){
        total1 = arr[k+1] - arr[k];
        if(total1 > total2){
            total2 = total1;
        }
    }
}

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        total2 = 0;
        scan();
        sorting();
        total();
        printf("Case #%d: %d\n", count++, total2);
    }
}