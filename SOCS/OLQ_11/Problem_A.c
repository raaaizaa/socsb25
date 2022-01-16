#include <stdio.h>
#include <string.h>

int main(){
    int n, t, index[105], count = 1;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &n);
    char name[n][50], plant[n][50];

    for(int i = 0; i < n; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", name[i], plant[i]);
    }

    fscanf(fp, "%d\n", &t);
    char key[t][50];

    for(int i = 0; i < t; i++){
        fscanf(fp,"%s\n", key[i]);
    }

    for(int i = 0; i < t; i++){
        index[i] = -1;
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            if(strcmp(key[i], name[j]) == 0){
                index[i] = j;
            }
        }
    }

    for(int i = 0; i < t; i++){
        if(index[i] == -1){
            printf("Case #%d: N/A\n", count++);
        }else{
            printf("Case #%d: %s\n", count++, plant[index[i]]);
        }
    }

    fclose(fp);

    return 0;
}
