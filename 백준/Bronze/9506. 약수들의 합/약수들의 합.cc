#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, sum;
    bool flag = true;

    while(flag){
        cin >> n;

        if(n == -1){
            flag = false;
            continue;
        }

        queue<int> s;
        sum = 1;

        for(int i = 2; i <= n/2; i++){
            if(n % i == 0){
                s.push(i);
                sum += i;
            }
        }

        if(sum == n){
            cout << n << " = 1";
            int size = s.size();
            for(int i = 0; i < size; i++){
                cout << " + " << s.front();
                s.pop();
            }
            cout << "\n";
        }
        else{
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}