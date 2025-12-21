#include <stdio.h>

int main(){
    int N, v;
    int arr[100];
    int a = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for(int j = 0; j < N; j++){
        if(arr[j] == v){
            a += 1;
        }
    }
    printf("%d", a);
}