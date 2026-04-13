#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, cnt = 0;
    string s;

    cin >> N >> M;
    map<string, bool> m;
    for(int i = 0; i < N; i++){
        cin >> s;
        m[s] = true;
    }

    for(int i = 0; i < M; i++){
        cin >> s;
        if(m[s]) cnt++;
    }
    cout << cnt;
    return 0;
}