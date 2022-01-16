// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
//     long int t, count, uhh;
//     int count2 = 1;
//     scanf("%d", &t);

//     while(t--){
//         char s[100001];
//         scanf("%s", &s); // za

//         for(int i = 0; i < strlen(s); i++){
//             for(int j = i; j < strlen(s); j++){
//                 if(s[i] != s[j]){ // z = a, count 1, 
//                     s[i]++;
//                     count++;
//                     break;
//                 }
//             }
//         }

//         uhh = strlen(s) - count;
//         if(count % 2 == 0){
//             printf("Case #%d: Breakable\n", count2++);
//         }else{
//             printf("Case #%d: Unbreakable\n", count2++);
//         }

//         printf("%d\n", uhh); // 
//         printf("%d\n", count); // i
//     }

// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        int arr[128], count2 = 0;
        memset(arr, 0, sizeof(arr));
        char string[1000001];
        scanf("%s", &string);

        for(int i = 0; i < strlen(string); i++){
            if(arr[string[i] - 97] == 0){
                arr[string[i] - 97]++;
                count2++;
            }
        }
        if(count2 % 2 == 0){
            printf("Case #%d: Breakable\n", count++);
        }else{
            printf("Case #%d: Unbreakable\n", count++);
        }
    }
}