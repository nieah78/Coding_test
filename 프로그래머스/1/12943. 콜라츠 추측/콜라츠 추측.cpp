#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int i = 0;
    long long temp = num;
    
    for(; i < 500; i++){
        if(temp == 1) break;
        else if(temp % 2) temp = temp * 3 + 1;
        else temp /= 2;
    }
    
    return temp == 1 ? i : -1;
}