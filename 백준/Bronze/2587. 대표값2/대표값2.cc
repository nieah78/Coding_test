#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static int temp, sum = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    for(int i = 0; i < 5; i++){
        cin >> temp;
        sum += temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());

    cout << sum/5 << "\n" << v[2];
    return 0;
}