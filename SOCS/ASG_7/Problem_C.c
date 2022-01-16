#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        char arr[1001];
        scanf("%s", &arr);

        printf("Case %d: ", count);
        count++;

        for(int i = strlen(arr) - 1; i >= 0; i--){
            printf("%d", arr[i] % 2);
        }
    printf("\n");
    }
    return 0;
}