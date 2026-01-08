#include <iostream>
using namespace std;

int main(){
    int M, N;
    cin >> M;
    cin >> N;

    int min = 0, sum = 0;
    bool sign = false;
    
    for(int i = M; i < N + 1; i++){
        for(int j = 2; j < i/2 + 1; j++){
            if(i % j == 0){
                sign = true;
                break;
            }
        }
        
        if(!sign && (i != 1)){ // i가 소수일 때
            sum += i;
            if(min > i || min == 0) min = i;
        }

        sign = false;
    }

    if(min == 0) cout << -1;
    else cout << sum << "\n" << min;

    return 0;
}