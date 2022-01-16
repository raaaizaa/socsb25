#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x][y];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int n, a, b, c;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
            arr[a-1][b-1] = c;
    }
    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(j == (y-1)){
                printf("%d\n", arr[i][j]);
            }else{
                printf("%d ", arr[i][j]);
            }
        }
    }
    
    return 0;
}
