#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int x, y;
    char p[201][201], temp1, temp2[201];
    
    scanf("%d %d", &x, &y);
    for(int i = 0; i < x; i++){
        scanf(" %s", p[i]);
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int k = j + 1; k < y; k++){
                if(p[i][j] > p[i][k]){
                    temp1 = p[i][j];
                    p[i][j] = p[i][k];
                    p[i][k] = temp1;
                }
            }
        }
    }

    for(int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            if(strcmp(p[i], p[j]) < 0){
                strcpy(temp2, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp2);
            }
        }
    }

    for(int i = 0; i < x; i++){
        printf("%s\n", p[i]);
    }
}