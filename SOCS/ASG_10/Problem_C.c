#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct yt{
    char artist[1001];
    char title[1001];
    int view;
}yt;

int main(){
    yt temp;
    int n = 0;
    yt yt[100];

    FILE *fp;
    fp = fopen("testdata.in", "r");
    while(!feof(fp)){
        fscanf(fp, "%[^#]#%[^#]#%d\n", &yt[n].title, &yt[n].artist, &yt[n].view);
        n++;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(yt[i].view > yt[j].view){
                temp = yt[i];
                yt[i] = yt[j];
                yt[j] = temp;
            }

            if(yt[i].view == yt[j].view){
                if(strcmp(yt[i].title, yt[j].title) < 0){
                    temp = yt[i];
                    yt[i] = yt[j];
                    yt[j] = temp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s by %s - %d\n", yt[i].title, yt[i].artist, yt[i].view);
    }
}