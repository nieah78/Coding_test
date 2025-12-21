#include <iostream>
using namespace std;

char arr[5][15];

int main(){

    for(int i = 0; i<5; i++){
        cin >> arr[i];
    }

    for(int j = 0; j<15; j++){
        for(int k = 0; k<5; k++){
            if(arr[k][j] != '\0') cout << arr[k][j];
        }
        
    }


}