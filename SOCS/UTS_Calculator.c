#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Raiza Rahman - 2501985211

int main(){
    char id[10000], op[10000];
    float id1, id2, t;

    while(1){

        scanf("%s", &id);

// ============jika input x================

        if(strcmp(id,"x") == 0){
            return 0;
        }

        scanf("%s %f", &op, &id2);
        if(strcmp(id, "n") != 0){
            switch(op[0]){

// ============penjumlahan================

                case '+':
                id1 = atof(id);
                t = id1 + id2;
                printf("= %.f\n", t);
                break;

// ============pengurangan================

                case '-':
                id1 = atof(id);
                t = id1 - id2;
                printf("= %.f\n", t);
                break;

// ============perkalian================

                case '*':
                id1 = atof(id);
                t = id1 * id2;
                printf("= %.f\n", t);
                break;

// ============pembagian================

                case '/':
                id1 = atof(id);
                t = id1 / id2;
                printf("= %.2f\n", t);
                break;

//======================================

                default:
                printf("Salah\n");
                break;
            }
            }else{
                switch(op[0]){

// ============penjumlahan================

                    case '+':
                    id1 = atof(id);
                    t += id2;
                    printf("= %.f\n", t);
                    break;

// ============pengurangan================

                    case '-':
                    id1 = atof(id);
                    t -= id2;
                    printf("= %.f\n", t);
                    break;

// ============perkalian================

                    case '*':
                    id1 = atof(id);
                    t *= id2;
                    printf("= %.f\n", t);
                    break;

// ============pembagian================

                    case '/':
                    id1 = atof(id);
                    t /= id2;
                    printf("= %.2f\n", t);
                    break;

                    default:
                    printf("Salah\n");
                    break;
                }
            }

    }
    
    return 0;

    }
