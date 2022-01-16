#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int n, m, c;
    scanf("%d %d", &n, &m);
    
    char arr[n];
    scanf("%s", &arr);

    for(int i = 0; i < m; i++){
        scanf("%d", &c);
        if(arr[c] == toupper(arr[c])){
            arr[c] = tolower(arr[c]);
            }else if(arr[c] == tolower(arr[c])){
                arr[c] = toupper(arr[c]);
            }
    }
    printf("%s\n", arr);
    return 0;
}