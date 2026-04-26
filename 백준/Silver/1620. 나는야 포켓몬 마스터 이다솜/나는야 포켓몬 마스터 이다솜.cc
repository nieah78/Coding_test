// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, M;
//     cin >> N >> M;

//     map<string, string> v;

//     string name, num_str;
//     for(int i = 1; i <= N; i++){
//         cin >> name;
//         num_str = to_string(i);
//         v[name] = num_str;
//         v[num_str] = name;
//     }

//     for(int i = 0; i < M; i++){
//         cin >> name;
//         cout << v[name] << "\n";
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<string> num_dict(N+1);
    vector<pair<string, int>> str_dict(N);

    string temp;
    for(int i = 1; i <= N; i++){
        cin >>temp;
        num_dict[i] = temp;
        str_dict[i -1] = {temp, i};
    }

    sort(str_dict.begin(), str_dict.end());

    for(int i = 0; i < M; i++){
        cin >> temp;

        if(isdigit(temp[0])){
            cout << num_dict[stoi(temp)] << "\n";
        }
        else{
            auto it = lower_bound(str_dict.begin(), str_dict.end(), make_pair(temp, 0));
            if(it != str_dict.end() && it->first == temp){
                cout << it->second << "\n";
            }
        }
    }
    
    return 0;
}