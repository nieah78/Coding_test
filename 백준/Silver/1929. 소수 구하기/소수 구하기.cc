#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;
    vector<bool> check(N+1, true);

    check[0] = check[1] = false;

    for(int i = 2; i*i <= N; ++i){
        if(check[i]){
            for(int j = i*i; j <= N; j += i){
                check[j] = false;
            }
        }
    }

    for(int i = M; i <= N; i++){
        if(check[i]) cout << i << "\n";
    }
    
    return 0;
}