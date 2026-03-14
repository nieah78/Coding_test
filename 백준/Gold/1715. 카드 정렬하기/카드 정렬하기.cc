#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0; i < N; i++){
        cin >> temp;
        pq.push(temp);
    }

    int a, b, sum;
    a = b = sum = 0;

    while(pq.size() != 1){
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        sum += a + b;
        pq.push(a+b);
    }

    cout << sum;
    return 0;
}