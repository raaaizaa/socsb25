#include <stdio.h>
#include <stdlib.h>

int main(){
    int d, s, t;
    scanf("%d %d %d", &d, &s, &t);
    if (d > s && d > t){
        if(s > t){
            printf("Daging\n");
            printf("Sayur\n");
            printf("Telur\n");
        }
        else{
            printf("Daging\n");
            printf("Telur\n");
            printf("Sayur\n");
        }
    }
    else if(s > d && s > t){
        if(d > t){
            printf("Sayur\n");
            printf("Daging\n");
            printf("Telur\n");
        }
        else{
            printf("Sayur\n");
            printf("Telur\n");
            printf("Daging\n");
        }
    }
    else if(t > d && t > s){
        if(d > s){
            printf("Telur\n");
            printf("Daging\n");
            printf("Sayur\n");
        }
        else{
            printf("Telur\n");
            printf("Sayur\n");
            printf("Daging\n");
        }
    }
}