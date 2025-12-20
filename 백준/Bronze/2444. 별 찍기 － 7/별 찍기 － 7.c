#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 1; i < N; i++){
        for(int j = 0; j < N-i; j++){
            printf(" ");
        }
        for(int k = 0; k < i*2 - 1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int x = 0; x < 2*N-1; x++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < N+1; i++){
        for(int j = 0; j < i+1; j++){
            printf(" ");
        }
        for(int k = 1; k < 2*(N-i-1); k++){
            printf("*");
        }
        printf("\n");
    }
}