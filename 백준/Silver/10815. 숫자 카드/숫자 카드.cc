#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, temp;
    cin >> N;
    map<int, int> mapN;

    for(int i = 0; i < N; i++){
        cin >> temp;
        mapN[temp] = 1;
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> temp;
        cout << (mapN.find(temp) != mapN.end()) << " ";
    }
    
    return 0;
}