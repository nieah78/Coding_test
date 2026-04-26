#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, num;
    cin >> N;
    
    map<int, int> m;
    for(int i = 0; i < N; i++){
        cin >> num;
        m[num]++;
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> num;
        cout << (m.find(num) == m.end() ? 0 : m[num]) << " ";
    }
    
    return 0;
}