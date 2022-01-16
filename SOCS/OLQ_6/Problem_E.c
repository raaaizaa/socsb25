#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, count = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char s[1001];

        scanf("%s", &s);
        getchar();

        printf("Case #%d : ", count);
        count++;
        
        for(int j = strlen(s) - 1; j >= 0; j--){
            if(j ==0){
                printf("%c\n", s[j]);
            }else{
                printf("%c", s[j]);
            }
        }
    }
}