#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    int res = A * B * C;
    int arr[10] = {};

    while(res){
        arr[res % 10]++;
        res /= 10;
    }

    for(int i = 0; i <= 9; i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}