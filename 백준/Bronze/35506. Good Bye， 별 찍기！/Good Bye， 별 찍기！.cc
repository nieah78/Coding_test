#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int rows = 2 * N;
    int cols = 4 * N + 2;

    vector<string> v(rows, string(cols, ' '));

    for (int i = 0; i < N; i++) {
        v[i][2 * N - 1 - i] = '*';
        v[i][3 * N - i] = '*';
        v[i][3 * N + i + 2] = '*';
    }

    for (int i = 0; i < N; i++) {
        int r = N + i;
        v[r][N - 1 - i] = '*';
        v[r][2 * N + 1 + i] = '*';
        v[r][4 * N + 1 - i] = '*';
    }

    for (int i = 0; i < rows; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}