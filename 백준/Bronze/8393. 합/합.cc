#include <iostream>
using namespace std;

int main(){
    int n;
    int result = 1;
    cin>>n;
    for(int i=0; i<n-1; i++){
        result += n-i;
    }
    cout << result;
}