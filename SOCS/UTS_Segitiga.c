#include <stdio.h>
#include <math.h>

int main(){
    int t, a, l, p, r;

    printf("Tinggi Segitiga : ");
    scanf("%d", &t);
    printf("Alas Segitiga: ");
    scanf("%d", &a);

    // Luas
    l = (a * t) / 2;

    printf("Luas : %d\n", l);

    // Panjang Sisi Segitiga
    p = sqrt((a * a) + (t * t));

    printf("Panjang Sisi: %d\n", p);
    
    // Rasio Luas & Panjang

    printf("%d : %d\n", l, p);
    return 0;
}