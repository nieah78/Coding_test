#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool check[202];
    
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            check[numbers[i] + numbers[j]] = true;
        }
    }
    
    for(int i = 0; i < 201; i++)
        if(check[i]) answer.push_back(i);
    return answer;
}