#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> adj(N + 1);
    vector<int> parent(N + 1, 0);

    for(int i = 0; i < N - 1; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    q.push(1);
    parent[1] = -1; 

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(int next : adj[now]){
            if (parent[next] == 0) {
                parent[next] = now;
                q.push(next);
            }
        }
    }

    for(int i = 2; i <= N; i++){
        cout << parent[i] << "\n";
    }

    return 0;
}