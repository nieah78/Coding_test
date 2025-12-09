#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {

    int my_len = strlen(my_string);
    int over_len = strlen(overwrite_string);
    
    char* answer = (char*)malloc(my_len + 1);
    
    int i;
    for(i = 0; i < my_len; i++){
        if(i < s || i >= s + over_len){
            answer[i] = my_string[i];
        }
        else{
            answer[i] = overwrite_string[i-s];
        }
    }
    answer[i] = '\0';
    
    return answer;
}