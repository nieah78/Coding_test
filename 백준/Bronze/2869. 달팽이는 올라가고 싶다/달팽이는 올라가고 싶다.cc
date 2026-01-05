#include <iostream>
using namespace std;

int main(){
    int A, B, V;
    cin >> A >> B >> V;
    // while(V > 0){
    //     V -= A;
    //     count++;
    //     if(V <= 0) continue;
    //     V += B;
    // }
    // cout << count;
    int result = (V - B)/(A - B);
    if((V - B)%(A - B)) result++;
    cout << result;
    return 0;
}