#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 2; i < N+2; i++){
        for(int j = 0; j < N-i+1; j++){
            printf(" ");
        }
        for(int k = 1; k < i; k++){
            printf("*");
        }
        printf("\n");
    }
}