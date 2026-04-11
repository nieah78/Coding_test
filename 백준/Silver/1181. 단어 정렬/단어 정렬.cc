#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b){
    if(a.size() == b.size()){
        return a < b;
    }
    else{
        return a.size() < b.size();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    vector<string> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < int(v.size()); i++){
        cout << v[i] << "\n";
    }
    return 0;
}