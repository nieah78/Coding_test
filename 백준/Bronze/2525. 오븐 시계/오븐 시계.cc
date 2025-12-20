#include <stdio.h>

int main(){
    int A, B, C, all;
    int h, m;
    scanf("%d %d\n%d", &A, &B, &C);
    all = A*60 + B + C;
    h = (all / 60) % 24;
    m = all % 60;
    printf("%d %d", h, m);
}