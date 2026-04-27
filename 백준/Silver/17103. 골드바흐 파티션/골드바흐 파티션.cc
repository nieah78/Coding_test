#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
vector<bool> v;

void init(){
    v.assign(MAX + 1, true);
    v[0] = v[1] = false;

    for(int i = 2; i*i <= MAX; i++){
        if(v[i]){
            for(int j = i * i; j <= MAX; j += i){
                v[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    init();

    int T, N, cnt;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        cnt = 0;

        for(int j = 2; j <= N/2; j++){
            if(v[j] && v[N-j]) cnt++;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}