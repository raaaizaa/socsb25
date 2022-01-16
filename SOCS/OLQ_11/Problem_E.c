#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int t, n, total, num, arr[101], sum = 0, count = 1;
    fscanf(fp, "%d\n", &t);

    for(int i = 0; i < t; i++){
        fscanf(fp, "%d\n", &n);
        for(int j = 0; j < n; j++){
            fscanf(fp, "%d\n", &arr[j]);
            sum += arr[j];
        }

        total = sum * 4;
        sum *= 8;

        for(int j = 0; j < n; j++){
            if(j != n - 1){
                if(arr[num] == 1){
                    sum -= 4;
                }else{
                    if(arr[num] > arr[num+1]){
                        sum = sum - ((arr[num] - 1) * 4 + arr[num + 1] *4);
                    }else{
                        sum = sum - ((arr[num] - 1)*4 + arr[num] * 4);
                    }
                }
            }else{
                if(arr[num] == 1){
                    sum += 0;
                }else{
                    sum = sum - (arr[num] - 1) * 4;
                }
            }
            num++;
        }

        printf("Case #%d: %d %d\n", count++, sum, total);
        sum = 0;
        num = 0;
    }
    fclose(fp);
}