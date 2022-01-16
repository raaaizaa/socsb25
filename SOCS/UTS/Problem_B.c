#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int x; 
    double sum = 0, avg = 0;
    int count = 0;
    scanf("%lld", &x);
    if(x == 0){
        printf("Error\n");
    }
    else{
        sum += x;
        count++;
        while(1){
            scanf("%lld", &x);
            if(x == 0){
                break;
            }
            else{
                sum += x;
                count++;
            }
        }
        avg = sum / count;
        printf("%.1lf\n", avg);
    }
}