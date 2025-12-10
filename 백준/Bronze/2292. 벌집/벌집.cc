#include <stdio.h>
#include <string.h>

int main(void){
    int n, i;
    scanf("%d", &n);
    int res = 1;
    for(i = 1; n > 1; i++){
        n = n - 6 * i;
        //printf("%d\n", n);
        res++;
    }
    printf("%d", res);
}