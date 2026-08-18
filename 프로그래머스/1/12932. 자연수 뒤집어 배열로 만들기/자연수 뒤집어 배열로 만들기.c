#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* answer = (int*)malloc(sizeof(int) * 11);
    for(int i = 0; i < 11; i++){
        if (!n) break;
        
        answer[i] = n % 10;
        n /= 10;
    }
    return answer;
}