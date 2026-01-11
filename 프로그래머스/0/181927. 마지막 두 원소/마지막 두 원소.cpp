#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int idx = num_list.size();
    
    if(num_list[idx-1] > num_list[idx-2])
        answer.push_back(num_list[idx-1] - num_list[idx-2]);
    else answer.push_back(num_list[idx-1] * 2);
    
    return answer;
}