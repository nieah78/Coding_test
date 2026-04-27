#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int D = a*e - b*d;
    int x = (c*e - b*f) / D;
    int y = (a*f - c*d) / D;

    cout << x << " " << y;
    return 0;
}