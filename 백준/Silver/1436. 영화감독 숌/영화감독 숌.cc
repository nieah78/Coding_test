#include <iostream>
using namespace std;
static int N;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    int num = 665, cnt = 0;

    while(cnt != N){
        if(to_string(++num).find("666") != string::npos)
            cnt++;        
    }
    
    cout << num;
    return 0;
}