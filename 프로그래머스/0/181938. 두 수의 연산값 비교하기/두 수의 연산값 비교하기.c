#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int p_cal(int x){
    int p = 1;
    while(x > 0){
        p *= 10;
        x /= 10;
    }
    return p;
}

int solution(int a, int b) {
    int p1 = p_cal(b);

    int num1 = a * p1 + b;
    int num2 = 2 * a * b;

    //printf("num1: %d, num2: %d\n", num1, num2);

    return num1 >= num2 ? num1 : num2;
}
