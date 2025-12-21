#include <stdio.h>

int main(){
    int C, N;
    int arr[1002];
    float total, avg;
    int count = 0;

    scanf("%d", &C);
    for(int i = 0; i<C; i++){
        total = 0;
        count = 0;
        scanf("%d", &N);
        for(int j = 0; j<N; j++){
            scanf("%d", &arr[j]);
            total += arr[j];
        }
        avg = (double)total/N;

        for(int j = 0; j<N; j++){
            if(arr[j] > avg) count += 1;
        }
        printf("%.3f%%\n", (double)count*100/N);
    }
}