// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <ctype.h>
// #include <string.h>

// // int main(){
// //     int t, index = 1;
// //     long long int x;
// //     scanf("%d", &t);

// //     while(t--){
// //         int count = 0, total = 0;
// //         scanf("%lld", &x);
// //         long long int arr[x]; 

// //         for(int i = 0; i < x; i++){
// //             scanf("%lld", &arr[i]);
// //         }

// //         for(int i = 0; i < x; i++){
// //             for(int j = i + 1; j < x; j++){
// //                 if(arr[i] == arr[j]){
// //                     count++;
// //                     break;
// //                 }
// //             }
// //         }
// //         printf("Case #%d: %d\n", index++, x - count);
// //     }
// // }

// int main(){
//     int count = 1, t;
//     scanf("%d", &t);
    
//     while(t--){
//         int arr[1000001];
//         int x, total = 0;
//         scanf("%d", &x);
//         int arr2[x];
//         memset(arr, 0, sizeof(arr));
        
//         for(int i = 0; i < x; i++){
//             scanf("%d", &arr2[i]);
//             arr[arr2[i]]++;
//         }
//         for(int i = 0; i < 1000001; i++){
//             if(arr[i] > 0){
//                 total++;
//             }
//         }
//         printf("Case #%d: %d\n", count++, total);
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int totalarr[10000001];

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        int x, total = 0;
        scanf("%d", &x);
        int arr[x];
        memset(totalarr, 0, sizeof(totalarr));

        for(int i = 0; i < x; i++){
            scanf("%d", &arr[i]);
            totalarr[arr[i]]++;
        }

        for(int i = 0; i < 10000001; i++){
            if(totalarr[i] > 0){
                total++;
            }
        }

        printf("Case #%d: %d\n", count++, total);

    }

}