#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char log[301][1000];

void add(){
    char input[1];
    FILE* logs = fopen("log.txt", "a");

    system("cls");

    printf("\tADD LOG\n\n");

    printf("Add your log:\n");
    scanf(" %[^\n]", &log);
    fprintf(logs, "%s\n", &log);

    printf("Log has been added!\n");
    fclose(logs);

    while(1){

        printf("Back to main menu? (Y/N): ");
        scanf("%s", input);

        if (strcmp(input, "Y") == 0) {
            main();
        }else if (strcmp(input, "N") == 0) {
            system("cls");
            printf("\tGoodbye!\n");
            exit(1);
        }else{
            printf("Invalid input!\n");
        }
    }
}

void show() {
    char input[1];
    int count = 1;
    FILE* logs = fopen("log.txt", "r");

    system("cls");

    printf("\tLIST OF LOGS\n\n");

    while (fgets(log, sizeof(log), logs)) {
        printf("%d. %s", count++, log);
    }

    fclose(logs);

    getchar();
    printf("Press enter to continue...\n");
    getchar();

    while (1) {

        printf("Back to main menu? (Y/N): ");
        scanf("%s", &input);

        if (strcmp(input, "Y") == 0) {
            main();
        }
        else if (strcmp(input, "N") == 0) {
            system("cls");
            printf("\tGoodbye!\n");
            exit(1);
        }
        else {
            printf("Invalid input!\n");
        }
    }

}

int main() {
    int x;

    while (1) {
        system("cls");
        printf("======= DAILY LOG =======\n");
        printf("\t1. Add\n");
        printf("\t2. Show\n");
        printf("\t3. Exit\n");
        printf("=========================\n\n");
        printf("Input Number: ");
        scanf("%d", &x);

        if (x == 1) {
            add();
        }
        else if (x == 2) {
            show();
        }
        else if (x == 3) {
            system("cls");
            printf("Goodbye!");
            exit(1);
        }
        else {
            system("cls");
            printf("Input Error!\n");
            getchar();
            printf("Press enter to continue...\n");
            getchar();
        }
    }
}