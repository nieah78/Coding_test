#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int num = 0, answer = 0;
    int sklen = strlen(skill);
    
    char* test = (char*) malloc(sklen + 1);
    
    for(int i = 0; i < skill_trees_len; i++){
        for(int j = 0; skill_trees[i][j]; j++){
            if(strchr(skill, skill_trees[i][j])){
                test[num] = skill_trees[i][j];
                num++;
            } 
        }
        test[num] = '\0';
        if(strncmp(skill, test, strlen(test)) == 0) answer++;
        num = 0;
    }
    free(test);
    return answer;
}