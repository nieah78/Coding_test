#include <iostream>
#include <cmath>
using namespace std;

static int A[15];
static int N;
static int cnt = 0;
void backtracking(int row);
bool check(int row);

int main(){
    cin >> N;
    backtracking(0);
    cout << cnt << "\n";
}

void backtracking(int row){
    if(row == N){
        cnt++;
        return;
    }

    for(int i = 0; i < N; ++i){
        A[row] = i;
        if(check(row)) backtracking(row + 1); // 배치한 퀸이 이전 퀸들과 공격 가능한지
    }
}

bool check(int row){
    for(int i = 0; i < row; ++i){
        if(A[i] == A[row]) return false; // 일직선 배치
        if(abs(row - i) == abs(A[i] - A[row])) return false; // 대각선 배치
    }
    return true;
}