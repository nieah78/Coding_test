#include <stdio.h>
#include <string.h>

int main(){
    char S[100];
    char arr[26];
    scanf("%s", &S);
    int len = strlen(S);

    for(int j = 0; j<26; j++){
        arr[j] = -1;
    }

    for (int k = 0; k < len; k++){
            if (arr[S[k] - 'a'] == -1){
            arr[S[k] - 'a'] = k;
        }
    }

    for(int l = 0; l < 26; l++){
        printf("%d ", arr[l]);
    }
}