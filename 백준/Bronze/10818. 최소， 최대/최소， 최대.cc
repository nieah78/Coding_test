#include <stdio.h>

int main(){
    int N, big, small;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    big = arr[0];
    small = arr[0];
    for(int j = 1; j < N; j++){
        if(arr[j] > big){
            big = arr[j];
        }
        if(arr[j] < small){
            small = arr[j];
        }
    }
    printf("%d %d", small, big);
}