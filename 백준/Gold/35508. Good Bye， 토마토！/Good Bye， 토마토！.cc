#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Dish{
    long long T, A, B;
};

bool cmp(const Dish& x, const Dish& y){
    return x.T < y.T;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    long long D, max_score = 0;
    cin >> N >> D;

    vector<Dish> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i].T >> v[i].A >> v[i].B;
        // 요리 1개 제출
        if(v[i].T <= D){
            max_score = max(max_score, v[i].A + v[i].B);
        }
    }

    sort(v.begin(), v.end(), cmp);

    vector<int> p1(N), p2(N);
    int first = -1, second = -1;
    
    for(int i = 0; i < N; i++){
        if(first == -1 || v[i].A > v[first].A){
            second = first;
            first = i;
        }
        else if(second == -1 || v[i].A > v[second].A){
            second = i;
        }
        p1[i] = first;
        p2[i] = second;
    }

    // 요리 2개 제출
    for(int i = 0; i < N; i++){
        long long remain_time = D - v[i].T;
        if(remain_time <= 0) continue;

        auto it = upper_bound(v.begin(), v.end(), remain_time,
            [](long long val, const Dish& d){
                return val < d.T;
            });

        int k = distance(v.begin(), it) - 1;
        if(k < 0) continue;

        if(p1[k] == i && p2[k] != -1){
            max_score = max(max_score, v[p2[k]].A + v[i].B);
        }
        else{
            max_score = max(max_score, v[p1[k]].A + v[i].B);
        }
    }

    cout << max_score << endl;
    return 0;
}