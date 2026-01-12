#include <iostream>
using namespace std;

int main(){
    int N, i = 2;
    cin >> N;

    while(N > 1){
        if(N % i == 0){
            N /= i;
            cout << i << "\n";
        }
        else i++;
    }
    
    return 0;
}