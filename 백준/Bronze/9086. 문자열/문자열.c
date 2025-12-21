#include <stdio.h>
#include <string.h>

int main(){
    char a[1000];
    int T, L;
    
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        scanf("%s", a);
        int L = strlen(a);
        printf("%c%c\n", a[0], a[L-1]);
    }

}