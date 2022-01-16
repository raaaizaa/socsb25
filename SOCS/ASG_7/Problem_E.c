#include <stdio.h>
#include <math.h>

int main(){
    int t, index = 1;
    long long int n;
    scanf("%d", &t);

    while(t--){
        long long int count = 0;
        scanf("%lld", &n);

        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i * i != n){
                    count += 2;
                }else{
                    count++;
                    }
                }
        }
        
        printf("Case #%d: %lld\n", index, count);
        index++;
    }

    return 0;
}