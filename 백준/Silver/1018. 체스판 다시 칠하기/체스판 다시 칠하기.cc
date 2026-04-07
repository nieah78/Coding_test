#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int answer = 64;
    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {

            int cntW = 0;
            int cntB = 0;

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char current = board[x+i][y+j];

                    if((x + y) % 2) {
                        if (current != 'B') cntW++;
                        if (current != 'W') cntB++;
                    }
                    else{
                        if (current != 'W') cntW++;
                        if (current != 'B') cntB++;
                    }
                }
            }

            answer = min(answer, min(cntW, cntB));
        }
    }
    cout << answer;
    return 0;
}