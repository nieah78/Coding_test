#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int res;
    int T, N, M, k;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N >> M;
        if(2*N < M) N = M - N;
        res = k = 1;

        for(int j = M; j > N; j--){
            res *= j;
            res /= k++;
        }
        cout << res << "\n";
    }
    
    return 0;
}