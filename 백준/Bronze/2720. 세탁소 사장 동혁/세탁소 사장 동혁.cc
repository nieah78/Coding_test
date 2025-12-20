#include <iostream>
using namespace std;

int main(){
    int Q, D, N, P, T, money;
    cin >> T;
    for(int i = 0; i<T; i++){
        cin >> money;
        Q = money/25;
        money %= 25;
        D = money/10;
        money %= 10;
        N = money/5;
        money %= 5;
        P = money;

        cout << Q << " " << D << " " << N << " " << P << endl;
    }
}