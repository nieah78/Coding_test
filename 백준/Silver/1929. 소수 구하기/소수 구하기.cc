#include <iostream>
using namespace std;

bool check(int a){
    if(a < 2) return false;
    if(!(a % 2) && a != 2) return false;

    for(int j = 2; j*j <= a; j++){
        if(!(a % j)) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;

    for(int i = M; i <= N; i++){
        if(check(i)) cout << i << "\n";
    }
    
    return 0;
}