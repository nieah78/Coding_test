#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int x = 0, y = 0, temp;
    
    for(int i = 0; i < sizes.size(); i++){
        if(sizes[i][0] < sizes[i][1]){
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        
        if(x < sizes[i][0]) x = sizes[i][0];
        if(y < sizes[i][1]) y = sizes[i][1];
    }
    return x * y;
}