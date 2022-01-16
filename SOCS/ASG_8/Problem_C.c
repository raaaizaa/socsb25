#include <stdio.h>

struct schedule{
    char code[9];
    char day[12];
    int time;
};

int main(){
    int n, x, y, z, count = 1;
    scanf("%d", &n);
    struct schedule schedule[n];
    
    for(int i = 0; i < n; i++){
        scanf(" %s", &schedule[i].code);
        scanf(" %s", &schedule[i].day);
        scanf("%d", &schedule[i].time);

    }
    scanf("%d", &x);
    
    for(int i = 0; i < x; i++){
        scanf("%d", &y);
        printf("Query #%d:\n", count++);
        printf("Code: %s\n", schedule[y-1].code);
        printf("Day: %s\n", schedule[y-1].day);
        printf("Time: %02d:00\n", schedule[y-1].time);
    }

}