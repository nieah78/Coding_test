#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static int N, temp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    vector<int> v;

    for(int i = 0; i < N; i++){
        cin >> temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++){
        cout << v[i] << "\n";
    }
    return 0;
}