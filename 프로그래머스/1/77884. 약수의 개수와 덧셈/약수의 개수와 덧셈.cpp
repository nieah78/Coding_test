#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++){
        double num = sqrt(i);
        answer += floor(num) == num ? -i : i;
    }
    return answer;
}