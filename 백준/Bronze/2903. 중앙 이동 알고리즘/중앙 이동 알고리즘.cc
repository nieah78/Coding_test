#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, result;
    cin >> N;
    result = pow((pow(2, N)+1),2);
    cout << result;
}