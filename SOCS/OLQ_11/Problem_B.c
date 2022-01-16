#include <stdio.h>
#include <string.h>

int main(){
    int t, x, count = 1;
    char code[10000];
    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &t);

    for(int i = 0; i < t; i++){
        fscanf(fp, "%d\n", &x);
        fscanf(fp, "%[^\n]\n", code);

        int len = 0;
        while(code[len] != '\0'){
            if(code[len]=='0'){
                code[len]='O';   
            }
            if(code[len]=='1'){
                code[len]='I';
            }
            if(code[len]=='3'){
                code[len]='E';
            }
            if(code[len]=='4'){
                code[len]='A';
            }
            if(code[len]=='5'){
                code[len]='S';
            }
            if(code[len]=='6'){
                code[len]='G';
            }
            if(code[len]=='7'){
                code[len]='T';
            }
            if(code[len]=='8'){
                code[len]='B';
            }
            if(code[len]!=' '){
                code[len]-=x;
            }
            if(code[len] < 65 && code[len]!=' '){
                code[len]+=26;
            }
            len++;
        }

        printf("Case #%d: %s\n", count++, code);
    }
    
    fclose(fp);
}