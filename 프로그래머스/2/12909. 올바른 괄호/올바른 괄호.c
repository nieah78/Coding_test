#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int num = 0;
    bool answer = true;
    for(int i = 0; s[i]; i++){
        if(s[i] == '(') num++;
        else if(s[i] == ')') num--;
        
        if(num < 0)
            break;
    }
    if(num != 0) answer = false;
    return answer;
}