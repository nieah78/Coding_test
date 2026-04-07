#include <iostream>
using namespace std;
static int N;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    int best = N;
    
    for(int i = 0; i <= N/3; i++){
        for(int j = 0; j <= N/5; j++){
            if((i)*3 + (j)*5 == N && i+j < best){
                best = i + j;
            } 
        }
    }

    if(best == N) best = -1;
    cout << best;
    return 0;
}