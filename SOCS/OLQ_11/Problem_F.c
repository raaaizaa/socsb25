#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct plant{
    int id;
    char name[51];
}plant;

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");

    int x;
    fscanf(fp, "%d", &x);

    plant input[1000];

    for(int i = 0; i < x; i++){
        int id;
        char nametemp[51];

        fscanf(fp, "%d", &id);
        fscanf(fp, "#%[^\n]", &nametemp);
        input[i].id = id;
        strcpy(input[i].name, nametemp);
    }

    for(int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            if(strcmp(input[i].name, input[j].name) > 0){
                char temp1[51];
                int temp2 = 0;
                temp2 = input[i].id;
                input[i].id = input[j].id;
                input[j].id = temp2;
                strcpy(temp1, input[i].name);
                strcpy(input[i].name, input[j].name);
                strcpy(input[j].name, temp1);
            }
        }
    }

    for(int i = 0; i < x; i++){
        printf("%d %s\n", input[i].id, input[i].name);
    }

    fclose(fp);
}