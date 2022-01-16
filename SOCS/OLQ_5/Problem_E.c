// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int t, x = 1;
    
//     scanf("%d", &t);
    
//     while(t--){
//         int n, c = 0, d;

//         scanf("%d", &n);
//         int arr[n];

//         for(int i = 0; i < n; i++){
//             scanf("%d", &arr[i]);
//             if(arr[i] == arr[n]){
//             c++;
//             }
//             if(arr[i] > arr[n]){
//                 arr[n] = arr[i];
//                 c = 1;
//             }
//         }

//         printf("Case #%d: %d\n", x, c);
//         x++;
//         int counter = 0;
//         for(int i = 1; i < n; i++){
//             if(arr[n] == arr[i]){
//                 counter++;
//                 if(counter < c){
//                     printf("%d ", i);
//                 }else{
//                     printf("%d\n", i);
//                 }
//             }
//         }
        
//     }
// }

#include <stdio.h>

int main() {
    long long int T, N;
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        
        scanf("%lld", &N); getchar();
        
        long long int f[200001] = {0}, E = 0;
        for (int j = 0; j < N; j++) {
            scanf("%lld", &E); getchar();
            f[E]++;
        }
        
        long long int max = 0, c = 0;
        for (int j = 1; j < 200001; j++) {
            
            if (f[j] == max) {
                c ++;
            }
            
            if (f[j]>max) {
                max = f[j];
                c = 1;
            }
        }
        
        printf("Case #%lld: %lld\n", i+1, max);
        int counter = 0;
        for (int j = 1; j<200001; j++) {
            if (f[j] == max) {
                
                counter ++;
                if (counter<c){
                    printf("%lld ", j);   
                } else {
                    printf("%lld\n", j);
                }
                
            } 
        }
    }
    return 0;
}