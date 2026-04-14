#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int index, cnt = 0, res = 0, temp = 1;
    vector<bool> v;
    
    while(n > 0){
        if(n % 2) v.push_back(true);
        else v.push_back(false);
        n /= 2;
    }
    v.push_back(false);
    
    for(int i = 0; i < int(v.size())-1; i++){
        if(v[i] && !v[i+1]){
            v[i] = false;
            v[i+1] = true;
            index = i;
            break;
        }
        if(v[i]) cnt++;
    }
    
    for(int i = 0; i < index; i++){
        if(i < cnt) v[i] = true;
        else v[i] = false;
    }
    
    for(int i = 0; i < int(v.size()); i++){
        if(v[i]) res += temp;
        temp *= 2;
    }
    
    return res;
}