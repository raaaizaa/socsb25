#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct menu{
    long long int p;
    char s[16];
    char id[9];

};

int main(){
    long long int n;
    scanf("%lld", &n);
    struct menu menu[n];

    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", &menu[i].id);
        scanf(" %[^\n]", &menu[i].s);
        scanf("%lld", &menu[i].p);
    }

    long long int median = menu[(n / 2)].p;

    for(int i = 0; i < n; i++){
        if(menu[i].p >= median){
            printf("%s %s\n", menu[i].id, menu[i].s);
        }else continue;
    }

}