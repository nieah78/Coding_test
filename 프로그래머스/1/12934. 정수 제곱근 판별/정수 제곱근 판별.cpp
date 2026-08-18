#include <string>
#include <cmath>

using namespace std;

long long cal(long long left, long long right, long long n){
    if(left > right) return -1;
    
    long long mid = left + (right - left) / 2;
    
    long long square = mid * mid;
    if (square == n) return (mid + 1) * (mid + 1);
    else if (square > n) return cal(left, mid - 1, n);
    else return cal(mid + 1, right, n); 
}

long long solution(long long n) {
    return cal(1, 10000000, n);
}