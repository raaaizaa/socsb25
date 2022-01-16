#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, count = 1;
    int n;
    scanf("%d", &t); // 2

    while(t--){
        scanf("%d", &n); // 4, 6
        int arr[n], index = 1;

        printf("Case #%d:\n", count++);

        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 || i % 5 == 0){
                if(i % 15 == 0){
                    printf("%d Lili\n", index++);
                }else{
                    printf("%d Jojo\n", index++);
                }
            }else{
                printf("%d Lili\n", index++);
            }
        }

    }
}