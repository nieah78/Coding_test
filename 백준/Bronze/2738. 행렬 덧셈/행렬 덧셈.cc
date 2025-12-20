#include <iostream>
using namespace std;

int main(){
    int a[101][101];
    int b[101][101];
    int N, M;

    scanf("%d %d", &N, &M);
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> b[i][j];
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        printf("\n");
    }

    
}