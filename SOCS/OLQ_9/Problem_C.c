#include <stdio.h>
#include <stdlib.h>

int atob(long long int x, long long int y){

    for(;;){
        if(x == y){
            printf(" YES\n");
            break;
        }else if(x == 1 & y != 1){
            printf(" NO\n");
            break;
        }else if(x % 2 == 0){
            x = x / 2;
        }else if(x % 2 == 1){
            x = x * 3 + 1;
        }
        
    }
}

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        long long int x, y;

        scanf("%lld %lld", &x, &y);
        printf("Case #%d:", count++);
        atob(x, y);
    }
}