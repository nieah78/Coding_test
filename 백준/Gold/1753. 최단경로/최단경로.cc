#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V, E, K;
    cin >> V >> E >> K;

    vector<pair<int, int>> adj[20001];
    vector<int> dist(V + 1, INF);

    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[K] = 0;
    pq.push({0, K});

    while(!pq.empty()) {
        int d = pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        if(dist[curr] < d)
            continue;

        for(auto& edge : adj[curr]) {
            int next_node = edge.first;
            int next_dist = d + edge.second;

            if(next_dist < dist[next_node]) {
                dist[next_node] = next_dist;
                pq.push({next_dist, next_node});
            }
        }
    }

    for(int i = 1; i <= V; i++) {
        if(dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }

    return 0;
}