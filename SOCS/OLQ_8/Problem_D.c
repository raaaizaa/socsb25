#include <stdio.h>
#include <math.h>

int main(){
    int t, count = 1;
    long long int n;
    scanf("%d", &t);

    while(t--){
        long long int count2 = 0;
        scanf("%lld", &n);

        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i * i != n){
                    count2+= 2;
                }else{
                    count2++;
                }
            }
        }

        printf("Case #%d: %lld\n", count++, count2);
    }

    return 0;
}