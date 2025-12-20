#include <stdio.h>
#include <string.h>

int main(){
    char a[1000000];
    int num = 0;
    scanf("%[^\n]s", a);
    
    for(int i = 0; i<strlen(a); i++){
        if(a[i] == ' '){
        num += 1;
        }
    }
    for(int j = 0; j<strlen(a)-1; j++){
        if(a[j] == ' ' && a[j+1] == ' '){
            num -= 1;
        }
    }
    if(a[0] == ' '){
        num -= 1;
    }
    if(a[strlen(a)-1] == ' '){
        num -= 1;
    }
    printf("%d", num + 1);
}