#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int answer;
int visited[8]; //방문 여부

void dfs(int curK, int cnt, int** dungeons, int dungeons_rows){
    if(cnt > answer) answer = cnt;
    
    for(int i = 0; i < dungeons_rows; i++){
        if(visited[i]) continue;
        
        int req = dungeons[i][0];
        int cost = dungeons[i][1];
        
        if(curK >= req){
            visited[i] = 1;
            dfs(curK - cost, cnt + 1, dungeons, dungeons_rows);
            visited[i] = 0;
        }        
    }
}


// dungeons_rows는 2차원 배열 dungeons의 행 길이, dungeons_cols는 2차원 배열 dungeons의 열 길이입니다.
int solution(int k, int** dungeons, size_t dungeons_rows, size_t dungeons_cols) {
    answer = 0;
    
    for(int i = 0; i < dungeons_rows; i++)
        visited[i] = 0;
    
    dfs(k, 0, dungeons, dungeons_rows);
    return answer;
}