#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int N;
    cin >> N;

    long long max_a = 0, max_b = 0, max_c = 0;
    bool possible = true;

    for (int i = 1; i <= N; ++i) {
        long long a, b, c, p;
        cin >> a >> b >> c >> p;

        if (!possible) continue;

        max_a = max(max_a, a);
        max_b = max(max_b, b);
        max_c = max(max_c, c);

        if (max_a + max_b + max_c + i > p) {
            possible = false;
        }
    }

    if (possible) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}