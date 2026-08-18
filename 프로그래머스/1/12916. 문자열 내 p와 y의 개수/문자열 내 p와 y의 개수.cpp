#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int len = s.length();
    int temp = 0;
    
    for(int i = 0; i < len; i++){
        if(s[i] == 'p' || s[i] == 'P') temp++;
        else if(s[i] == 'y' || s[i] == 'Y') temp--;
    }
    
    return !temp;
}