#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int get_idx(int n, int M) {
    return n > 0 ? n : M - n;
}

int get_not(int n, int M) {
    return n > M ? n - M : M + n;
}

vector<vector<int>> adj;
vector<int> dfn, low, scc;
vector<bool> in_stack;
stack<int> st;
int timer, scc_cnt;

void find_scc(int curr) {
    dfn[curr] = low[curr] = ++timer;
    st.push(curr);
    in_stack[curr] = true;

    for (int next : adj[curr]) {
        if (!dfn[next]) {
            find_scc(next);
            low[curr] = min(low[curr], low[next]);
        } else if (in_stack[next]) {
            low[curr] = min(low[curr], dfn[next]);
        }
    }

    if (low[curr] == dfn[curr]) {
        scc_cnt++;
        while (true) {
            int t = st.top();
            st.pop();
            in_stack[t] = false;
            scc[t] = scc_cnt;
            if (t == curr) break;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N, M;
    while (cin >> N >> M && (N || M)) {
        adj.assign(2 * M + 1, vector<int>());
        dfn.assign(2 * M + 1, 0);
        low.assign(2 * M + 1, 0);
        scc.assign(2 * M + 1, 0);
        in_stack.assign(2 * M + 1, false);
        timer = scc_cnt = 0;

        for (int i = 0; i < N; i++) {
            int u, v;
            cin >> u >> v;
            int u_idx = get_idx(u, M);
            int v_idx = get_idx(v, M);
            int not_u = get_not(u_idx, M);
            int not_v = get_not(v_idx, M);

            adj[u_idx].push_back(not_v);
            adj[v_idx].push_back(not_u);
        }

        for (int i = 1; i <= 2 * M; i++) {
            if (!dfn[i]) find_scc(i);
        }

        bool possible = true;
        for (int i = 1; i <= M; i++) {
            if (scc[i] == scc[i + M]) {
                possible = false;
                break;
            }
        }
        cout << (possible ? 1 : 0) << "\n";
    }
    return 0;
}