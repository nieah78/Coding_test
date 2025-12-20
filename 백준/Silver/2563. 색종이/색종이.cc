#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num, x, y;
    int arr[101][101];
    int result = 0;
    scanf("%d", &num);

    for(int i = 0; i<num; i++){
        scanf("%d %d", &x, &y);
        for(int j = x; j<x+10; j++){
            for(int k = y; k<y+10; k++){
                if(arr[j][k] == 1) continue;
                arr[j][k] = 1;
                result++;
            }
        }
    }
    printf("%d", result);
}