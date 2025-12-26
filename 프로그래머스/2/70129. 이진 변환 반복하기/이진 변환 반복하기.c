#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* calc(int x){
    char r[32];
    int idx = 0;

    while(x > 0){
        r[idx++] = (char)('0' + (x % 2));
        x /= 2;
    }
    char* res = (char*)malloc(idx + 1);
    for(int i = 0; i < idx; i++) res[i] = r[idx - i - 1];
    res[idx] = '\0';

    return res;
}

int* solution(const char* s) {
    int len, cnt;
    char* wtf = (char*)malloc(strlen(s) + 1);
    strcpy(wtf, s);

    int* result = (int*)malloc(sizeof(int) * 2);
    result[0] = 0;
    result[1] = 0;

    while(strcmp(wtf, "1") != 0){
        len = strlen(wtf);
        cnt = 0;

        for(int i = 0; i < len; i++){ // 1 갯수 세기
            if(wtf[i] == '1') cnt++;
        }

        result[0]++;
        result[1] += (len - cnt);
        wtf = calc(cnt);
    }
    
    return result;
}