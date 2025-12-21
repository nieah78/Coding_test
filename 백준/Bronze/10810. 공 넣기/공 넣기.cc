#include <stdio.h>

int main(){
    int N, M, i, j, k;
    int arr[100] = {0, };
    scanf("%d %d", &N, &M);
    for(int a = 0; a<M; a++){
        scanf("%d %d %d", &i, &j, &k);
        for(; i <= j; i++){
            arr[i-1] = k;
        }
    }
    for(int b = 0; b<N; b++){
        printf("%d ", arr[b]);
    }
}