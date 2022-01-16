// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int main(){
//     int t, count = 1;
//     scanf("%d", &t);

//     while(t--){
//         char s[1000];
//         scanf("%s", &s);

//         for(int i = 0; i < strlen(s); i++){
//             if(s[i] == toupper(s[i])){
//                 s[i] = tolower(s[i]);
//             }else if(s[i] == tolower(s[i])){
//                 s[i] = toupper(s[i]);
//             }
//         }

//         s == strrev(s);

//         printf("Case #%d: %s\n", count++, s);
        
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        char s[1000];
        scanf("%s", &s);

        printf("Case #%d: ", count++);

        for(int i = (strlen(s)) - 1; i >= 0; i--){
            if(s[i] >= 65 && s[i] <= 90){
                printf("%c", s[i] + 32);
            }else if(s[i] >= 97 && s[i] <= 122){
                printf("%c", s[i] - 32);
            }
        }
        printf("\n");
    }
}