#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long min, max;
    cin >> min >> max;

    vector<bool> Check(max - min + 1);

    for(long i = 2; i * i <= max; i++){
        long pow = i * i;
        long start_index = min/pow;

        if(min % pow)
            start_index++;

        for(long j = start_index; pow * j <= max; j++)
            Check[(int)((j * pow) - min)] = true;
    
    }

    int count = 0;
    for(int i = 0; i <= max-min; i++)
        if(!Check[i]) count++;
        
    cout << count;

    return 0;
}