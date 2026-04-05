#include <iostream>
using namespace std;

static int N;
static long mod = 1000000000;
static long f[101][11];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    f[1][0] = 0;
    for(int i = 1; i <= 9; i++)
        f[1][i] = 1;

    for(int i = 2; i <= N; i++){
        f[i][0] = f[i-1][1];
        f[i][9] = f[i-1][8];

        for(int j = 1; j < 9; j++)
            f[i][j] = (f[i-1][j-1] + f[i-1][j+1]) % mod;
    }

    long res = 0;
    for(int i = 0; i <= 9; i++)
        res = (res + f[N][i]) % mod;
    
    cout << res;
    return 0;
}