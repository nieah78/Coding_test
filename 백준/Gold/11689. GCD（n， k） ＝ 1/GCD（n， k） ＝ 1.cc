#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long n;
    cin >> n;
    long result = n;

    for(long p = 2; p <= sqrt(n); p++){
        if(n % p == 0){ // p가 소인수일 때
            result = result - result / p; // 개수 업데이트
            
            // 해당 소인수 내역 전체 지우기
            while(n % p == 0){
                n /= p;
            }
        }
    }
    
    if(n > 1){ // 아직 소인수 구성이 남아있는 경우
        // 반복문에서 제곱근까지만 탐색했기 때문에 누락 가능
        result = result - result / n;
    }

    cout << result;
    return 0;
}