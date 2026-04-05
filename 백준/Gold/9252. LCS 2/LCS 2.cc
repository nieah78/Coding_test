#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

static int D[1001][1001];
static string A, B;
static vector<char> Path;
void getText(int r, int c);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A;
    cin >> B;

    for(int i = 1; i <= A.size(); i++){
        for(int j = 1; j <= B.size(); j++){
            if(A[i-1] == B[j-1]){
                D[i][j] = D[i-1][j-1] + 1;
            }
            else{
                D[i][j] = max(D[i-1][j], D[i][j-1]);
            }
        }
    }

    cout << D[A.size()][B.size()] << "\n";
    getText(A.size(), B.size());

    for(int i = Path.size() - 1; i >= 0; i--){
        cout << Path[i];
    }
}

void getText(int r, int c){
    if(r == 0 || c == 0){
        return;
    }
    if(A[r - 1] == B[c - 1]){
        Path.push_back(A[r-1]);
        getText(r-1, c-1);
    }
    else{
        if(D[r-1][c] > D[r][c-1]){
            getText(r-1, c);
        }
        else{
            getText(r, c-1);
        }
    }
}