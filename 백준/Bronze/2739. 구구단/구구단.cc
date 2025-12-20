#include <stdio.h>

int main(){
    int n;
    int arr[9];
    scanf("%d", &n);
    for(int i=0; i<9; i++){
        arr[i] = n * (i+1);
        printf("%d * %d = %d\n", n, i+1, arr[i]);
    }
    
}