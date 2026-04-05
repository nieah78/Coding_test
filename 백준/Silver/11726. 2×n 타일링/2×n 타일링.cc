#include <iostream>
using namespace std;

static int n;
static long f[1002];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    f[1] = 1;
    f[2] = 2;

    for(int i = 3; i <= n; i++){
        f[i] = (f[i-1] + f[i-2]) % 10007;
    }

    cout << f[n];
    return 0;
}