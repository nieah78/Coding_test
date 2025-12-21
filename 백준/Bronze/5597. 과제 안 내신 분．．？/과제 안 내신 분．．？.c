#include <stdio.h>

int main(){
    int arr[31] = {0,};
    int tmp;
    for(int i = 0; i < 28; i++){
        scanf("%d", &tmp);
        arr[tmp] = tmp;
    }
    for(int j = 1; j < 31; j++){
        if(arr[j] == 0){
            printf("%d\n", j);
        }
    }
}