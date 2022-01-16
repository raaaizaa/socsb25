#include <stdio.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        long long int a, b, c, result;
        scanf("%lld %lld %lld", &a, &b, &c); // 20000 50 5000

        result = a * b / 100; 

        if(result > c){
            printf("Case #%d: %lld\n", count++, c);
        }else{
            printf("Case #%d: %lld\n", count++, result);
        }
    }
    return 0;
}