#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end(), compare);
    
    cout << s;
    return 0;
}