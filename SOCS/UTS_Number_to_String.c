#include <stdio.h>

int main(){
    long long int x;
    int jutaan, ribuan, ratusan, puluhan, belasan, satuan, belasanribu, belasanjuta, puluhanribu, puluhanjuta, ratusanribu;
    char string[][10] = {{""}, {"Satu"}, {"Dua"}, {"Tiga"}, {"Empat"}, {"Lima"}, {"Enam"}, {"Tujuh"}, {"Delapan"}, {"Sembilan"}};
    
    // input angka
    scanf("%d", &x); // misal masukkin 111111

    // modulo

    // satuan
    satuan = x % 10; // 111111 % 10 = 1
    x = x / 10; // 11111 --> x
    belasan = satuan; // belasan = 1

    // puluhan
    puluhan = x % 10; // 11111 % 10 = 1
    x = x / 10; // 11111 / 10 = 1111

    // ratusan
    ratusan = x % 10; // 1111 % 10 = 1
    x = x / 10; // 1111 / 10 = 111

    // ribuan
    ribuan = x % 10; // 111 % 10 = 1
    x = x / 10; // 111 / 10 = 11
    belasanribu = ribuan; // belasanribu = 1

    puluhanribu = x % 10; // 11 % 10 = 1
    x = x / 10; // 11 / 10 = 1

    ratusanribu = x % 10; // 1 % 10 = 1
    x = x / 10; // 1 / 10 = 0

    // jutaan
    jutaan = x % 10; // 1 % 10
    x = x / 10;
    belasanjuta = jutaan;

    puluhanjuta = x % 10;
    x = x / 10;

    // ======================== Jutaan ===========================

    // belasan juta
    if(belasanjuta != 0 && (belasanjuta != 1 && puluhanjuta == 1)){ // belasan juta != 0, belasan juta != 1, puluhan juta == 1
        printf("%s Belas ", string[belasanjuta]);
    }else if(belasanjuta == 1 && puluhanjuta == 1){
        printf("Sebelas Juta ");
    }

    // puluhan juta
    if(puluhanjuta != 0 && puluhanjuta != 1){
        printf("%s Puluh ", string[puluhanjuta]);
        if(ratusanribu == 0 && jutaan == 0){
            printf("Juta");
        }
    }else if(puluhanjuta == 1 && jutaan == 0){
        printf("Sepuluh Juta");
    }

    // jutaan
    if(jutaan != 0 && jutaan != 1){
        printf("%s Juta ", string[jutaan]);
    }else if(jutaan == 1 && puluhanjuta == 0){
        printf("Sejuta ");
    }
    // ======================== Ribuan ===========================
    
    // ratusan ribu
    if(ratusanribu != 0 && ratusanribu != 1){
        printf("%s Ratus ", string[ratusanribu]);
        if(satuan == 0 && puluhan == 0 && ratusan == 0 && puluhanribu == 0){
            printf("Ribu");
        }
        }else if(ratusanribu == 1){
            printf("Seratus ");
    }
    // belasan ribu
    if(belasanribu != 0 && (belasanribu != 1 && puluhanribu == 1)){
        printf("%s Belas ", string[belasanribu]);
        }else if(belasanribu == 1 && puluhanribu == 1){
            printf("Sebelas Ribu ");
        }

    // puluhan ribu
    if(puluhanribu != 0 && puluhanribu != 1){
        printf("%s Puluh ", string[puluhanribu]);
        if(ribuan == 0 && puluhanribu != 1){
            printf("Ribu");
        }
    }else if(puluhanribu == 1 && ribuan == 0){
        printf("Sepuluh Ribu");
    }

    // ribuan
    if(ribuan != 0 && ribuan != 1){
        printf("%s Ribu ", string[ribuan]);
        }else if(ribuan == 1 && puluhanribu == 0){
            printf("Seribu ");
        }
    // ======================== Ratusan ===========================
    
    // ratusan
    if(ratusan != 0 && ratusan != 1){
        printf("%s Ratus ", string[ratusan]);
    }else if(ratusan == 1){
        printf("Seratus ");
    }

    // ======================== Belasan ===========================

    // belasan
    if(belasan != 0 && (belasan !=1 && puluhan == 1)){
        printf("%s Belas ", string[belasan]);
    }else if(belasan == 1 && puluhan == 1){
        printf("Sebelas ");
    }
    // ======================== Puluhan ===========================

    // puluhan
    if(puluhan != 0 && puluhan != 1){
        printf("%s Puluh ", string[puluhan]);
    }else if(satuan == 0 && puluhan == 1){
        printf("Sepuluh ");
    }

    // ======================== Satuan ===========================

    // satuan
    if(puluhan != 1){
        printf("%s", string[satuan]);
    }

    // nol
    if(puluhanjuta == 0 && belasanjuta == 0 && jutaan == 0 && ratusanribu == 0 && ribuan == 0 && ratusan == 0 && puluhan == 0 && satuan == 0){
        printf("Nol");
    }

    printf("\n\n");
    
    return 0;
}