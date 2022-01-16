#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);
    int arr[t];

    while(t--){
        
        for(int i = 0; i < 3; i++){
            scanf("%d", &arr[i]);
        }

        if((arr[0] + arr[1]) > arr[2]){
            if((arr[0] + arr[2]) > arr[1]){
                if((arr[1] + arr[2]) > arr[0]){
                    printf("Case #%d: Yes\n", count++);
                }else{
                    printf("Case #%d: No\n", count++);
                }
            }else{
                printf("Case #%d: No\n", count++);
            }
        }else{
            printf("Case #%d: No\n", count++);
        }
    }
}
