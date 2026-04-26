#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, score = 0, res = 0;
    string s;

    cin >> n;
    for(int i = 0; i < n; i++){
        res = score = 0;
        cin >> s;

        for(int j = 0; j < int(s.length()); j++){
            if(s[j] == 'O'){
                res += 1 + score++;
            }
            else{
                score = 0;
            }
        }
        cout << res << "\n";
    }
    
    return 0;
}