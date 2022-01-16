// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     long long int n;
//     int sum = 0;
//     scanf("%d", &n);
//     long long int a[n];
    
//     for(int i = 0; i < n; i++){
//         scanf("%lld", &a[i]);
//         if(a[i] <= 0){
//             a[i] = 0;
//         }
//     }

//     for(int i = 0; i < n; i++){
//         sum = sum + a[i];
//     }

//     printf("%lld\n", sum);

//     return 0;
// }

#include <stdio.h>

int main(){
    long int n, sum = 0;
    scanf("%ld", &n);
    long int a[n];

    for(int i = 0; i < n; i++){
        scanf("%ld", &a[i]);
        if(a[i] < 0){
            a[i] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    printf("%ld\n", sum);

}