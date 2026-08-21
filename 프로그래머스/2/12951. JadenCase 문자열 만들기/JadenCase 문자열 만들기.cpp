#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    
    bool flag = true;
    for(int i = 0; i < s.length(); i++){
        if(flag){
            if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            flag = false;
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
        
        if(s[i] == ' ') flag = true;
    }
    
    return s;
}