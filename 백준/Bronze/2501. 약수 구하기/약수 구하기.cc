#include <iostream>
using namespace std;

int main(){
    int n, k, save;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            k--;
            save = i;
        }

        if(k == 0) break;
    }

    if(k == 0) cout << save;
    else cout << 0;

    return 0;
}