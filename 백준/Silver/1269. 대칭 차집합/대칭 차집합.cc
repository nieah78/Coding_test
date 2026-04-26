#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, t, cnt = 0;
    cin >> A >> B;

    map<int, int> m;

    for(int i = 0; i < A; i++){
        cin >> t;
        m[t]++;
    }
    for(int i = 0; i < B; i++){
        cin >> t;
        m[t] += 2;
    }

    for(auto it : m) if(it.second != 3) cnt++;
    
    cout << cnt;
    return 0;
}