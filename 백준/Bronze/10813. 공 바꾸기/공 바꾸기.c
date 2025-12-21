#include <stdio.h>

int main(){
    int N, M, tmp, a, b;
    int arr[100];
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        arr[i] = i+1;
    }
    for(int j = 0; j < M; j++){
        scanf("%d %d", &a, &b);
        tmp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = tmp;
    }
    for(int k = 0; k < N; k++){
        printf("%d ", arr[k]);
    }
}