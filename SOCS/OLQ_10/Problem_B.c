#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[51][51], stringtemp[51][51];
long long int num[51], temp, count = 1, x;

void scan(){
    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        scanf(" %[^#]#%lld", &num[i], &name[i]);
    }
}

void sorting(){
    for(int i = 0; i < x; i++){
    for(int j = i + 1; j < x; j++){
        if(num[i] < num[j]){
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;

            strcpy(stringtemp[0], name[i]);
            strcpy(name[i], name[j]);
            strcpy(name[j], stringtemp[0]);
            }

        if(num[i] == num[j]){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(stringtemp[0], name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], stringtemp[0]);
                }
            }
        }
    }
}

int display(){
    for(int i = 0; i < x; i++){
        printf("%lld %s", num[i], name[i]);
    }
}

int main(){
    scan();
    sorting();
    display();
}