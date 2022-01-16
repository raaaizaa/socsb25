#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[10000];

    scanf("%[^\n]", &s);

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == tolower(s[i])){
            s[i] = toupper(s[i]);
            if(s[i] == 'I'){
            s[i] = '1';
            }else if(s[i] == 'R'){
            s[i] = '2';
            }else if(s[i] == 'E'){
            s[i] = '3';
            }else if(s[i] == 'A'){
            s[i] = '4';
            }else if(s[i] == 'S'){
            s[i] = '5';
            }else if(s[i] == 'G'){
            s[i] = '6';
            }else if(s[i] == 'T'){
            s[i] = '7';
            }else if(s[i] == 'B'){
            s[i] = '8';
            }else if(s[i] == 'P'){
            s[i] = '9';     
            }else if(s[i] == 'O'){
            s[i] = '0';
        }
        }else if(s[i] == 'I'){
            s[i] = '1';
            }else if(s[i] == 'R'){
            s[i] = '2';
            }else if(s[i] == 'E'){
            s[i] = '3';
            }else if(s[i] == 'A'){
            s[i] = '4';
            }else if(s[i] == 'S'){
            s[i] = '5';
            }else if(s[i] == 'G'){
            s[i] = '6';
            }else if(s[i] == 'T'){
            s[i] = '7';
            }else if(s[i] == 'B'){
            s[i] = '8';
            }else if(s[i] == 'P'){
            s[i] = '9';     
            }else if(s[i] == 'O'){
            s[i] = '0';
        }
        }
    
    printf("%s\n", s);

    return 0;

}