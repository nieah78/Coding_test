#include <stdio.h>

int main(){
    int A, B;
    int x = 0;
    while(x < 1){
        scanf("%d %d", &A, &B);
        if(A != 0 && B != 0){
            printf("%d\n", A+B);
        }
        else{
            x += 1;
        }
    }
}