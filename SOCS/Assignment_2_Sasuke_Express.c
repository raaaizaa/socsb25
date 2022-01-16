#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer{
    char name[50];
    char num[50];
    char address[50];
}customer;

void add(){
    struct customer custom;
    FILE *fp;
    fp = fopen("sasukeexpress.txt", "a");

    if(fp == NULL){
        printf("File cannot be found or opened\n");
        exit(1);
    }

    printf("Address: ");
    scanf(" %[^\n]", custom.address);
    getchar();

    fprintf(fp,"%s\n", custom.address);
    printf("Success!\n");
    fclose(fp);
}

void delete(){
    FILE *fp, *fpdelete;
    char c;
    int delete, t = 1;
    fp = fopen("sasukeexpress.txt", "r");
    printf("==============================\n");
    c = getc(fp);

    while(c != EOF){
        printf("%c", c);
        c = getc(fp);
    }
    rewind(fp);
    printf("==============================\n");
    printf("Line Number: ");
    scanf("%d", &delete);
    fpdelete = fopen("deletedfile.c", "w");
    c = 'A';

    while(c != EOF){
        c = getc(fp);
        if(t != delete){
            putc(c, fpdelete);
        }
        if(c == '\n'){
            t++;
        }
    }
    fclose(fp);
    fclose(fpdelete);
    remove("sasukeexpress.txt");
    rename("deletedfile.c", "sasukeexpress.txt");
    printf("\nSuccess!\n");
    printf("==============================\n");
    
    fp = fopen("sasukeexpress.txt", "r");
    c = getc(fp);
    while(c != EOF){
        printf("%c", c);
        c = getc(fp);
    }
    printf("==============================\n");
    fclose(fp);
}

void print(){
    struct customer custom;
    FILE *fp;
    fp = fopen("sasukeexpress.txt", "r");

    printf("==============================\n");

    if(fp == NULL){
        printf("File cannot be found or opened\n");
        exit(1);
    }
    while(fgets(custom.name, sizeof(custom.name), fp)){
        printf("%s", custom.name);
    }
    printf("==============================\n");
    fclose(fp);
}

void edit(){
    struct customer custom;
    FILE *fp;
    fp = fopen("sasukeexpress.txt", "a");

    if(fp == NULL){
        printf("File cannot be found or opened\n");
        exit(1);
    }

    printf("Name: ");
    scanf(" %[^\n]", custom.name);
    getchar();

    printf("Number: ");
    scanf(" %[^\n]", custom.num);
    getchar();

    fprintf(fp,"%s\n%s\n", custom.name, custom.num);
}

int main(){
    int x;
    
    printf("==============================\n");
    printf("\tSasuke Express\n");
    printf("==============================\n");
    printf("1. Add Address\n");
    printf("2. Delete\n");
    printf("3. Print\n");
    printf("4. Edit\n");
    printf("5. Exit\n");
    printf("Input Number: ");
    scanf("%d", &x);

    if(x == 1){
        add();
    }else if(x == 2){
        delete();
    }else if(x == 3){
        print();
    }else if(x == 4){
        edit();
    }else if(x == 5){
        return 0;
    }else{
        printf("Error!\n");
    }
}
