#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> num(N);
    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> num[i];
        v[i] = num[i];
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < N; i++){
        auto it = lower_bound(v.begin(), v.end(), num[i]);
        cout << (it - v.begin()) << " ";
    }
    return 0;
}