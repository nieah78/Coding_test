#include <iostream>
using namespace std;

int main(){
    int N, a, b, mina, maxa, minb, maxb;
    cin >> N;
    cin >> a >> b;
    mina = maxa = a;
    minb = maxb = b;
    
    for(int i = 1; i < N; i++){
        cin >> a >> b;
        if(a < mina) mina = a;
        if(a > maxa) maxa = a;
        if(b < minb) minb = b;
        if(b > maxb) maxb = b;
    }

    cout << (maxa-mina) * (maxb-minb);

    return 0;
}