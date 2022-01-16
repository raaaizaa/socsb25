#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, temp = 0;
char name[1000][1000], arr[1000][1000], tempstring[1000];

void sorting(){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(arr[i], arr[j]) > 0){
                
                strcpy(tempstring, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], tempstring);

                strcpy(tempstring, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempstring);
            }
        }
    }
}

void print(){
    for(int i = 0; i < n; i++){
        printf("%s %s\n", arr[i], name[i]);
    }
}

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    
    if(fp == NULL){
        printf("File cannot be found or opened\n");
        exit(1);
    }

    scanf("%d", &n);
    while(!feof(fp)){
        int i = 0;
        fscanf(fp, "%s %s", arr[i], name[i]);
        i++;
    }
    fclose(fp);

    sorting();
    print();
}