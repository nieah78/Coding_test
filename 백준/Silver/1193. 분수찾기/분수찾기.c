#include <stdio.h>

int main(){
    int x;
    int i = 1;
    scanf("%d", &x);
    
    while(x > i){
        x -= i;
        i++;
    }

    if(i % 2 == 0)
        printf("%d/%d", x, i - x + 1);
    else
        printf("%d/%d", i - x + 1, x);
}