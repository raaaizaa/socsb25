#include <stdio.h>
#include <stdlib.h>

int main(){
    int t; 
    scanf("%d", &t);
    int line, count = 1;
    while(t--){
    scanf("%d", &line);
        printf("Case #%d:\n", count);
        for(int i = 1; i <= line; i++){
            for(int j = 1; j <= line; j++){
                if(j <= line - i) printf(" ");
                else{
                    if((i + j) % 2 == 0){
                        printf("*");
                }
                    else printf("#");
                }
            }
        printf("\n");
        }
        count++;
    }
}