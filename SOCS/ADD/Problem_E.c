#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int j, l, b;
    int arr[n];

    scanf("%d %d %d", &j, &l, &b);

    int average = 0, sum = 0;

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        sum = sum + x;
    }
    
    average = (j + l + b + sum) / (n + 3);

    if(j >= average){
        printf("Jojo lolos\n");
    }if(j < average){
        printf("Jojo tidak lolos\n");
    }    if(l >= average){
        printf("Lili lolos\n");
    }if(l < average){
        printf("Lili tidak lolos\n");
    }    if(b >= average){
        printf("Bibi lolos\n");
    }if(b < average){
        printf("Bibi tidak lolos\n");
    }

    return 0;
}