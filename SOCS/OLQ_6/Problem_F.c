#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int p(char s[]){
    for(int i = 0; i < strlen(s); i++){
         if(s[i] != s[strlen(s)-1-i]){
             return 0;
        }
    }
    return 1;
}


int main(){
    int t; 
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        char s[500]; 
        scanf("%s", &s);
        if(p(s) == 1){
            printf("Case #%d: Yay, it's a palindrome\n", i);
        }else{
            printf("Case #%d: Nah, it's not a palindrome\n", i);
        }
    }
}