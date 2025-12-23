#include <stdio.h>
#include <string.h>

int main(){
    char a[102];
    int check = 0;
    scanf("%s", a);
    int len = strlen(a);
    if(len%2 == 0){
        for(int i = 0; i < len/2; i++){
            if(a[i] != a[len-i-1]){
                check += 1;
            }
        }
    }
    else{
        for(int j = 0; j < (len-1)/2; j++){
            if(a[j] != a[len-j-1]){
                check += 1;
            }
        }
    }

    if(check == 0){
        printf("1");
    }
    else{
        printf("0");
    }
}