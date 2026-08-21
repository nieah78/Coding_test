#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string answer = "";
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        answer += string(n, '*') + '\n';
    }
    
    cout << answer;
    return 0;
}