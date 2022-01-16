#include <stdio.h>
#include <string.h>

struct product{
    char product[51];
    int item;
};

int search(char target[], int total, struct product list[]) {
    int res = -1;
    for(int i = 0; i < total; i++){
        if(strcmp(target, list[i].product) == 0){
            res = i;
            return res;
        }
    }
    return res;
}
int main(){
    int t, tc, count = 1;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &t);

    for(int i = 0; i < t; i++){
        fscanf(fp, "%d\n", &tc);
        struct product temp;
        struct product list[tc];
        int total = 0;
        char x[100];

        for(int j = 0; j < tc; j++){
            fscanf(fp, " %[^#]#%[^#]#%d\n", x, temp.product, &temp.item);
            int result = search(temp.product, total, list);

            if(result == -1){ //item not found
                strcpy(list[total].product, temp.product);
                if(strcmp(x, "sell") == 0){
                    list[total].item = -temp.item;
                }else if(strcmp(x, "buy") == 0){
                    list[total].item = temp.item;
                }
                total++;
            }else if(result != -1){ // item found
                if(strcmp(x, "sell") == 0){
                    list[result].item -= temp.item;
                }else if(strcmp(x, "buy") == 0){
                    list[result].item += temp.item;
                }
            }
        }
        printf("Case #%d:\n", count++);
        
        int flag = 0;
        for(int j = 0; j < total; j++){
            if(list[j].item < 0){
                printf("stock is not enough for product %s\n", list[j].product);
                flag = 1;
            }
        }
        
        if(!flag){
            for(int j = 0; j < total; j++){
                printf("%s - %d\n", list[j].product, list[j].item);
            }
        }
    }
    return 0;
}