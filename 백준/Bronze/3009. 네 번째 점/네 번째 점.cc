#include <iostream>
using namespace std;

int main(){
    int rx = 0, ry = 0, x, y;

    for(int i = 0; i < 3; i++){
        cin >> x >> y;
        rx ^= x;
        ry ^= y;
    }

    cout << rx << ' ' << ry;
    return 0;
}