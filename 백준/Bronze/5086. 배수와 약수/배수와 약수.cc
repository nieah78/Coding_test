#include <iostream>
using namespace std;

int main(){
    int a, b;
    bool flag = true;

    while(flag){
        cin >> a >> b;
        
        if(a + b == 0){
            flag = false;
            continue;
        }

        if(b % a == 0){ //a가 b의 약수
            cout << "factor\n";
        }
        else if(a % b == 0){ //a가 b의 배수
            cout << "multiple\n";
        }
        else cout << "neither\n";
    }
    
    return 0;
}