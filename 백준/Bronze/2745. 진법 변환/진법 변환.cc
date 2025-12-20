#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int B;
    int result = 0;
    string N;
    cin >> N >> B;

    for(int i = 0; i<N.length(); i++){
        int p = N[N.length() - i - 1];
        if(p >= 'A' && p <= 'Z'){
            result += (int)pow(B, i)*(p-'A'+10);
        }
        
        else{
            result += (int)pow(B, i)*(p-'0');
        }
    }

    cout << result;
}