#include <stdio.h>
#include <stdlib.h>

float menu = 0;

void menumakanan(){

    printf("Menu Makanan:\n");
    printf("1. Croissant Almond - Rp 25.000,00\n");
    printf("2. Smoke Beef Croissant - Rp 27.500,00\n");
    printf("3. Croffle - Rp 27.000,00\n");
    printf("4. Apple Puff - Rp 22.000,00\n");
    printf("5. Pie Apple - Rp 25.000,00\n\n");

}

void menuminuman(){
    printf("Menu Minuman:\n");
    printf("6. Espresso - Rp 18.000,00\n");
    printf("7. Cafe Latte - Rp 25.000,00\n");
    printf("8. Cappuccino - Rp 25.000,00\n\n");
}

void selectmakanan(){
    int x, y;

    for(;;){
        printf("Input Nomor Menu Yang Akan Dipesan (Input 0 jika sudah selesai menginput): ");
        scanf("%d", &x);
        if(x == 1){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);
            menu += (25 * y);
        }else if(x == 2){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (27.5 * y);
        }else if(x == 3){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (27 * y);
        }else if(x == 4){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (22 * y);
        }else if(x == 5){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (25 * y);
        }else if(x == 0){
            break;
        }else{
            printf("Error!\n");
        }
    }
}

void selectminuman(){
    int x, y;

    for(;;){
        printf("Input Nomor Menu Yang Akan Dipesan (Input 0 jika sudah selesai menginput): ");
        scanf("%d", &x);
        if(x == 6){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (18 * y);
        }else if(x == 7){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (25 * y);
        }else if(x == 8){
            printf("Jumlah pesanan: ");
            scanf("%d", &y);            
            menu += (25 * y);
        }else if(x == 0){
            break;
        }else{
            printf("Error!\n");
        }
    }   
}

int main(){
    int t;

    while(1){
        printf("Pilih Menu:\n");
        printf("1. Makanan\n");
        printf("2. Minuman\n");
        printf("3. Print Bill\n");
        printf("Input: ");
        scanf("%d", &t);
        printf ("\n");

        if(t == 1){
            menumakanan();
            selectmakanan();
        }else if(t == 2){
            menuminuman();
            selectminuman();
        }else if(t == 3){
            break;
        }else{
            printf("Error!\n");
        }

    }
    printf("Total: Rp%.1f00,00\n", menu);
}
