#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, A, B;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> B;
        cout << A * B / gcd(A, B) << "\n";
    }
    
    return 0;
}