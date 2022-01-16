#include <stdio.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        int n, a, b, subs, subs2 = 0, c;
        scanf("%d", &n);
        long long int arr[n];
        long long int pertama[n];
        long long int kedua[n];

        for(int i = 0; i < n; i++){
            scanf("%lld", &pertama[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%lld", &kedua[i]);
        }

        printf("Case #%d: ", count);
        count++;

        for(int i = 0; i < n; i++){
            if(i == n-1){
                printf("%lld\n", pertama[i] - kedua[i]);
            }else{
                printf("%lld ", pertama[i] - kedua[i]);
            }
        }
    }
return 0;
}
