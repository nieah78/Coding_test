#include <string>
#include <vector>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0, plus = 0;
    vector<int> server(24);
    
    for(int i = 0; i < 24; i++){
        plus = (players[i] - server[i] * m) / m;
        if(plus > 0){
            for(int j = 0; j < k; j++){
                if(i+j >= 24) break;
                server[i+j] += plus;
            }
            answer += plus;
        }
    }
    
    return answer;
}