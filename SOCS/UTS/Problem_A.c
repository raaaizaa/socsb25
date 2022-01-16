#include <stdio.h>
#include <stdlib.h>

int main(){
    char x;

    scanf("%c4", &x);

    switch(x){
        case 'C':
        printf("Nada C4 adalah 261.63 Hz\n");
        break;

        case 'D':
        printf("Nada D4 adalah 293.66 Hz\n");
        break;

        case 'E':
        printf("Nada E4 adalah 329.63 Hz\n");
        break;

        case 'F':
        printf("Nada F4 adalah 349.23 Hz\n");
        break;

        case 'G':
        printf("Nada G4 adalah 392.00 Hz\n");
        break;

        case 'A':
        printf("Nada A4 adalah 440.00 Hz\n");
        break;

        case 'B':
        printf("Nada B4 adalah 493.88 Hz\n");
        break;
    }

    return 0;
}
