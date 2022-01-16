#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){

        int n;
        scanf("%d", &n);

        for (int j = 1; j <= n; j++){
            if(j == 1 || j == n){
                for(int k = 0; k < n; k++) {
                    printf("*");
                }
                printf("\n");
            }
            if (j > 1 && j < n){
                for(int k = 1; k <= n; k++){
                    if(k == 1 || k == n) {
                        printf("*");
                    } 
					else if (k == n / 2 + 1 && j == n / 2 + 1) {
                        printf("*");
                    } 
					else if(k == j || k == n - j + 1){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }

                printf("\n");
            }
        }

        printf("\n");
    }
return 0;
}