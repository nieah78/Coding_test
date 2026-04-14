#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s1, s2;
    map<string, bool, greater<string>> m;
    
    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        if(s2 == "enter") m[s1] = true;
        else if(s2 == "leave" && m[s1]) m.erase(s1);
    }

    for(const auto& pair : m){
        cout << pair.first << "\n";
    }
    
    return 0;
}