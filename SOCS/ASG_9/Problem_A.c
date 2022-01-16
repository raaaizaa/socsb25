// #include <stdio.h>
// #include <stdlib.h>

// int fib(int x, char y, char z){
//     int a = 0, b = 1, c;

//     for(int i = 0; i < x; i++){
//         c = a + b;
//         b = a;
//         c = b;
//     }
// }

// int main(){
//     int x, t;
//     char y, z;

//     scanf("%d", &t);

//     while(t--){
//         scanf("%d %c %c", &x, &y, &z);
//         fib(x, y, z);
//     }
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, count = 1;
    scanf("%d", &t);

    while(t--){
        char s[1000000], s1[1000000];
        char a[1000000], b[1000000];
        char temp[1000000];
        int n;

        scanf("%d %s %s", &n, &a, &b);
        strcpy(s, a);
        strcpy(s1, b);

        for(int i = 2; i <= n; i++){
            strcpy(temp, s1);
            strcat(s1, s);
            strcpy(s, temp);
        }
        printf("Case #%d: %s\n", count++, s1);
    }
}