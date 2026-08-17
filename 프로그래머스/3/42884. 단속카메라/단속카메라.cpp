#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> &v1, vector<int> &v2){
  if(v1[1] == v2[1])
    return v1[0] < v2[0];
  else return v1[1] < v2[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    int len = routes.size();
    int camera = -40000;
    
    sort(routes.begin(), routes.end(), cmp);
    
    for (int i = 0; i < len; i++){
        if(routes[i][0] <= camera){
            continue;
        }
        camera = routes[i][1];
        answer++;
    }
    
    return answer;
}