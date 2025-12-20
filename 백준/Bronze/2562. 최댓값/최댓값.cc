#include <stdio.h>

int main(){
    int a, max, num;
    max = 0;
    num = 0;
    for(int i=0; i<9; i++){
        scanf("%d", &a);
        if(a > max){
            max = a;
            num = i+1;
        }
    }
    printf("%d\n%d", max, num);
}