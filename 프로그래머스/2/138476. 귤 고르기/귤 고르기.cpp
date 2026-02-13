#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int idx = 0, answer = 0;
    
    map<int, int> m; // 크기, 갯수
    
    // map에 귤의 갯수 저장
    for(int size : tangerine) m[size]++;

    vector<int> counts;
    for(auto const& [size, count] : m) { // 크기를 size, 갯수를 count라 명명
        counts.push_back(count); // 크기만 빼내기
    }

    sort(counts.begin(), counts.end(), greater<int>()); // 내림차순
    
    while(k > 0){
        k -= counts[idx++];
        answer++;
    }
    
    return answer;
}