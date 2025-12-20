#include <stdio.h>
#include <string.h>

int main(){
    int N, len, flag;
    int result = 0;
    char arr[102];
    int eng[26];
    scanf("%d", &N);

    for(int i = 0; i<N; i++){

        scanf("%s", arr);
        len = strlen(arr);
        
        if(len > 2){

            for(int j = 0; j<26; j++){
                eng[j] = 0;
            }

            flag = 0;

            eng[arr[0]-97] += 1;
            for(int j = 0; j<len-1; j++){
                if(arr[j] != arr[j+1]) eng[arr[j+1]-97] += 1;
            }

            for(int k = 0; k<26; k++){
                if(eng[k] > 1){
                flag += 1;
                }
            }


            if(flag == 0) result += 1;

            
        }
        else result += 1;

        for(int j = 0; j<len; j++){
                arr[j] = 0;
            }
        
    }

    printf("%d", result);
}