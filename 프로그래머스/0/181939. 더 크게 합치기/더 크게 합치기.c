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
    int answer = 0;
    
    int p1 = p_cal(a);
    int p2 = p_cal(b);
    
    int num1 = p2 * a + b;    //a + b
    int num2 = p1 * b + a;    //b + a
    //printf("num1: %d, num2: %d", num1, num2);
    answer = num1 >= num2? num1 : num2;
    return answer;
}