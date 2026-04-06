#include <iostream>
using namespace std;
static int N;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    int sum, cnt = 0, result = 0, temp = N;
    while(temp > 0){
        cnt++;
        temp /= 10;
    }
    
    for(int i = N-cnt*9; i < N; i++){
        temp = sum = i;
        for(int j = 0; j < cnt; j++){
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == N){
            result = i;
            break;
        }
    }

    cout << result;
    return 0;
}