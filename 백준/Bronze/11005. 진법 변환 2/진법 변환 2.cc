#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, B, flag =0;
    string result;
    cin >> N >> B;

    while(N > 0){
        int num = N % B;
        if(num >= 10) result += num - 10 + 'A';
        else{
            result += num + '0';
        }
        N /= B;
    }
    reverse(result.begin(), result.end());
    cout << result;

}