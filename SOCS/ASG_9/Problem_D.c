#include <stdio.h>
#include <stdlib.h>

int joj(int n, int x, int y){
    int a;

    if(n == 0){
        printf("%d\n", x);
    }else if(n == 1){
        printf("%d\n", y);
    }else{
        for(int i = 1; i < n; i++){
            a = y - x; 
            x = y;
            y = a;
        }
        printf("%d\n", a);
    }

}

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        printf("Case #%d: ", count++);
        joj(n, x, y);
    }
}