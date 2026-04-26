#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> dict;
    string S;
    cin >> S;
    int len = S.length();

    for(int i = 0; i < len; i++){
        for(int j = i; j < len; j++){
            dict.insert(S.substr(i, j-i+1));
        }
    }
    
    cout << dict.size();
    return 0;
}