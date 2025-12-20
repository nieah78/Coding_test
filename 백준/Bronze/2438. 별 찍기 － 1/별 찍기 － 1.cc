#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 2; i<N+2; i++){
        for(int j = 1; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}