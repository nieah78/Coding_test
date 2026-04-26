#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp, sum = 0;
    for(int i = 0; i < 8; i++){
        cin >> temp;
        sum = sum * 10 + temp;
    }

    if(sum == 12345678) cout << "ascending";
    else if(sum == 87654321) cout << "descending";
    else cout << "mixed";

    return 0;
}