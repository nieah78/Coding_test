#include <iostream>
using namespace std;

int main(){
    int x, y, w, h, m1, m2;
    cin >> x >> y >> w >> h;

    m1 = x*2 > w ? w-x : x;
    m2 = y*2 > h ? h-y : y;

    cout << (m1>m2? m2 : m1);

    return 0;
}