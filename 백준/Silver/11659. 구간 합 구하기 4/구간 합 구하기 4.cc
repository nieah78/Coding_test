#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a = 0;
    cin >> N >> M;

    int sum[N+1];
    sum[0] = 0;

    for(int k = 1; k <= N; k++){
        cin >> a;
        sum[k] = sum[k-1] + a;
    }

    int i, j;
    for(int k = 0; k < M; k++){
        cin >> i >> j;
        cout << sum[j] - sum[i-1] << "\n";
    }

    return 0;
}