#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;

    cout << (s+t == t+s);
    return 0;
}