#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;

    FILE *fp;

    fp = fopen("testdata.in", "r");
    fscanf(fp,"%d %d", &x, &y);
    z = x + y;
    fclose(fp);
    printf("%d\n", z);
}