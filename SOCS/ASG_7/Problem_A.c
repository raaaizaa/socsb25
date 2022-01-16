#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t = 3;
    for(int i = 0; i < t; i++){
        int x;
        scanf("%d", &x);
        char arr[x];
        scanf("%s", &arr);
        printf("%c%c\n", arr[x-1], arr[0]);
    }
}
