#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> &v1, vector<int> &v2){
    if(v1[0] == v2[0]){
        return v1[1] < v2[1];
    }
    else{
        return v1[0] < v2[0];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> v(N, vector<int>(2));

    for(int i = 0; i < N; i++){
        cin >> v[i][0] >> v[i][1];
    }

    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < N; i++){
        cout << v[i][0] << " " << v[i][1] << "\n";
    }
    return 0;
}