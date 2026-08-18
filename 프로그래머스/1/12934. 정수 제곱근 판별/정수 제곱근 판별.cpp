#include <string>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long temp = sqrt(n);
    if (temp * temp == n)
        answer = (temp+1) * (temp+1);
    
    return answer;
}