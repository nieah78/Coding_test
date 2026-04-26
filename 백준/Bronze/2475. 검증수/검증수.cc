#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        res += n*n%10;
    }

    cout << res % 10;
    return 0;
}