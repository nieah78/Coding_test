#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, sum, best = 0;
    int arr[101];
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum > best && sum <= M) best = sum;
            }
        }
    }

    cout << best;
    return 0;
}