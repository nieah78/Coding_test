#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    int min, max, num;
    stringstream ss(s);
    
    ss >> num;
    min = max = num;
    
    while(ss >> num) { 
        if(min > num) min = num;
        if(max < num) max = num;
    }
    
    return to_string(min) + " " + to_string(max);
}