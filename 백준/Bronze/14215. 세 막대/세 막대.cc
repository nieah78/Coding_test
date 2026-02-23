#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int res;
    vector<int> v(3);
    for(int &i : v) cin >> i;

    sort(v.begin(), v.end());

    if(v[2] < v[0] + v[1]) res = v[0] + v[1] + v[2];
    else res = 2*(v[0] + v[1]) - 1;

    cout << res;
    return 0;
}