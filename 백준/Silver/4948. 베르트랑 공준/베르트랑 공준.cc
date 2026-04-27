#include <iostream>
using namespace std;

bool check(int a){
    if(a == 1) return false;
    if(a == 2 || a == 3) return true;
    
    for(int j = 2; j*j <= a; j++){
        if(!(a % j)) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt;

    while(true){
        cin >> n;
        if(!n) break;

        cnt = 0;

        for(int i = n+1; i <= 2*n; i++){
            if(check(i)) cnt++;
        }
        
        cout << cnt << "\n";
    }
    
    return 0;
}