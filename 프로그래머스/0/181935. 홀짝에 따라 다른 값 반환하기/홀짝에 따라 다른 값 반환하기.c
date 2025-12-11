#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    if(n % 2){  // 홀수
        for(int i = 1; i <= n; i+=2){
            answer += i;
        }
    }
    else{       // 짝수
        for(int j = 2; j <= n; j+=2){
            answer += pow(j, 2);
        }   
    }
    return answer;
}