#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    char note[10];
    long long int nim;
    int tugas, uts, uas;
};

int i = 1;
int total = 0;

int add(){
    struct data data[100];

    FILE *database = fopen("database.in", "a");

    system("cls");

    printf("NIM: ");
    scanf("%lld", &data[i].nim);
    printf("Assignment: ");
    scanf("%d", &data[i].tugas);
    printf("Mid-exam: ");
    scanf("%d", &data[i].uts);
    printf("Final-exam: ");
    scanf("%d", &data[i].uas);
    printf("Notes (Passed/Failed): ");
    scanf("%s", &data[i].note);

    fprintf(database, "%lld-%d-%d-%d-%s\n", data[i].nim, data[i].tugas, data[i].uts, data[i].uas, data[i].note);
    fclose(database);
    total++;

    printf("Success!\n");
    getchar();
    printf("Press enter to continue...");
    getchar();
    return 0;
}

int swap(struct data *x, struct data *y){
    struct data temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void sort(){
    struct data data[100];

    for(i = 0; i < total; i++){
        for(int j = 0; j < total - i - 1; j++){
            if(data[j].nim > data[j+1].nim){
                swap(&data[j], &data[j+1]);
            }
        }
    }
}

int search(struct data data[], long long int key){
    total = 0;
    i = 0;

    FILE *database = fopen("database.in", "r");

    while(!feof(database)){
        fscanf(database, "%lld-%d-%d-%d-%s\n", &data[i].nim, &data[i].tugas, &data[i].uts, &data[i].uas, data[i].note);
        total++;
        i++;
    }
    
    long int left = 0, right = total;

    sort();

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(data[mid].nim == key){
            return mid;
        }
        if(data[mid].nim < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    return -1;

    fclose(database);
}

int show(){
    int x;
    int count = 1;
    int key;
    struct data data[100];

    system("cls");

    printf("Input NIM: ");
    scanf("%lld", &key);
    x = search(data, key);

    if(x == -1){
        printf("\n\tData not found!\n");
    }else{
        printf("\nNIM: %lld\nAssignment: %d\nMid-exam: %d\nFinal-exam: %d\nNotes: %s\n", data[x].nim, data[x].tugas, data[x].uts, data[x].uas, data[x].note);
    }

    getchar();
    printf("\n\tPress enter to continue...\n");
    getchar();
    return -1;
}

int main(){
    int x;

    while(1){
        system("cls");

        printf("\t1. Add\n");
        printf("\t2. Show\n");
        printf("\t3. Exit\n");
        printf("\nInput Number: ");
        scanf("%d", &x);

        if(x == 1){
            add();
        }else if(x == 2){
            show();
        }else if(x == 3){
            system("cls");
            printf("\tGoodbye! Good to see you!\n");
            exit(1);
        }else{
            system("cls");
            printf("\tInput error!\n");
            getchar();
            printf("\n\tPress enter to continue...\n");
            getchar();
        }
    }
}