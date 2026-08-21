#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int l = s.length();
    for(int i = 0; i < l; i++){
        if(l != 4 && l != 6) answer = false;
        if(s[i] < '0' || s[i] > '9') answer = false;  
    }
    
    return answer;
}