#include <string>
#include <vector>
#include <set>

using namespace std;

struct Word{
    string text;
    bool spoiled;
};

int solution(string message, vector<vector<int>> spoiler_ranges) {
    int n = message.size();
    vector<Word> words;
    
    vector<bool> covered(n+3, false);
    for(int i = 0; i < spoiler_ranges.size(); i++){
        for(int j = spoiler_ranges[i][0]; j <= spoiler_ranges[i][1]; j++){
            covered[j] = true;
        }
    }
    
    int i = 0;
    set<string> exposed;

    while (i < n) {
        if (message[i] == ' '){
            i++;
            continue;
        }

        int start = i;
        while (i < n && message[i] != ' ') i++;
        int end = i - 1;
        
        string s = message.substr(start, end - start + 1);
        
        bool spoiled = false;
        
        for(int k = start; k <= end; k++){
            if(covered[k]){
               spoiled = true;
               break;
            }
        }
        words.push_back({s, spoiled});  
        if(!spoiled) exposed.insert(s);
    }
    
    int answer = 0;
    
    set<string> counted;
    for(int i = 0; i < words.size(); i++){
        if(!words[i].spoiled) continue;
        if(exposed.count(words[i].text)) continue;
        if(counted.count(words[i].text)) continue;
        
        answer++;
        counted.insert(words[i].text);
    }
    
    return answer;
}