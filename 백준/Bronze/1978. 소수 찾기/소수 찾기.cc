#include <iostream>
using namespace std;

int main(){
    bool check;
    int N, x, cnt = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x;
        check = true;

        for(int j = 2; j <= x/2; j++){
            if(x % j == 0){
                check = false;
                break;
            }
        }
        if(check && x != 1) cnt++;
    }

    cout << cnt;
    return 0;
}