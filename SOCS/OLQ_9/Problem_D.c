#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char chessboard[8][8] = {{a1, b1, c1, d1, e1, f1, g1, h1}, {a2, b2, c2, d2, e2, f2, g2, h2}, {a3, b3, c3, d3, e3, f3, g3, h3}, {a4, b4, c4, d4, e4, f4, g4, h4}, {a5, b5, c5, d5, e5, f5, g5, h5},{a6, b6, c6, d6, e6, f6, g6, h6}, {a7, b7, c7, d7, e7, f7, g7, h7}, {a8, b8, c8, d8, e8, f8, g8, h8}};

int move(char x[3], char y[3]){

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            strcmp(chessboard[i][j] == char y);
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char x[3], y[3];
        scanf("%s %s", &x, &y);

        move(x, y);
    }
}