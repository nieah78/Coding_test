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

    long long int A, B;
    cin >> A >> B;
    int num = gcd(A, B);
    
    cout << A*B/num;
    //cout << (A / num) * (B / num);
    return 0;
}