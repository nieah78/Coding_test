#include <iostream>
using namespace std;

static int n;
static int arr[100001], D[100001][2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    D[0][0] = D[0][1] = arr[0];
    int best = arr[0];

    for(int i = 1; i < n; i++){
        D[i][0] = max(arr[i], D[i-1][0] + arr[i]);
        D[i][1] = max(D[i-1][0], D[i-1][1] + arr[i]);
        best = max(max(D[i][0], D[i][1]), best);
    }

    cout << best;
    return 0;
}