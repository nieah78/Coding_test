#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> dist(N-1);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    for(int i = 1; i < N; i++){
        dist[i-1] = v[i] - v[i-1];
    }

    int g = dist[0];
    for(int i = 1; i < int(dist.size()); i++){
        g = gcd(g, dist[i]);
    }
    
    cout << (v.back() - v.front()) / g - N + 1;
    return 0;
}