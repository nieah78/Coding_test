#include <stdio.h>

int main(){
    int H, M;
    scanf("%d %d", &H, &M);
    if(M >= 45){
        M -= 45;
        printf("%d %d", H, M);
    }
    else{
        M = M + 15;
        H -= 1;
        if(H < 0){
            H += 24;
        }
        printf("%d %d", H, M);
    }
}