#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int temp = 0, n;
    
    for(int i = 0; i < numLog.size(); i++){
        n = numLog[i] - temp;
        
        if(n == 1) answer.push_back('w');
        else if(n == -1) answer.push_back('s');
        else if(n == 10) answer.push_back('d');
        else if(n == -10) answer.push_back('a');
        
        temp = numLog[i];
    }
    
    return answer;
}
