#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, cnt = 0;
    cin >> N >> M;

    string s, names;
    map<string, int> dict;
    for(int i = 0; i < N+M; i++){
        cin >> s;
        dict[s]++;
    }

    for(auto it : dict){
        if(it.second == 2){
            cnt++;
            names += it.first + "\n";
        }
    }
    
    cout << cnt << "\n" << names;
    return 0;
}