#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> adj[501];
    vector<int> indegree(N + 1, 0);
    vector<int> build_time(N + 1, 0);
    vector<int> result(N + 1, 0);

    for(int i = 1; i <= N; i++) {
        cin >> build_time[i];
        while (true) {
            int prev;
            cin >> prev;

            if(prev == -1)
                break;

            adj[prev].push_back(i);
            indegree[i]++;
        }
    }

    queue<int> q;

    for (int i = 1; i <= N; i++) {
        if(indegree[i] == 0){
            q.push(i);
            result[i] = build_time[i];
        }
    }

    while(!q.empty()) {
        int now = q.front();
        q.pop();

        for(int next : adj[now]) {
            result[next] = max(result[next], result[now] + build_time[next]);
            indegree[next]--;
            if (indegree[next] == 0) {
                q.push(next);
            }
        }
    }

    for(int i = 1; i <= N; i++)
        cout << result[i] << "\n";
    
    return 0;
}