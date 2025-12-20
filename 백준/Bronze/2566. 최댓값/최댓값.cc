#include <iostream>
using namespace std;

int main(){
    int max = 0, row = 1, col = 1;
    int a[9][9];

    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            cin >> a[i][j];
            if(a[i][j] > max){
                max = a[i][j];
                row = i+1;
                col = j+1;
            }
        }
    }
    cout << max << endl;
    cout << row << " " << col;
}