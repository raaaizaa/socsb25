#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z, xyz, a;

    // perulangan dimulai dari variabel i bernilai 100 hingga sama dengan 500
    for(int i = 100; i <= 500; i++){

        // memisahkan 3 digit di variabel i menjadi 3 digit di variabel x y z

        // variabel x
        a = i; 
        x = a % 10;
        a = a / 10; 

        // variabel y
        y = a % 10; 
        a = a / 10; 

        // variabel z
        z = a % 10; 
        a = a / 10; 
        
        // masing-masing variabel x, y, dan z dipangkatkan 3 dan dijumlah
        xyz = pow(x, 3) + pow(y, 3) + pow(z, 3);
        if(xyz == i){
            // print variabel xyz ketika variabel xyz bernilai sama dengan variabel i
            printf("%d\n", xyz);
        }
    }
    return 0;
}