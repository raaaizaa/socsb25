#include <stdio.h>
#include <stdlib.h>

int pac(int x, int y){
    int total = 0;
    char m[101];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            scanf("%s", &m);
        }
    }

    if(m = "#P#"){
        total = 0;
    }else if(m = "*"){
        total++;
    }

    return pac(x, y);
}

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);

        printf("Case #%d: %d\n", count++, pac(x, y));
    }
}