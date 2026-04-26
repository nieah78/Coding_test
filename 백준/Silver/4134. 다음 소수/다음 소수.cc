#include <iostream>
using namespace std;

bool prime(long long a){
    if(a < 2) return false;
    if(a % 2 == 0) return a == 2;

    for(long long i = 2; i * i <= a; i++){
        if(!(a % i)) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, temp;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        while(!prime(temp)) temp++;
        cout << temp << "\n";
    }
    
    return 0;
}