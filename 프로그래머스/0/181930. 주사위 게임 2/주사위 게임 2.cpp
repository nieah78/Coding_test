#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    int num = (a==b) + (b==c) + (c==a);
    
    switch(num){
        case 0:
            answer = a + b + c;
            break;
            
        case 1:
            answer = (a + b + c)*(a*a + b*b + c*c);
            break;
            
        default:
            answer = (a + b + c)*(a*a + b*b + c*c)*(a*a*a + b*b*b + c*c*c);
    }
    
    return answer;
}