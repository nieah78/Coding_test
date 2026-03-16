#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, res = 0;
    cin >> N;
    vector<int> arr;

    for(int i = 0; i < N; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.rbegin(), arr.rend());

    for(int i = 0; i < N; i++)
        res += (i+1) * arr[i];
    
    cout << res;
    return 0;
}