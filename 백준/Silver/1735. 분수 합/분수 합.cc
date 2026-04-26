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

    int A1, B1, A2, B2;
    cin >> A1 >> B1;
    cin >> A2 >> B2;

    int bunja = A1 * B2 + A2 * B1;
    int bunmo = B1 * B2;

    int num = gcd(bunja, bunmo);

    cout << bunja / num << " " << bunmo / num;
    return 0;
}