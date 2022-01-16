#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        char string[1001];
        scanf("%s", &string);

        printf("Case %d: ", count);
        count++;

        for(int i = 0; i < strlen(string); i++){
            if(i == strlen(string) - 1){
                printf("%d\n", string[i]);
            }else{
                printf("%d-", string[i]);
            }
        }
    }
    return 0;
}