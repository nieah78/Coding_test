#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double res = 0.0;
    int M, K, N = 0;
    cin >> M;
    
    vector<int> v(M);
    for(int i = 0; i < M; i++) {
        cin >> v[i];
        N += v[i];
    }
    cin >> K;


    for (int i = 0; i < M; i++) {
        if(v[i] < K) continue;

        double C = 1.0;
        for(int j = 0; j < K; j++)
            C *= (double)(v[i] - j) / (N - j);
        res += C;
    }

    cout.precision(16);
    cout << res << endl;

    return 0;
}