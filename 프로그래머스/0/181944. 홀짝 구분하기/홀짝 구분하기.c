#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    
    b = a % 2;
    if(b == 0) printf("%d is even", a);
    else if(b == 1) printf("%d is odd", a);

    return 0;
}