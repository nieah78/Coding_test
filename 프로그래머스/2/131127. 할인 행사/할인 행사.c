#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// want_len은 배열 want의 길이입니다.
// number_len은 배열 number의 길이입니다.
// discount_len은 배열 discount의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

int strcheck(char* want[], size_t len, char* discount, int paste[]){
    int index = -1;
    for(int i = 0; i < len; i++){
        if(strcmp(discount, want[i]) == 0){
            index = i;
        }
    }
    return index;
}

int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) {
    int answer = 0, check = 0, index;
    int paste[number_len];
    
    for(int i = 0; i < discount_len - 9; i++){
        for(int x = 0; x < number_len; x++) paste[x] = number[x]; //paste 초기화
        for(int j = i; j < i + 10; j++){
            index = strcheck(want, want_len, discount[j], paste);

            if(index == -1 || paste[index] <= 0)
                check = 0;
            else{
                paste[index]--;
                check++;
            }
        }
        if(check == 10){
            answer++;
        }
        check = 0;
    }
    
    return answer;
}