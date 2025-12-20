#include <stdio.h>

int main(){
    float arr[1000];
    float N;
    float max = 0;
    float total = 0;
    scanf("%f", &N);
    for(int i = 0; i < N; i++){
        scanf("%f", &arr[i]);
    }
    for(int j = 0; j<N; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }

    for(int k = 0; k<N; k++){
        arr[k] = arr[k]/max*100;
        total += arr[k];
    }
    printf("%f", total/N);
}