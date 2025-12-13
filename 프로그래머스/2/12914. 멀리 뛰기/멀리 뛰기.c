#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    long long answer = 1, f1 = 1, f2 = 2;
    
    if(n <= 2)
        answer = n;
    
    for(int i = 3; i <= n; i++){
        answer = (f1 + f2) % 1234567;
        f1 = f2;
        f2 = answer;
    }
    return answer;
}