#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string res;
    int a, b, c;
    
    while(true){
        cin >> a >> b >> c;
        if(a + b + c == 0) break;

        if(max({a, b, c}) * 2 < a+b+c){
            if(a==b || b==c || a==c){
                res = (a==b && b==c) ? "Equilateral" : "Isosceles";
            }
            else res = "Scalene";
        }
        else res = "Invalid";

        cout << res << "\n";
    }

    return 0;
}