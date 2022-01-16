// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct subject{
//     char name[101];
//     int num;
// };

// void bubblesort(struct subject subject[], int t){
//     int temp;

//     for(int i = 0; i < t; i++){
//         for(int j = 0; j < t-i-1; j++){
//             if(subject[j].num > subject[j+1].num){
//                 temp = subject[j].num;
//                 subject[j].num = subject[j+1].num;
//                 subject[j+1].num = temp;
//             }
//         }
//     }


// }

// int main(){
//     int t;
//     scanf("%d", &t);
//     struct subject subject[t];

//     for(int i = 0; i < t; i++){
//         scanf("%s %d", &subject[i].name, &subject[i].num);
//     }

//     bubblesort(subject, t);
    
//     for(int i = 0; i < t; i++){
//         printf("%s %d\n", subject[i].name, subject[i].num);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int t;

// struct subject{
//     char name[101][11];
//     int num[101];
// };

// void scan(){
//     struct subject subject[t];

//     for(int i = 0; i < t; i++){
//         scanf("%s %d", subject[i].name, &subject[i].num);
//     }
// }

// void sorting(){
//     int temp;
//     char stringtemp[2][11];
//     struct subject subject[t];

//     for(int i = 0; i < t; i++){
//         for(int j = i+1; j < t; j++){
//             if(subject[i].num > subject[j].num){
//                 temp = subject[i].num;
//                 subject[i].num = subject[j].num;
//                 subject[j].num = temp;

//                 strcpy(stringtemp, subject[j].name);
//                 strcpy(subject[i].name, subject[j].name);
//                 strcpy(subject[j].name, stringtemp);
//             }

//             if(subject[i].name == subject[j].name){
//                 if(strcmp(subject[i].name, subject[j].name) > 0){
//                     strcpy(stringtemp, subject[j].name);
//                     strcpy(subject[i].name, subject[j].name);
//                     strcpy(subject[j].name, stringtemp);
//                 }
//             }
//         }
//     }
// }

// void print(){
//     struct subject subject[t];
    
//     for(int i = 0; i < t; i++){
//         printf("%s\n", subject[i]);
//     }
// }

// int main(){

//     scanf("%d", &t);
//     scan();
//     sorting();
//     print();
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[101][11], stringtemp[2][11], t;
long long int num[101], temp;

void sorting(){

    for(int i = 0; i < t; i++){
        for(int j = i+1; j < t; j++){
            if(num[i] > num[j]){
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

void print(){

    for(int i = 0; i < t; i++){
        printf("%s\n", name[i]);
    }
}

int main(){
    
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%s %lld", name[i], &num[i]);
    }
    sorting();
    print();

}