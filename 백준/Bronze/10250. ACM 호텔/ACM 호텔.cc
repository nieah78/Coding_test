#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, H, W, N;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> H >> W >> N;
        if(N%H){
            cout << (N % H)*100 + (N / H + 1) << "\n";
        }
        else{
            cout << H*100 + N/H << "\n";
        }
    }

    return 0;
}