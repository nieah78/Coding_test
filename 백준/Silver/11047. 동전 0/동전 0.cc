#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, idx = 0, cnt = 0;
    cin >> N >> K;

    int arr[N+1];
    for(int i = N-1; i >= 0; i--)
        cin >> arr[i];

    while(K > 0){
        if(arr[idx] <= K){
            K-= arr[idx];
            cnt++;
        }
        else idx++;
    }

    cout << cnt;
    return 0;
}