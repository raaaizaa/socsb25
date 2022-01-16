#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct str{
    char x[51];
    char y[101];
}string;

string sentence[101];

int main(){
    int t, tc, count = 1;
    const char until[2] = " ";
    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &t);

    for(int i = 0; i < t; i++){
        fscanf(fp," %[^#]#%s\n", &sentence[i].x, &sentence[i].y);
    }

    fscanf(fp, "%d\n", &tc);
    char sentence2[1000];
    for(int i = 0; i < tc; i++){
        printf("Case #%d:\n", count++);
        fscanf(fp, " %[^\n]\n", sentence2);
        char * key = strtok(sentence2, until);
        int total = 0;
        int index = 0;

        while(key != NULL){
            int total = search(sentence, t, key);
            if(total != -1 && index != 0){
                printf(" %s", sentence[total].y);
            }else if(total != -1 && index == 0){
                printf("%s", sentence[total].y);
            }else if(total == -1 && index == 0){
                printf("%s", key);
            }else{
                printf(" %s", key);
            }

            key = strtok(NULL, " ");
            index++;
        }

        printf("\n");
    }

    fclose(fp);
}

int search(string sentence[], int length, char key[]){
    for(int i = 0; i < length; i++){
        if(strcmp(key, sentence[i].x) == 0){
            return i;
        }
    }

    return -1;
}
