#include <stdio.h>
#include <string.h>

int main(){
    int result;
    char arr[102];
    scanf("%s", arr);
    
    int count = 0;
    int len = strlen(arr);
    int plus = len;

    for(int i = 0; i<len-1; i++){
        if(arr[i]=='c' && arr[i+1]=='='){
            count++;
            plus -= 2;
            i += 1;
        }
        else if(arr[i]=='c' && arr[i+1]=='-'){
            count++;
            plus -= 2;
            i += 1;
        }
        else if(arr[i]=='d' && arr[i+1]=='z' && arr[i+2]=='='){
            count++;
            plus -= 3;
            i += 2;
        }
        else if(arr[i]=='d' && arr[i+1]=='-'){
            count++;
            plus -= 2;
            i += 1;
        }
        else if(arr[i]=='l' && arr[i+1]=='j'){
            count++;
            plus -= 2;
            i += 1;
        }
        else if(arr[i]=='n' && arr[i+1]=='j'){
            count++;
            plus -= 2;
            i += 1;
        }
        else if(arr[i]=='s' && arr[i+1]=='='){
            count++;
            plus -= 2;
            i += 1;
        }
        else if(arr[i]=='z' && arr[i+1]=='='){
            count++;
            plus -= 2;
            i += 1;
        }
    }
    printf("%d", count+ plus);
}