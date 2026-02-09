#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int a = 0, b = 1, c, answer = 0;
    
    for(int i = 1; i < n; i++){
        answer = (a + b)%1234567;
        c = answer;
        a = b;
        b = c;
    }
    
    return answer;
}