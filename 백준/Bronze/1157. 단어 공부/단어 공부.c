#include <stdio.h>
#include <string.h>

int main(){
    char arr[1000002];
    int eng[26] = {0,};
    int max = 0;
    int what = 0;
    int ans;

    scanf("%s", arr);
    int len = strlen(arr);

    for(int i = 0; i<len; i++){
        if(arr[i] >= 'a') eng[arr[i] - 'a']++;
        else eng[arr[i] - 'A']++;
    }

    for(int j = 0; j<26; j++){
        if(eng[j] > max){
            max = eng[j];
            what = 0;
            ans = j;
        }
        else if(eng[j] == max){
            what = 1;
        } 
    }

    if(what) printf("?");
    else printf("%c", ans + 'A');
}